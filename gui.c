#define UNICODE
#define _UNICODE
#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "township_data.h"

#pragma comment(lib, "comctl32.lib")

/* ── Window handles ── */
static HWND g_hwnd;
static HWND g_search_edit;
static HWND g_results_list;
static HWND g_qty_label;
static HWND g_qty_edit;
static HWND g_add_btn;
static HWND g_order_label;
static HWND g_order_list;
static HWND g_clear_btn;
static HWND g_plan_label;
static HWND g_plan_list;

/* ── Bitmaps for items ── */
static HBITMAP g_bitmaps[ITEM_COUNT];

/* ── Image list for results and plan ── */
static HIMAGELIST g_imglist;

/* ── Depth cache ── */
static int g_depth[ITEM_COUNT];

/* ── Search results mapping: listview row -> item id ── */
static int g_result_ids[ITEM_COUNT];
static int g_result_count;

/* ── Order ── */
#define MAX_ORDER 256
static int g_order_ids[MAX_ORDER];
static int g_order_qtys[MAX_ORDER];
static int g_order_count;

/* ── Plan output ── */
#define MAX_PLAN_LINES 1024
typedef struct {
    int item_id;
    int quantity;
    int batches;
    int is_header;
    int is_ordered;
    wchar_t text[256];
} PlanLine;
static PlanLine g_plan_lines[MAX_PLAN_LINES];
static int g_plan_count;

/* ── Control IDs ── */
#define ID_SEARCH_EDIT  101
#define ID_RESULTS_LIST 103
#define ID_QTY_EDIT     104
#define ID_ADD_BTN      105
#define ID_ORDER_LIST   106
#define ID_CLEAR_BTN    108
#define ID_PLAN_LIST    109

/* ── Layout constants ── */
#define LEFT_W      355
#define MID_X       370
#define MID_W       220
#define PLAN_X      370
#define TOP_MARGIN  10

/* ── Font ── */
static HFONT g_font;

/* ── Depth calculation ── */
static int calc_depth(int item_id) {
    if (g_depth[item_id] >= 0) return g_depth[item_id];
    const Item *item = &g_items[item_id];
    if (item->ingredient_count == 0) {
        g_depth[item_id] = 0;
        return 0;
    }
    int max_d = 0;
    for (int i = 0; i < item->ingredient_count; i++) {
        int d = calc_depth(item->ingredients[i].item_id) + 1;
        if (d > max_d) max_d = d;
    }
    g_depth[item_id] = max_d;
    return max_d;
}

static void init_depths(void) {
    memset(g_depth, -1, sizeof(g_depth));
    for (int i = 0; i < ITEM_COUNT; i++)
        calc_depth(i);
}

/* ── Load item bitmaps ── */
static void load_bitmaps(void) {
    wchar_t path[MAX_PATH];
    wchar_t exe_dir[MAX_PATH];

    GetModuleFileNameW(NULL, exe_dir, MAX_PATH);
    wchar_t *last_slash = wcsrchr(exe_dir, L'\\');
    if (last_slash) *(last_slash + 1) = L'\0';

    g_imglist = ImageList_Create(60, 60, ILC_COLOR24, ITEM_COUNT, 0);

    HDC hdc = GetDC(NULL);
    HBITMAP blank = CreateCompatibleBitmap(hdc, 60, 60);
    HDC memdc = CreateCompatibleDC(hdc);
    SelectObject(memdc, blank);
    RECT r = {0, 0, 60, 60};
    HBRUSH br = CreateSolidBrush(RGB(240, 240, 240));
    FillRect(memdc, &r, br);
    DeleteObject(br);
    DeleteDC(memdc);
    ReleaseDC(NULL, hdc);

    for (int i = 0; i < ITEM_COUNT; i++)
        ImageList_Add(g_imglist, blank, NULL);

    for (int i = 0; i < ITEM_COUNT; i++) {
        const char *img = g_item_images[i];
        if (img[0] == '\0') {
            g_bitmaps[i] = blank;
            continue;
        }

        char bmp_name[MAX_IMAGE_NAME + 4];
        strncpy(bmp_name, img, MAX_IMAGE_NAME);
        bmp_name[MAX_IMAGE_NAME] = '\0';
        char *ext = strstr(bmp_name, ".webp");
        if (ext) strcpy(ext, ".bmp");

        char clean_name[MAX_IMAGE_NAME + 4];
        int ci = 0;
        for (int j = 0; bmp_name[j] && ci < (int)sizeof(clean_name) - 1; j++) {
            if (bmp_name[j] == '%' && bmp_name[j+1] == '3' &&
                (bmp_name[j+2] == 'F' || bmp_name[j+2] == 'f')) {
                clean_name[ci++] = '_';
                j += 2;
            } else {
                clean_name[ci++] = bmp_name[j];
            }
        }
        clean_name[ci] = '\0';

        swprintf(path, MAX_PATH, L"%lsimages\\%hs", exe_dir, clean_name);

        HBITMAP hbm = (HBITMAP)LoadImageW(NULL, path, IMAGE_BITMAP,
                                          0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
        if (hbm) {
            g_bitmaps[i] = hbm;
            ImageList_Replace(g_imglist, i, hbm, NULL);
        } else {
            g_bitmaps[i] = blank;
        }
    }
}

/* ── Case-insensitive substring search ── */
static int stristr_a(const char *haystack, const char *needle) {
    size_t nlen = strlen(needle);
    size_t hlen = strlen(haystack);
    if (nlen > hlen) return 0;
    for (size_t i = 0; i <= hlen - nlen; i++) {
        int match = 1;
        for (size_t j = 0; j < nlen; j++) {
            if (tolower((unsigned char)haystack[i + j]) !=
                tolower((unsigned char)needle[j])) {
                match = 0;
                break;
            }
        }
        if (match) return 1;
    }
    return 0;
}

/* ── Populate search results ── */
static void do_search(void) {
    wchar_t wquery[128];
    char query[128];
    GetWindowTextW(g_search_edit, wquery, 128);
    WideCharToMultiByte(CP_UTF8, 0, wquery, -1, query, 128, NULL, NULL);

    ListView_DeleteAllItems(g_results_list);
    g_result_count = 0;

    for (int i = 0; i < ITEM_COUNT; i++) {
        if (query[0] == '\0' || stristr_a(g_items[i].name, query)) {
            LVITEMW lvi = {0};
            lvi.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_PARAM;
            lvi.iItem = g_result_count;
            wchar_t wname[64];
            MultiByteToWideChar(CP_UTF8, 0, g_items[i].name, -1, wname, 64);
            lvi.pszText = wname;
            lvi.iImage = i;
            lvi.lParam = i;
            ListView_InsertItem(g_results_list, &lvi);

            wchar_t wfac[64];
            MultiByteToWideChar(CP_UTF8, 0,
                g_factories[g_items[i].factory_id].name, -1, wfac, 64);
            ListView_SetItemText(g_results_list, g_result_count, 1, wfac);

            g_result_ids[g_result_count] = i;
            g_result_count++;
        }
    }
}

/* ── Forward declarations ── */
static void calculate_plan(void);

/* ── Refresh order list and recalculate plan ── */
static void refresh_order(void) {
    SendMessageW(g_order_list, LB_RESETCONTENT, 0, 0);
    for (int i = 0; i < g_order_count; i++) {
        wchar_t buf[128];
        wchar_t wname[64];
        MultiByteToWideChar(CP_UTF8, 0, g_items[g_order_ids[i]].name,
                            -1, wname, 64);
        swprintf(buf, 128, L"%d x %ls", g_order_qtys[i], wname);
        SendMessageW(g_order_list, LB_ADDSTRING, 0, (LPARAM)buf);
    }
    calculate_plan();
}

/* ── Add selected item to order ── */
static void add_to_order(void) {
    int sel = ListView_GetNextItem(g_results_list, -1, LVNI_SELECTED);
    if (sel < 0) return;

    LVITEMW lvi = {0};
    lvi.mask = LVIF_PARAM;
    lvi.iItem = sel;
    ListView_GetItem(g_results_list, &lvi);
    int item_id = (int)lvi.lParam;

    wchar_t wqty[16];
    GetWindowTextW(g_qty_edit, wqty, 16);
    int qty = _wtoi(wqty);
    if (qty == 0) qty = 1;

    /* merge if exists */
    for (int i = 0; i < g_order_count; i++) {
        if (g_order_ids[i] == item_id) {
            g_order_qtys[i] += qty;
            if (g_order_qtys[i] <= 0) {
                /* remove from order */
                for (int j = i; j < g_order_count - 1; j++) {
                    g_order_ids[j] = g_order_ids[j + 1];
                    g_order_qtys[j] = g_order_qtys[j + 1];
                }
                g_order_count--;
            }
            refresh_order();
            return;
        }
    }
    if (qty <= 0) return;
    if (g_order_count >= MAX_ORDER) return;
    g_order_ids[g_order_count] = item_id;
    g_order_qtys[g_order_count] = qty;
    g_order_count++;
    refresh_order();
}

/* ── Format time ── */
static void format_time(int secs, wchar_t *buf, int buflen) {
    int h = secs / 3600;
    int m = (secs % 3600) / 60;
    int s = secs % 60;
    if (h > 0 && m > 0)     swprintf(buf, buflen, L"%dh %dm", h, m);
    else if (h > 0)          swprintf(buf, buflen, L"%dh", h);
    else if (m > 0 && s > 0) swprintf(buf, buflen, L"%dm %ds", m, s);
    else if (m > 0)          swprintf(buf, buflen, L"%dm", m);
    else                     swprintf(buf, buflen, L"--");
}

/* ── Calculate and display production plan ── */
static void calculate_plan(void) {
    g_plan_count = 0;
    ListView_DeleteAllItems(g_plan_list);

    if (g_order_count == 0) return;

    int needs[ITEM_COUNT] = {0};
    int batches[ITEM_COUNT] = {0};
    int is_ordered[ITEM_COUNT] = {0};

    for (int i = 0; i < g_order_count; i++) {
        needs[g_order_ids[i]] += g_order_qtys[i];
        is_ordered[g_order_ids[i]] = 1;
    }

    int max_depth = 0;
    for (int i = 0; i < ITEM_COUNT; i++)
        if (g_depth[i] > max_depth) max_depth = g_depth[i];

    for (int d = max_depth; d >= 1; d--) {
        for (int i = 0; i < ITEM_COUNT; i++) {
            if (g_depth[i] == d && needs[i] > 0) {
                const Item *item = &g_items[i];
                int b = (needs[i] + item->production_quantity - 1)
                        / item->production_quantity;
                batches[i] = b;
                for (int j = 0; j < item->ingredient_count; j++) {
                    needs[item->ingredients[j].item_id] +=
                        item->ingredients[j].quantity * b;
                }
            }
        }
    }

    for (int d = 0; d <= max_depth; d++) {
        int has_items = 0;
        for (int i = 0; i < ITEM_COUNT; i++)
            if (g_depth[i] == d && needs[i] > 0) { has_items = 1; break; }
        if (!has_items) continue;

        /* header */
        PlanLine *hdr = &g_plan_lines[g_plan_count];
        hdr->is_header = 1;
        hdr->item_id = -1;
        if (d == 0)
            wcscpy(hdr->text, L"--- Gather / Grow / Mine ---");
        else
            swprintf(hdr->text, 256, L"--- Step %d ---", d);

        LVITEMW lvi = {0};
        lvi.mask = LVIF_TEXT | LVIF_PARAM;
        lvi.iItem = g_plan_count;
        lvi.pszText = hdr->text;
        lvi.lParam = -1;
        ListView_InsertItem(g_plan_list, &lvi);
        g_plan_count++;

        for (int i = 0; i < ITEM_COUNT; i++) {
            if (g_depth[i] != d || needs[i] <= 0) continue;
            if (g_plan_count >= MAX_PLAN_LINES) break;

            const Item *item = &g_items[i];
            const Factory *fac = &g_factories[item->factory_id];

            PlanLine *pl = &g_plan_lines[g_plan_count];
            pl->is_header = 0;
            pl->item_id = i;
            pl->quantity = needs[i];
            pl->batches = batches[i];
            pl->is_ordered = is_ordered[i];

            wchar_t wname[64], wfac[64];
            MultiByteToWideChar(CP_UTF8, 0, item->name, -1, wname, 64);
            MultiByteToWideChar(CP_UTF8, 0, fac->name, -1, wfac, 64);

            if (d == 0) {
                swprintf(pl->text, 256, L"  %d x %ls", needs[i], wname);
            } else {
                wchar_t wtime[32];
                format_time(item->production_seconds * batches[i], wtime, 32);
                int produced = batches[i] * item->production_quantity;
                int surplus = produced - needs[i];
                if (surplus > 0 && is_ordered[i])
                    swprintf(pl->text, 256, L"  %d x %ls  (%d batch, +%d)  %ls  ORDER",
                             needs[i], wname, batches[i], surplus, wtime);
                else if (surplus > 0)
                    swprintf(pl->text, 256, L"  %d x %ls  (%d batch, +%d)  %ls",
                             needs[i], wname, batches[i], surplus, wtime);
                else if (is_ordered[i])
                    swprintf(pl->text, 256, L"  %d x %ls  (%d batch)  %ls  ORDER",
                             needs[i], wname, batches[i], wtime);
                else
                    swprintf(pl->text, 256, L"  %d x %ls  (%d batch)  %ls",
                             needs[i], wname, batches[i], wtime);
            }

            LVITEMW lvi2 = {0};
            lvi2.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_PARAM;
            lvi2.iItem = g_plan_count;
            lvi2.pszText = pl->text;
            lvi2.iImage = i;
            lvi2.lParam = i;
            ListView_InsertItem(g_plan_list, &lvi2);

            ListView_SetItemText(g_plan_list, g_plan_count, 1, wfac);

            g_plan_count++;
        }
    }
}

/* ── Reposition controls on resize ── */
static void do_layout(HWND hwnd) {
    RECT rc;
    GetClientRect(hwnd, &rc);
    int cw = rc.right;
    int ch = rc.bottom;

    /* Left panel: fixed width LEFT_W */
    int results_h = ch - 100;  /* room for search bar top + qty bar bottom */
    if (results_h < 100) results_h = 100;
    MoveWindow(g_results_list, 10, 62, LEFT_W, results_h, TRUE);

    int qty_y = 62 + results_h + 6;
    MoveWindow(g_qty_label, 10, qty_y + 2, 30, 20, TRUE);
    MoveWindow(g_qty_edit, 42, qty_y, 40, 24, TRUE);
    MoveWindow(g_add_btn, 88, qty_y, 100, 24, TRUE);

    /* Middle panel: order list + clear button, fixed width */
    MoveWindow(g_order_list, MID_X, 32, MID_W, 200, TRUE);
    MoveWindow(g_clear_btn, MID_X, 238, 60, 28, TRUE);

    /* Right/bottom panel: plan fills remaining space */
    int plan_w = cw - PLAN_X - 10;
    if (plan_w < 200) plan_w = 200;
    int plan_h = ch - 297 - 10;
    if (plan_h < 100) plan_h = 100;
    MoveWindow(g_plan_list, PLAN_X, 297, plan_w, plan_h, TRUE);

    /* Adjust plan columns to fill width */
    int col0_w = plan_w - 150;
    if (col0_w < 200) col0_w = 200;
    ListView_SetColumnWidth(g_plan_list, 0, col0_w);
    ListView_SetColumnWidth(g_plan_list, 1, 140);
}

/* ── Subclass proc for edit controls to handle Enter ── */
static WNDPROC g_orig_edit_proc;
static LRESULT CALLBACK EditSubclassProc(HWND hwnd, UINT msg,
                                          WPARAM wParam, LPARAM lParam) {
    if (msg == WM_KEYDOWN && wParam == VK_RETURN) {
        SendMessageW(g_hwnd, WM_COMMAND,
                     MAKEWPARAM(ID_ADD_BTN, BN_CLICKED), (LPARAM)g_add_btn);
        return 0;
    }
    return CallWindowProcW(g_orig_edit_proc, hwnd, msg, wParam, lParam);
}

/* ── Window procedure ── */
static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam,
                                LPARAM lParam) {
    switch (msg) {
    case WM_CREATE: {
        HINSTANCE hInst = ((LPCREATESTRUCT)lParam)->hInstance;
        g_font = CreateFontW(-14, 0, 0, 0, FW_NORMAL, 0, 0, 0,
                             DEFAULT_CHARSET, 0, 0, CLEARTYPE_QUALITY,
                             0, L"Segoe UI");

        /* === Left panel: Search + Results === */
        CreateWindowW(L"STATIC", L"Search items:",
                      WS_CHILD | WS_VISIBLE, 10, 10, 100, 20,
                      hwnd, NULL, hInst, NULL);

        g_search_edit = CreateWindowW(L"EDIT", L"",
            WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
            10, 32, 280, 24, hwnd, (HMENU)ID_SEARCH_EDIT, hInst, NULL);

        g_results_list = CreateWindowW(WC_LISTVIEWW, L"",
            WS_CHILD | WS_VISIBLE | WS_BORDER | LVS_REPORT |
            LVS_SINGLESEL | LVS_SHOWSELALWAYS,
            10, 62, LEFT_W, 500, hwnd, (HMENU)ID_RESULTS_LIST, hInst, NULL);
        ListView_SetExtendedListViewStyle(g_results_list,
            LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

        /* Qty + Add */
        g_qty_label = CreateWindowW(L"STATIC", L"Qty:",
                      WS_CHILD | WS_VISIBLE, 10, 568, 30, 20,
                      hwnd, NULL, hInst, NULL);
        g_qty_edit = CreateWindowW(L"EDIT", L"1",
            WS_CHILD | WS_VISIBLE | WS_BORDER,
            42, 568, 40, 24, hwnd, (HMENU)ID_QTY_EDIT, hInst, NULL);
        g_add_btn = CreateWindowW(L"BUTTON", L"Add to Order",
            WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
            88, 568, 100, 24, hwnd, (HMENU)ID_ADD_BTN, hInst, NULL);

        /* === Middle panel: Order === */
        g_order_label = CreateWindowW(L"STATIC", L"Order:",
                      WS_CHILD | WS_VISIBLE, MID_X, 10, 60, 20,
                      hwnd, NULL, hInst, NULL);

        g_order_list = CreateWindowW(L"LISTBOX", L"",
            WS_CHILD | WS_VISIBLE | WS_BORDER | WS_VSCROLL | LBS_NOINTEGRALHEIGHT,
            MID_X, 32, MID_W, 200, hwnd, (HMENU)ID_ORDER_LIST, hInst, NULL);

        g_clear_btn = CreateWindowW(L"BUTTON", L"Clear",
            WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
            MID_X, 238, 60, 28, hwnd, (HMENU)ID_CLEAR_BTN, hInst, NULL);

        /* === Plan panel === */
        g_plan_label = CreateWindowW(L"STATIC", L"Production Plan:",
                      WS_CHILD | WS_VISIBLE, PLAN_X, 275, 120, 20,
                      hwnd, NULL, hInst, NULL);

        g_plan_list = CreateWindowW(WC_LISTVIEWW, L"",
            WS_CHILD | WS_VISIBLE | WS_BORDER | LVS_REPORT |
            LVS_SINGLESEL | LVS_NOCOLUMNHEADER,
            PLAN_X, 297, 520, 295, hwnd, (HMENU)ID_PLAN_LIST, hInst, NULL);
        ListView_SetExtendedListViewStyle(g_plan_list,
            LVS_EX_FULLROWSELECT);

        /* Set font on all controls */
        HWND children[] = {g_search_edit, g_results_list,
                           g_qty_label, g_qty_edit, g_add_btn,
                           g_order_label, g_order_list,
                           g_clear_btn, g_plan_label, g_plan_list};
        for (int i = 0; i < 10; i++)
            SendMessageW(children[i], WM_SETFONT, (WPARAM)g_font, TRUE);

        /* Subclass edit controls so Enter triggers Add */
        g_orig_edit_proc = (WNDPROC)SetWindowLongPtrW(g_search_edit,
                            GWLP_WNDPROC, (LONG_PTR)EditSubclassProc);
        SetWindowLongPtrW(g_qty_edit, GWLP_WNDPROC, (LONG_PTR)EditSubclassProc);

        /* Setup columns for results list */
        LVCOLUMNW col = {0};
        col.mask = LVCF_TEXT | LVCF_WIDTH;
        col.cx = 200;
        col.pszText = L"Item";
        ListView_InsertColumn(g_results_list, 0, &col);
        col.cx = 130;
        col.pszText = L"Factory";
        ListView_InsertColumn(g_results_list, 1, &col);

        /* Setup columns for plan list */
        col.cx = 380;
        col.pszText = L"Item";
        ListView_InsertColumn(g_plan_list, 0, &col);
        col.cx = 130;
        col.pszText = L"Factory";
        ListView_InsertColumn(g_plan_list, 1, &col);

        /* Load bitmaps and set image lists */
        load_bitmaps();
        ListView_SetImageList(g_results_list, g_imglist, LVSIL_SMALL);
        ListView_SetImageList(g_plan_list, g_imglist, LVSIL_SMALL);

        /* Initial search (show all) */
        do_search();
        break;
    }

    case WM_SIZE:
        do_layout(hwnd);
        break;

    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case ID_SEARCH_EDIT:
            if (HIWORD(wParam) == EN_CHANGE)
                do_search();
            break;
        case ID_ADD_BTN:
            add_to_order();
            break;
        case ID_CLEAR_BTN:
            g_order_count = 0;
            refresh_order();
            break;
        }
        break;

    case WM_NOTIFY: {
        NMHDR *nm = (NMHDR *)lParam;
        if (nm->idFrom == ID_RESULTS_LIST && nm->code == NM_DBLCLK) {
            add_to_order();
        }
        break;
    }

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR cmdLine, int show) {
    (void)hPrev; (void)cmdLine;

    init_depths();

    INITCOMMONCONTROLSEX icc = { sizeof(icc), ICC_LISTVIEW_CLASSES };
    InitCommonControlsEx(&icc);

    WNDCLASSW wc = {0};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInst;
    wc.hIcon = LoadIconW(hInst, L"IDI_APPICON");
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = L"TownshipPlanner";
    RegisterClassW(&wc);

    g_hwnd = CreateWindowW(L"TownshipPlanner",
        L"Township Production Planner",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 910, 640,
        NULL, NULL, hInst, NULL);

    ShowWindow(g_hwnd, show);
    UpdateWindow(g_hwnd);

    MSG msg;
    while (GetMessageW(&msg, NULL, 0, 0)) {
        if (msg.message == WM_KEYDOWN && msg.wParam == VK_RETURN) {
            SendMessageW(g_hwnd, WM_COMMAND,
                         MAKEWPARAM(ID_ADD_BTN, BN_CLICKED), (LPARAM)g_add_btn);
            continue;
        }
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    return (int)msg.wParam;
}
