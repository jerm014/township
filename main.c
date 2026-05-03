#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "township_data.h"

/* ── Dependency depth cache ── */
static int g_depth[ITEM_COUNT];

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

/* ── Case-insensitive substring search ── */
static int stristr(const char *haystack, const char *needle) {
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

/* ── Search and display matching items ── */
static int search_items(const char *query) {
    int count = 0;
    for (int i = 0; i < ITEM_COUNT; i++) {
        if (stristr(g_items[i].name, query)) {
            printf("  %3d  %-30s  (%s)\n", i, g_items[i].name,
                   g_factories[g_items[i].factory_id].name);
            count++;
        }
    }
    return count;
}

/* ── Production plan calculation ── */
static void calculate_plan(int *order_ids, int *order_qtys, int order_count) {
    int needs[ITEM_COUNT] = {0};
    int batches[ITEM_COUNT] = {0};
    int is_ordered[ITEM_COUNT] = {0};

    /* seed with the order */
    for (int i = 0; i < order_count; i++) {
        needs[order_ids[i]] += order_qtys[i];
        is_ordered[order_ids[i]] = 1;
    }

    /* find max depth */
    int max_depth = 0;
    for (int i = 0; i < ITEM_COUNT; i++)
        if (g_depth[i] > max_depth) max_depth = g_depth[i];

    /* propagate needs from highest depth down to base */
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

    /* display */
    printf("\n");
    printf("========================================\n");
    printf("  PRODUCTION PLAN\n");
    printf("========================================\n\n");

    for (int d = 0; d <= max_depth; d++) {
        int header_printed = 0;
        for (int i = 0; i < ITEM_COUNT; i++) {
            if (g_depth[i] != d || needs[i] <= 0) continue;

            if (!header_printed) {
                if (d == 0)
                    printf("--- Gather / Grow / Mine ---\n");
                else
                    printf("--- Step %d ---\n", d);
                header_printed = 1;
            }

            const Item *item = &g_items[i];
            const Factory *fac = &g_factories[item->factory_id];

            if (d == 0) {
                /* base items: just show quantity and source */
                printf("  %4d x %-28s  [%s]\n",
                       needs[i], item->name, fac->name);
            } else {
                /* produced items: show batches and time */
                int total_secs = item->production_seconds * batches[i];
                int hrs = total_secs / 3600;
                int mins = (total_secs % 3600) / 60;
                int secs = total_secs % 60;

                int produced = batches[i] * item->production_quantity;
                int surplus = produced - needs[i];

                printf("  %4d x %-28s  [%s]  %d batch%s",
                       needs[i], item->name, fac->name,
                       batches[i], batches[i] > 1 ? "es" : "");

                if (surplus > 0)
                    printf(" (+%d extra)", surplus);

                if (hrs > 0 && mins > 0)
                    printf("  %dh %dm", hrs, mins);
                else if (hrs > 0)
                    printf("  %dh", hrs);
                else if (mins > 0 && secs > 0)
                    printf("  %dm %ds", mins, secs);
                else if (mins > 0)
                    printf("  %dm", mins);

                if (is_ordered[i])
                    printf("  << ORDER");

                printf("\n");
            }
        }
        if (header_printed) printf("\n");
    }
}

/* ── Format time helper ── */
static void print_time(int secs) {
    int h = secs / 3600;
    int m = (secs % 3600) / 60;
    int s = secs % 60;
    if (h > 0 && m > 0) printf("%dh %dm", h, m);
    else if (h > 0)      printf("%dh", h);
    else if (m > 0 && s > 0) printf("%dm %ds", m, s);
    else if (m > 0)      printf("%dm", m);
    else if (s > 0)      printf("%ds", s);
    else                  printf("instant");
}

/* ── Show item details ── */
static void show_item(int id) {
    const Item *item = &g_items[id];
    const Factory *fac = &g_factories[item->factory_id];
    printf("\n  %s\n", item->name);
    printf("  Made at: %s\n", fac->name);
    printf("  Time: ");
    print_time(item->production_seconds);
    printf("\n");
    if (item->production_quantity > 1)
        printf("  Produces: %d per batch\n", item->production_quantity);
    if (item->ingredient_count > 0) {
        printf("  Ingredients:\n");
        for (int i = 0; i < item->ingredient_count; i++)
            printf("    %d x %s\n",
                   item->ingredients[i].quantity,
                   g_items[item->ingredients[i].item_id].name);
    }
    printf("\n");
}

int main(void) {
    init_depths();

    int order_ids[256];
    int order_qtys[256];
    int order_count = 0;

    char line[256];

    printf("Township Production Planner\n");
    printf("==========================\n\n");
    printf("Commands:\n");
    printf("  search <text>    - find items by name\n");
    printf("  info <number>    - show item details\n");
    printf("  add <number> <qty> - add to order\n");
    printf("  order            - show current order\n");
    printf("  go               - calculate production plan\n");
    printf("  clear            - clear order\n");
    printf("  quit             - exit\n\n");

    for (;;) {
        printf("> ");
        fflush(stdout);
        if (!fgets(line, sizeof(line), stdin)) break;

        /* strip newline */
        line[strcspn(line, "\r\n")] = '\0';

        /* skip empty */
        if (line[0] == '\0') continue;

        if (strncmp(line, "search ", 7) == 0) {
            const char *query = line + 7;
            while (*query == ' ') query++;
            int n = search_items(query);
            if (n == 0) printf("  No items found.\n");
            printf("  (%d result%s)\n", n, n != 1 ? "s" : "");

        } else if (strncmp(line, "info ", 5) == 0) {
            int id = atoi(line + 5);
            if (id >= 0 && id < ITEM_COUNT)
                show_item(id);
            else
                printf("  Invalid item number.\n");

        } else if (strncmp(line, "add ", 4) == 0) {
            int id = 0, qty = 1;
            int parsed = sscanf(line + 4, "%d %d", &id, &qty);
            if (parsed < 1 || id < 0 || id >= ITEM_COUNT) {
                printf("  Usage: add <item_number> <quantity>\n");
                continue;
            }
            if (qty <= 0) qty = 1;
            if (order_count >= 256) {
                printf("  Order is full.\n");
                continue;
            }
            /* merge with existing if same item */
            int found = 0;
            for (int i = 0; i < order_count; i++) {
                if (order_ids[i] == id) {
                    order_qtys[i] += qty;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                order_ids[order_count] = id;
                order_qtys[order_count] = qty;
                order_count++;
            }
            printf("  Added %d x %s\n", qty, g_items[id].name);

        } else if (strcmp(line, "order") == 0) {
            if (order_count == 0) {
                printf("  Order is empty.\n");
            } else {
                printf("  Current order:\n");
                for (int i = 0; i < order_count; i++)
                    printf("    %d x %s\n", order_qtys[i],
                           g_items[order_ids[i]].name);
            }

        } else if (strcmp(line, "go") == 0) {
            if (order_count == 0) {
                printf("  Order is empty. Add items first.\n");
            } else {
                calculate_plan(order_ids, order_qtys, order_count);
            }

        } else if (strcmp(line, "clear") == 0) {
            order_count = 0;
            printf("  Order cleared.\n");

        } else if (strcmp(line, "quit") == 0 || strcmp(line, "exit") == 0) {
            break;

        } else {
            printf("  Unknown command. Type 'search <text>' to find items.\n");
        }
    }

    return 0;
}
