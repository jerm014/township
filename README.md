# Jeremy Township

A Windows C application for planning and optimizing production chains in the game Township.

## Application

`township.exe` — a Win32 GUI app that lets users build orders of items and instantly see the full production plan broken down into steps, from base materials up to the final products.

### Features
- Search items by name with live filtering
- Item images displayed throughout (60x60 BMP icons from game assets)
- Add/remove items from an order with quantities (supports negative to reduce)
- Production plan auto-updates whenever the order changes
- Plan shows grouped steps by dependency depth:
  - Step 0: Gather/Grow/Mine (crops, island items, mine ores)
  - Step 1+: Intermediate and final products with batch counts, surplus, time estimates, and factory names
- Resizable window: item list stretches vertically, plan stretches both directions
- Enter key triggers Add from anywhere
- Custom app icon

### Building
```
x86_64-w64-mingw32-windres resource.rc -o resource.o
x86_64-w64-mingw32-gcc -O2 -mwindows -o township.exe gui.c township_data.c resource.o -lcomctl32 -lgdi32
```

### Deployment
Copy to a folder containing:
```
township.exe
images/          (324 BMP files, 60x60, converted from game webp assets)
```

## Data Structures

### `township.h` — Core types
- `FactoryType` enum: `FACTORY_FIELD`, `FACTORY_BUILDING`, `FACTORY_ANIMAL`, `FACTORY_SHIP`, `FACTORY_MINE`, `FACTORY_UNKNOWN`
- `Ingredient` — item_id + quantity
- `Factory` — id, name, type
- `Item` — id, name, factory_id, production_seconds, production_quantity, ingredient_count, ingredients[5]

### `township_data.h` — Enums
- Factory IDs (`FAC_FIELD`, `FAC_BAKERY`, etc.) — 54 factories
- Item IDs (`ITEM_WHEAT`, `ITEM_BREAD`, etc.) — 324 items

### `township_data.c` — Game data
- `g_factories[]` — all 54 factories with names and types
- `g_items[]` — all 324 items with recipes, production times, quantities, and dependencies
- `g_item_images[]` — maps each item to its BMP filename

### Source files
| File | Purpose |
|---|---|
| `township.h` | Core structs and constants |
| `township_data.h` | Factory and item ID enums |
| `township_data.c` | All game data: factories, items, recipes, image mappings |
| `gui.c` | Win32 GUI application |
| `main.c` | Console version (text-based) |
| `resource.rc` | Windows resource file (app icon) |
| `township.ico` | App icon (multi-size) |

## Game Data Coverage

### Factories (54 total)
- **Field** — 24 crops (Wheat through Lavender)
- **Islands** (5) — Frutus, Olivia, Tropica, Fisherman's, Bonita (15 items, random batches)
- **Mine** — 5 ores + clay (random batches)
- **Foundry** — 4 ingots from ores
- **Farm Buildings** (8) — Cow, Chicken, Sheep, Bee, Pig, Duck, Otter, Mushroom
- **Feed Mill** — 6 feeds including Substrate
- **Production Buildings** (35) — Dairy, Bakery, Sugar Factory, Textile Factory, Food Processing Plant, Pastry Factory, Ice Cream Factory, Rubber Factory, Paper Factory, Fast Food Restaurant, Snack Factory, Tailor Shop, Jam Factory, Candy Factory, Household Goods Factory, Plastics Factory, Bag Factory, Grill Factory, Perfume Factory, Beverage Factory, Cake Factory, Hot Dog Factory, French Restaurant, Coffee Factory, Down Feather Factory, Doll Factory, Pet Supply Factory, Vegan Cafe, Festivities Factory, Gardening Supplies Factory, Italian Restaurant, Bouquet Factory, Kitchenware Factory, Music Factory, Tea Factory, Asian Restaurant, Mexican Restaurant, Jewelry Store, Shoe Factory, Furniture Factory, Stationery Factory

### Items (324 total)
- 24 crops, 15 island items, 6 mine items
- 6 feeds, 11 animal products, 4 ingots
- 258 produced goods across 35 factories

### Production model
- Most items produce 1 per batch; feeds produce 3
- Island/mine items have `production_seconds = 0` (inventory-only, not producible on demand)
- Duck/Otter animals accept alternative feeds (only first recipe stored)
- All production times sourced from actual game data

## To Do
- Add order structures (trains, helicopters, plane)
- Track actual inventory on hand
- Factor in factory slot limits and parallel production
- Add coin/XP values for items
