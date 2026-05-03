#include "township_data.h"

const Factory g_factories[FACTORY_COUNT] = {
    { FAC_FIELD,           "Field",           FACTORY_FIELD    },
    { FAC_FEED_MILL,       "Feed Mill",       FACTORY_BUILDING },
    { FAC_DAIRY,           "Dairy",           FACTORY_BUILDING },
    { FAC_BAKERY,          "Bakery",          FACTORY_BUILDING },
    { FAC_SUGAR_FACTORY,   "Sugar Factory",   FACTORY_BUILDING },
    { FAC_TEXTILE_FACTORY, "Textile Factory", FACTORY_BUILDING },
    { FAC_COW,             "Cow Pasture",     FACTORY_ANIMAL   },
    { FAC_CHICKEN,         "Chicken Coop",    FACTORY_ANIMAL   },
    { FAC_SHEEP,           "Sheep Farm",      FACTORY_ANIMAL   },
    { FAC_BEE,             "Bee Garden",      FACTORY_ANIMAL   },
    { FAC_PIG,             "Pig Farm",        FACTORY_ANIMAL   },
    { FAC_DUCK,            "Duck Pond",       FACTORY_ANIMAL   },
    { FAC_OTTER,           "Otter Habitat",   FACTORY_ANIMAL   },
    { FAC_MUSHROOM_FARM,   "Mushroom Farm",   FACTORY_ANIMAL   },
    { FAC_FOOD_PROCESSING, "Food Processing Plant", FACTORY_BUILDING },
    { FAC_PASTRY_FACTORY,  "Pastry Factory",        FACTORY_BUILDING },
    { FAC_ICE_CREAM_FACTORY,"Ice Cream Factory",   FACTORY_BUILDING },
    { FAC_RUBBER_FACTORY,  "Rubber Factory",       FACTORY_BUILDING },
    { FAC_PAPER_FACTORY,   "Paper Factory",        FACTORY_BUILDING },
    { FAC_FAST_FOOD,       "Fast Food Restaurant", FACTORY_BUILDING },
    { FAC_SNACK_FACTORY,   "Snack Factory",   FACTORY_BUILDING },
    { FAC_TAILOR_SHOP,     "Tailor Shop",     FACTORY_BUILDING },
    { FAC_JAM_FACTORY,     "Jam Factory",     FACTORY_BUILDING },
    { FAC_ASIAN_RESTAURANT,"Asian Restaurant",        FACTORY_BUILDING },
    { FAC_JEWELRY_STORE,   "Jewelry Store",           FACTORY_BUILDING },
    { FAC_SHOE_FACTORY,    "Shoe Factory",            FACTORY_BUILDING },
    { FAC_FURNITURE_FACTORY,"Furniture Factory",      FACTORY_BUILDING },
    { FAC_STATIONERY_FACTORY,"Stationery Factory",    FACTORY_BUILDING },
    { FAC_MEXICAN_RESTAURANT,"Mexican Restaurant",    FACTORY_BUILDING },
    { FAC_CANDY_FACTORY,   "Candy Factory",          FACTORY_BUILDING },
    { FAC_HOUSEHOLD_GOODS, "Household Goods Factory", FACTORY_BUILDING },
    { FAC_PLASTICS_FACTORY,"Plastics Factory",  FACTORY_BUILDING },
    { FAC_BAG_FACTORY,     "Bag Factory",          FACTORY_BUILDING },
    { FAC_GRILL_FACTORY,   "Grill Factory",        FACTORY_BUILDING },
    { FAC_PERFUME_FACTORY, "Perfume Factory",       FACTORY_BUILDING },
    { FAC_BEVERAGE_FACTORY,"Beverage Factory",      FACTORY_BUILDING },
    { FAC_CAKE_FACTORY,    "Cake Factory",          FACTORY_BUILDING },
    { FAC_HOT_DOG_FACTORY, "Hot Dog Factory",       FACTORY_BUILDING },
    { FAC_FRENCH_RESTAURANT,"French Restaurant",    FACTORY_BUILDING },
    { FAC_COFFEE_FACTORY,  "Coffee Factory",        FACTORY_BUILDING },
    { FAC_DOWN_FEATHER_FACTORY,"Down Feather Factory",FACTORY_BUILDING },
    { FAC_DOLL_FACTORY,    "Doll Factory",          FACTORY_BUILDING },
    { FAC_PET_SUPPLY_FACTORY,"Pet Supply Factory",    FACTORY_BUILDING },
    { FAC_VEGAN_CAFE,      "Vegan Cafe",            FACTORY_BUILDING },
    { FAC_FESTIVITIES_FACTORY,"Festivities Factory",  FACTORY_BUILDING },
    { FAC_GARDENING_SUPPLIES,"Gardening Supplies Factory",FACTORY_BUILDING },
    { FAC_ITALIAN_RESTAURANT,"Italian Restaurant",   FACTORY_BUILDING },
    { FAC_BOUQUET_FACTORY, "Bouquet Factory",       FACTORY_BUILDING },
    { FAC_KITCHENWARE_FACTORY,"Kitchenware Factory", FACTORY_BUILDING },
    { FAC_MUSIC_FACTORY,   "Music Factory",         FACTORY_BUILDING },
    { FAC_TEA_FACTORY,     "Tea Factory",           FACTORY_BUILDING },
    { FAC_FRUTUS_ISLE,     "Frutus Isle",     FACTORY_SHIP     },
    { FAC_OLIVIA_ISLE,     "Olivia Isle",     FACTORY_SHIP     },
    { FAC_TROPICA_ISLE,    "Tropica Isle",    FACTORY_SHIP     },
    { FAC_FISHERMANS_ISLE, "Fisherman's Isle",FACTORY_SHIP     },
    { FAC_BONITA_ISLE,     "Bonita Isle",     FACTORY_SHIP     },
    { FAC_FOUNDRY,         "Foundry",         FACTORY_BUILDING },
    { FAC_MINE,            "Mine",            FACTORY_MINE     },
    { FAC_UNKNOWN,         "Unknown",         FACTORY_UNKNOWN  },
};

const Item g_items[ITEM_COUNT] = {
    { ITEM_WHEAT,       "Wheat",       FAC_FIELD,   120, 1, 0, {{0}} },  /* 2 m  */
    { ITEM_CORN,        "Corn",        FAC_FIELD,   300, 1, 0, {{0}} },  /* 5 m  */
    { ITEM_CARROT,      "Carrot",      FAC_FIELD,   600, 1, 0, {{0}} },  /* 10 m */
    { ITEM_SUGARCANE,   "Sugarcane",   FAC_FIELD,  1200, 1, 0, {{0}} },  /* 20 m */
    { ITEM_COTTON,      "Cotton",      FAC_FIELD,  1800, 1, 0, {{0}} },  /* 30 m */
    { ITEM_STRAWBERRY,  "Strawberry",  FAC_FIELD,  3600, 1, 0, {{0}} },  /* 1 h  */
    { ITEM_TOMATO,      "Tomato",      FAC_FIELD,  7200, 1, 0, {{0}} },  /* 2 h  */
    { ITEM_PINE_TREE,   "Pine Tree",   FAC_FIELD, 10800, 1, 0, {{0}} },  /* 3 h  */
    { ITEM_POTATO,      "Potato",      FAC_FIELD, 14400, 1, 0, {{0}} },  /* 4 h  */
    { ITEM_CACAO,       "Cacao",       FAC_FIELD, 28800, 1, 0, {{0}} },  /* 8 h  */
    { ITEM_RUBBER_TREE, "Rubber Tree", FAC_FIELD, 43200, 1, 0, {{0}} },  /* 12 h */
    { ITEM_SILK,        "Silk",        FAC_FIELD, 54000, 1, 0, {{0}} },  /* 15 h */
    { ITEM_CORK_OAK,    "Cork Oak",    FAC_FIELD, 36000, 1, 0, {{0}} },  /* 10 h */
    { ITEM_PEPPER,      "Pepper",      FAC_FIELD, 18000, 1, 0, {{0}} },  /* 5 h */
    { ITEM_MINT,        "Mint",        FAC_FIELD,  9900, 1, 0, {{0}} },  /* 2 h 45 m */
    { ITEM_RICE,        "Rice",        FAC_FIELD,  4800, 1, 0, {{0}} },  /* 1 h 20 m */
    { ITEM_ROSE,        "Rose",        FAC_FIELD,  9000, 1, 0, {{0}} },  /* 2 h 30 m */
    { ITEM_JASMINE,     "Jasmine",     FAC_FIELD, 12600, 1, 0, {{0}} },  /* 3 h 30 m */
    { ITEM_COFFEE_PLANT,"Coffee Plant",FAC_FIELD, 21600, 1, 0, {{0}} },  /* 6 h */
    { ITEM_PEANUT_PLANT,"Peanut Plant",FAC_FIELD, 25200, 1, 0, {{0}} },  /* 7 h */
    { ITEM_APPLE,       "Apple",       FAC_FIELD, 27000, 1, 0, {{0}} },  /* 7 h 30 m */
    { ITEM_TEA_PLANT,   "Tea Plant",   FAC_FIELD, 32400, 1, 0, {{0}} },  /* 9 h */
    { ITEM_SOYBEAN,     "Soybean",     FAC_FIELD,  7200, 1, 0, {{0}} },  /* 2 h */
    { ITEM_LAVENDER,    "Lavender",    FAC_FIELD, 18000, 1, 0, {{0}} },  /* 5 h */
    { ITEM_PEACH,      "Peach",      FAC_FRUTUS_ISLE, 0, 1, 0, {{0}} },
    { ITEM_WATERMELON, "Watermelon", FAC_FRUTUS_ISLE, 0, 1, 0, {{0}} },
    { ITEM_PLUM,       "Plum",       FAC_FRUTUS_ISLE, 0, 1, 0, {{0}} },
    { ITEM_GRAPE,    "Grape",    FAC_OLIVIA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_OLIVE,    "Olive",    FAC_OLIVIA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_KEY_LIME, "Key Lime", FAC_OLIVIA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_BANANA,    "Banana",    FAC_TROPICA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_COCONUT,   "Coconut",   FAC_TROPICA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_PINEAPPLE, "Pineapple", FAC_TROPICA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_FISH,    "Fish",    FAC_FISHERMANS_ISLE, 0, 1, 0, {{0}} },
    { ITEM_SHRIMP,  "Shrimp",  FAC_FISHERMANS_ISLE, 0, 1, 0, {{0}} },
    { ITEM_LOBSTER, "Lobster", FAC_FISHERMANS_ISLE, 0, 1, 0, {{0}} },
    { ITEM_AVOCADO, "Avocado", FAC_BONITA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_MANGO,   "Mango",   FAC_BONITA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_ALOE,    "Aloe",    FAC_BONITA_ISLE, 0, 1, 0, {{0}} },
    { ITEM_COW_FEED,     "Cow Feed",     FAC_FEED_MILL,  270, 3, 2,  /* 4 m 30 s */
        {{ ITEM_WHEAT, 2 }, { ITEM_CORN, 1 }} },
    { ITEM_CHICKEN_FEED, "Chicken Feed", FAC_FEED_MILL,  540, 3, 2,  /* 9 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_CARROT, 1 }} },
    { ITEM_SHEEP_FEED,   "Sheep Feed",   FAC_FEED_MILL, 1080, 3, 2,  /* 18 m */
        {{ ITEM_CORN, 2 }, { ITEM_CARROT, 2 }} },
    { ITEM_BEE_FEED,     "Bee Feed",     FAC_FEED_MILL, 1800, 3, 2,  /* 30 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_SUGARCANE, 1 }} },
    { ITEM_PIG_FEED,     "Pig Feed",     FAC_FEED_MILL, 2400, 3, 3,  /* 40 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_CARROT, 2 }, { ITEM_CORN, 1 }} },
    { ITEM_SUBSTRATE,    "Substrate",    FAC_FEED_MILL, 3000, 3, 3,  /* 50 m */
        {{ ITEM_PINE_TREE, 1 }, { ITEM_RICE, 1 }, { ITEM_CORN, 2 }} },
    { ITEM_MILK, "Milk", FAC_COW,     600, 1, 1,
        {{ ITEM_COW_FEED, 1 }} },
    { ITEM_EGG,  "Egg",  FAC_CHICKEN, 300, 1, 1,
        {{ ITEM_CHICKEN_FEED, 1 }} },
    { ITEM_WOOL, "Wool", FAC_SHEEP,   900, 1, 1,
        {{ ITEM_SHEEP_FEED, 1 }} },
    { ITEM_HONEYCOMBS, "Honeycombs", FAC_BEE, 21600, 1, 1,  /* 6 h */
        {{ ITEM_BEE_FEED, 1 }} },
    { ITEM_BACON, "Bacon", FAC_PIG, 25200, 1, 1,  /* 7 h */
        {{ ITEM_PIG_FEED, 1 }} },
    { ITEM_DOWN_FEATHER,     "Down Feather",     FAC_DUCK, 5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_BREAD, 1 }} },
    { ITEM_COLORFUL_FEATHER, "Colorful Feather", FAC_DUCK, 3600, 1, 1,  /* 1 h */
        {{ ITEM_BAGEL, 1 }} },
    { ITEM_SEAWEED, "Seaweed", FAC_OTTER, 16200, 1, 1,  /* 4 h 30 m */
        {{ ITEM_EGG, 1 }} },
    { ITEM_SCALLOP, "Scallop", FAC_OTTER, 16200, 1, 1,  /* 4 h 30 m */
        {{ ITEM_EGG, 1 }} },
    { ITEM_PEARLS,  "Pearl",   FAC_OTTER, 14400, 1, 1,  /* 4 h */
        {{ ITEM_BACON, 1 }} },
    { ITEM_MUSHROOM, "Mushroom", FAC_MUSHROOM_FARM, 18000, 1, 1,  /* 5 h */
        {{ ITEM_SUBSTRATE, 1 }} },
    { ITEM_CREAM,  "Cream",  FAC_DAIRY,  900, 1, 1,  /* 15 m */
        {{ ITEM_MILK, 1 }} },
    { ITEM_CHEESE, "Cheese", FAC_DAIRY, 1800, 1, 1,  /* 30 m */
        {{ ITEM_MILK, 2 }} },
    { ITEM_BUTTER, "Butter", FAC_DAIRY, 3600, 1, 1,  /* 1 h */
        {{ ITEM_MILK, 3 }} },
    { ITEM_YOGURT,       "Yogurt",       FAC_DAIRY,  5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_MILK, 4 }} },
    { ITEM_PEACH_YOGURT, "Peach Yogurt", FAC_DAIRY,  7200, 1, 2,  /* 2 h */
        {{ ITEM_MILK, 2 }, { ITEM_PEACH, 2 }} },
    { ITEM_TOFU,         "Tofu",         FAC_DAIRY, 14400, 1, 1,  /* 4 h */
        {{ ITEM_SOYBEAN, 5 }} },
    { ITEM_PLANT_MILK,   "Plant Milk",   FAC_DAIRY, 10800, 1, 1,  /* 3 h */
        {{ ITEM_SOYBEAN, 3 }} },
    { ITEM_BREAD,        "Bread",        FAC_BAKERY,  285, 1, 1,  /* 4 m 45 s */
        {{ ITEM_WHEAT, 2 }} },
    { ITEM_COOKIES,       "Cookies",       FAC_BAKERY,  855, 1, 2,  /* 14 m 15 s */
        {{ ITEM_WHEAT, 2 }, { ITEM_EGG, 2 }} },
    { ITEM_BAGEL,        "Bagel",        FAC_BAKERY, 1710, 1, 3,  /* 28 m 30 s */
        {{ ITEM_WHEAT, 2 }, { ITEM_SUGAR, 1 }, { ITEM_EGG, 3 }} },
    { ITEM_PIZZA,        "Pizza",        FAC_BAKERY, 6840, 1, 3,  /* 1 h 54 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_CHEESE, 1 }, { ITEM_TOMATO, 2 }} },
    { ITEM_POTATO_BREAD,     "Potato Bread",     FAC_BAKERY,  3420, 1, 3,  /* 57 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_POTATO, 2 }, { ITEM_EGG, 4 }} },
    { ITEM_BANANA_BREAD,    "Banana Bread",    FAC_BAKERY,  5400, 1, 4,  /* 1 h 30 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_BANANA, 3 }, { ITEM_EGG, 2 }, { ITEM_BUTTER, 1 }} },
    { ITEM_SEAFOOD_PIZZA,   "Seafood Pizza",   FAC_BAKERY,  9000, 1, 4,  /* 2 h 30 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_CHEESE, 1 }, { ITEM_FISH, 1 }, { ITEM_SHRIMP, 1 }} },
    { ITEM_MUSHROOM_TURNOVER,"Mushroom Turnover",FAC_BAKERY, 4500, 1, 3,  /* 1 h 15 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_MUSHROOM, 2 }, { ITEM_POTATO, 1 }} },
    { ITEM_APPLE_STRUDEL,   "Apple Strudel",   FAC_BAKERY, 10800, 1, 3,  /* 3 h */
        {{ ITEM_WHEAT, 2 }, { ITEM_APPLE, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_SUGAR,   "Sugar",   FAC_SUGAR_FACTORY, 1200, 1, 1,  /* 20 m */
        {{ ITEM_SUGARCANE, 1 }} },
    { ITEM_SYRUP,   "Syrup",   FAC_SUGAR_FACTORY, 2400, 1, 1,  /* 40 m */
        {{ ITEM_SUGARCANE, 2 }} },
    { ITEM_CARAMEL,       "Caramel",       FAC_SUGAR_FACTORY, 5400, 1, 1,  /* 90 m */
        {{ ITEM_SUGARCANE, 3 }} },
    { ITEM_HONEY_CARAMEL, "Honey Caramel", FAC_SUGAR_FACTORY, 9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_HONEYCOMBS, 1 }, { ITEM_SUGARCANE, 1 }} },
    { ITEM_COTTON_FABRIC, "Cotton Fabric", FAC_TEXTILE_FACTORY, 1800, 1, 1,  /* 30 m */
        {{ ITEM_COTTON, 2 }} },
    { ITEM_YARN,          "Yarn",          FAC_TEXTILE_FACTORY, 2400, 1, 1,  /* 40 m */
        {{ ITEM_COTTON, 2 }} },
    { ITEM_SILK_FABRIC,   "Silk Fabric",   FAC_TEXTILE_FACTORY, 5400, 1, 1,  /* 90 m */
        {{ ITEM_SILK, 2 }} },
    { ITEM_NYLON_THREAD, "Nylon Thread", FAC_TEXTILE_FACTORY, 7200, 1, 1,  /* 2 h */
        {{ ITEM_RUBBER_TREE, 3 }} },
    { ITEM_DOUGH,              "Dough",              FAC_FOOD_PROCESSING,  1800, 1, 1,  /* 30 m */
        {{ ITEM_WHEAT, 3 }} },
    { ITEM_FROZEN_VEGETABLES,  "Frozen Vegetables",  FAC_FOOD_PROCESSING,  5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_TOMATO, 1 }, { ITEM_CORN, 1 }, { ITEM_CARROT, 1 }} },
    { ITEM_DUMPLINGS,          "Dumplings",          FAC_FOOD_PROCESSING, 12600, 1, 2,  /* 3 h 30 m */
        {{ ITEM_DOUGH, 2 }, { ITEM_BACON, 2 }} },
    { ITEM_SEAFOOD_MIX,        "Seafood Mix",        FAC_FOOD_PROCESSING,  9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_SHRIMP, 1 }, { ITEM_SCALLOP, 1 }, { ITEM_FISH, 1 }} },
    { ITEM_FROZEN_FRUIT,       "Frozen Fruit",       FAC_FOOD_PROCESSING, 10200, 1, 3,  /* 2 h 50 m */
        {{ ITEM_MANGO, 1 }, { ITEM_PEACH, 2 }, { ITEM_PINEAPPLE, 1 }} },
    { ITEM_PACKAGED_MEAL,      "Packaged Meal",      FAC_FOOD_PROCESSING, 10800, 1, 1,  /* 3 h */
        {{ ITEM_RICE_CASSEROLE, 1 }} },
    { ITEM_MUFFIN,  "Muffin",  FAC_PASTRY_FACTORY, 1800, 1, 3,  /* 30 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_SUGAR, 1 }, { ITEM_EGG, 4 }} },
    { ITEM_BROWNIE, "Brownie", FAC_PASTRY_FACTORY, 2400, 1, 3,  /* 40 m */
        {{ ITEM_CACAO, 2 }, { ITEM_SYRUP, 1 }, { ITEM_BUTTER, 1 }} },
    { ITEM_CUPCAKE,            "Cupcake",            FAC_PASTRY_FACTORY,  3600, 1, 3,  /* 1 h */
        {{ ITEM_SUGAR, 1 }, { ITEM_EGG, 5 }, { ITEM_CREAM, 1 }} },
    { ITEM_DONUT,              "Donut",              FAC_PASTRY_FACTORY,  5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_BAGEL, 1 }, { ITEM_CARAMEL, 1 }, { ITEM_CACAO, 1 }} },
    { ITEM_CHEESECAKE,         "Cheesecake",         FAC_PASTRY_FACTORY, 10800, 1, 4,  /* 3 h */
        {{ ITEM_COOKIES, 1 }, { ITEM_CHEESE, 1 }, { ITEM_SYRUP, 1 }, { ITEM_STRAWBERRY, 2 }} },
    { ITEM_HONEY_GINGERBREAD,  "Honey Gingerbread",  FAC_PASTRY_FACTORY,  3600, 1, 3,  /* 1 h */
        {{ ITEM_WHEAT, 3 }, { ITEM_HONEYCOMBS, 2 }, { ITEM_EGG, 1 }} },
    { ITEM_KEY_LIME_PIE,       "Key Lime Pie",       FAC_PASTRY_FACTORY,  7200, 1, 4,  /* 2 h */
        {{ ITEM_WHEAT, 3 }, { ITEM_KEY_LIME, 2 }, { ITEM_SUGAR, 1 }, { ITEM_CREAM, 1 }} },
    { ITEM_COCONUT_MACAROON,   "Coconut Macaroon",   FAC_PASTRY_FACTORY,  5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_COCONUT, 2 }, { ITEM_EGG, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_CARAMEL_APPLE,      "Caramel Apple",      FAC_PASTRY_FACTORY,  9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_CARAMEL, 1 }, { ITEM_APPLE, 2 }} },
    { ITEM_ICE_CREAM_CONE, "Ice Cream Cone", FAC_ICE_CREAM_FACTORY, 1800, 1, 3,   /* 30 m */
        {{ ITEM_MILK, 1 }, { ITEM_CREAM, 1 }, { ITEM_SUGAR, 1 }} },
    { ITEM_POPSICLE,       "Popsicle",       FAC_ICE_CREAM_FACTORY, 5400, 1, 2,   /* 1 h 30 m */
        {{ ITEM_STRAWBERRY, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_FROZEN_YOGURT,  "Frozen Yogurt",  FAC_ICE_CREAM_FACTORY, 10800, 1, 2,  /* 3 h */
        {{ ITEM_YOGURT, 1 }, { ITEM_CREAM, 1 }} },
    { ITEM_ICE_CREAM_BAR,       "Ice Cream Bar",            FAC_ICE_CREAM_FACTORY, 14400, 1, 3,  /* 4 h */
        {{ ITEM_SYRUP, 1 }, { ITEM_CACAO, 1 }, { ITEM_PINE_TREE, 1 }} },
    { ITEM_MINT_CHOCO_ICE_CREAM,"Mint Chocolate Ice Cream",FAC_ICE_CREAM_FACTORY, 3600, 1, 3,  /* 1 h */
        {{ ITEM_MILK, 1 }, { ITEM_MINT, 2 }, { ITEM_CHOCOLATE, 1 }} },
    { ITEM_PINEAPPLE_SORBET,    "Pineapple Sorbet",        FAC_ICE_CREAM_FACTORY, 9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_SYRUP, 1 }, { ITEM_PINEAPPLE, 2 }} },
    { ITEM_ROSE_SORBET,         "Rose Sorbet",             FAC_ICE_CREAM_FACTORY, 7200, 1, 3,  /* 2 h */
        {{ ITEM_SYRUP, 1 }, { ITEM_ROSE, 2 }, { ITEM_MILK, 1 }} },
    { ITEM_PEANUT_PARFAIT,      "Peanut Parfait",          FAC_ICE_CREAM_FACTORY, 12600, 1, 4,  /* 3 h 30 m */
        {{ ITEM_EGG, 1 }, { ITEM_PEANUT_BUTTER, 1 }, { ITEM_PEANUT_PLANT, 1 }, { ITEM_CREAM, 1 }} },
    { ITEM_RUBBER,  "Rubber",  FAC_RUBBER_FACTORY, 3600, 1, 1,  /* 1 h */
        {{ ITEM_RUBBER_TREE, 1 }} },
    { ITEM_PLASTIC,  "Plastic",  FAC_RUBBER_FACTORY, 5400, 1, 1,  /* 90 m */
        {{ ITEM_RUBBER_TREE, 2 }} },
    { ITEM_GLUE,     "Glue",     FAC_RUBBER_FACTORY, 7200, 1, 1,  /* 2 h */
        {{ ITEM_RUBBER_TREE, 3 }} },
    { ITEM_DUMBBELL, "Dumbbell", FAC_RUBBER_FACTORY, 10800, 1, 2,  /* 3 h */
        {{ ITEM_RUBBER, 2 }, { ITEM_COPPER_ORE, 2 }} },
    { ITEM_PAPER,       "Paper",       FAC_PAPER_FACTORY, 5400, 1, 1,   /* 90 m */
        {{ ITEM_PINE_TREE, 1 }} },
    { ITEM_PAPER_TOWEL, "Paper Towel", FAC_PAPER_FACTORY, 9000, 1, 1,   /* 150 m */
        {{ ITEM_PINE_TREE, 2 }} },
    { ITEM_WALLPAPER,   "Wallpaper",   FAC_PAPER_FACTORY, 10800, 1, 2,  /* 180 m */
        {{ ITEM_PINE_TREE, 2 }, { ITEM_RUBBER, 1 }} },
    { ITEM_BOOK,        "Book",        FAC_PAPER_FACTORY, 12600, 1, 3,  /* 3 h 30 m */
        {{ ITEM_PAPER, 4 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_GLUE, 1 }} },
    { ITEM_TEA_BAGS,    "Tea Bags",    FAC_PAPER_FACTORY,   900, 1, 2,  /* 15 m */
        {{ ITEM_PAPER, 1 }, { ITEM_TEA_PLANT, 1 }} },
    { ITEM_MILKSHAKE,    "Milkshake",    FAC_FAST_FOOD,  900, 1, 2,  /* 15 m */
        {{ ITEM_MILK, 2 }, { ITEM_STRAWBERRY, 1 }} },
    { ITEM_CHEESEBURGER, "Cheeseburger", FAC_FAST_FOOD, 1200, 1, 3,  /* 20 m */
        {{ ITEM_BREAD, 2 }, { ITEM_CHEESE, 1 }, { ITEM_TOMATO, 1 }} },
    { ITEM_SANDWICH,     "Sandwich",     FAC_FAST_FOOD, 2400, 1, 3,  /* 40 m */
        {{ ITEM_BREAD, 1 }, { ITEM_BUTTER, 1 }, { ITEM_STRAWBERRY, 2 }} },
    { ITEM_FRENCH_FRIES,        "French Fries",        FAC_FAST_FOOD, 3600, 1, 3,  /* 60 m */
        {{ ITEM_POTATO, 2 }, { ITEM_CREAM, 1 }, { ITEM_TOMATO, 2 }} },
    { ITEM_BAKED_POTATO,        "Baked Potato",        FAC_FAST_FOOD, 3000, 1, 3,  /* 50 m */
        {{ ITEM_POTATO, 2 }, { ITEM_BACON, 1 }, { ITEM_CHEESE, 1 }} },
    { ITEM_FISH_BURGER,         "Fish Burger",         FAC_FAST_FOOD, 2700, 1, 3,  /* 45 m */
        {{ ITEM_BREAD, 2 }, { ITEM_FISH, 2 }, { ITEM_PEPPER, 1 }} },
    { ITEM_FISH_AND_CHIPS,      "Fish and Chips",      FAC_FAST_FOOD, 5400, 1, 2,  /* 1 h 30 m */
        {{ ITEM_FISH, 2 }, { ITEM_POTATO, 2 }} },
    { ITEM_PEANUT_BUTTER_CREPES,"Peanut Butter Crepes",FAC_FAST_FOOD, 4500, 1, 3,  /* 1 h 15 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_PEANUT_BUTTER, 1 }, { ITEM_BANANA, 1 }} },
    { ITEM_POPCORN,      "Popcorn",      FAC_SNACK_FACTORY, 1800, 1, 1,  /* 30 m */
        {{ ITEM_CORN, 2 }} },
    { ITEM_CORN_CHIPS,   "Corn Chips",   FAC_SNACK_FACTORY, 3600, 1, 1,  /* 60 m */
        {{ ITEM_CORN, 3 }} },
    { ITEM_GRANOLA,      "Granola",      FAC_SNACK_FACTORY, 2400, 1, 2,  /* 40 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_STRAWBERRY, 2 }} },
    { ITEM_POTATO_CHIPS,   "Potato Chips",   FAC_SNACK_FACTORY, 7200, 1, 1,  /* 120 m */
        {{ ITEM_POTATO, 2 }} },
    { ITEM_CANAPE,         "Canape",         FAC_SNACK_FACTORY,  900, 1, 3,  /* 15 m */
        {{ ITEM_OLIVE, 2 }, { ITEM_GRAPE, 2 }, { ITEM_CHEESE, 1 }} },
    { ITEM_GLAZED_BACON,   "Glazed Bacon",   FAC_SNACK_FACTORY, 4800, 1, 2,  /* 1 h 20 m */
        {{ ITEM_BACON, 2 }, { ITEM_SYRUP, 1 }} },
    { ITEM_PUFFED_RICE,    "Puffed Rice",    FAC_SNACK_FACTORY, 2700, 1, 2,  /* 45 m */
        {{ ITEM_RICE, 4 }, { ITEM_SYRUP, 1 }} },
    { ITEM_DRIED_MUSHROOMS,"Dried Mushrooms",FAC_SNACK_FACTORY, 6300, 1, 1,  /* 1 h 45 m */
        {{ ITEM_MUSHROOM, 3 }} },
    { ITEM_SALTED_PEANUTS, "Salted Peanuts", FAC_SNACK_FACTORY, 5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_PEANUT_PLANT, 3 }} },
    { ITEM_SHIRT,   "Shirt",   FAC_TAILOR_SHOP, 3600, 1, 1,  /* 60 m */
        {{ ITEM_COTTON_FABRIC, 1 }} },
    { ITEM_SWEATER, "Sweater", FAC_TAILOR_SHOP, 5400, 1, 1,  /* 90 m */
        {{ ITEM_YARN, 1 }} },
    { ITEM_COAT,    "Coat",    FAC_TAILOR_SHOP, 7200, 1, 2,  /* 120 m */
        {{ ITEM_COTTON_FABRIC, 1 }, { ITEM_YARN, 1 }} },
    { ITEM_HAT,          "Hat",          FAC_TAILOR_SHOP,  9000, 1, 2,  /* 150 m */
        {{ ITEM_COTTON_FABRIC, 1 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_DRESS,        "Dress",        FAC_TAILOR_SHOP, 10800, 1, 2,  /* 3 h */
        {{ ITEM_YARN, 1 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_SUIT,         "Suit",         FAC_TAILOR_SHOP, 14400, 1, 3,  /* 4 h */
        {{ ITEM_YARN, 1 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_TYROLEAN_HAT, "Tyrolean Hat", FAC_TAILOR_SHOP,  9900, 1, 3,  /* 2 h 45 m */
        {{ ITEM_COTTON_FABRIC, 1 }, { ITEM_SILK_FABRIC, 1 }, { ITEM_COLORFUL_FEATHER, 1 }} },
    { ITEM_EVENING_GOWN, "Evening Gown", FAC_TAILOR_SHOP, 12600, 1, 2,  /* 3 h 30 m */
        {{ ITEM_PEARLS, 5 }, { ITEM_SILK_FABRIC, 2 }} },
    { ITEM_BRONZE_INGOT,   "Bronze Ingot",   FAC_FOUNDRY,  3600, 1, 1,  /* 1 h */
        {{ ITEM_COPPER_ORE, 5 }} },
    { ITEM_SILVER_INGOT,   "Silver Ingot",   FAC_FOUNDRY,  7200, 1, 1,  /* 2 h */
        {{ ITEM_SILVER_ORE, 5 }} },
    { ITEM_GOLD_INGOT,     "Gold Ingot",     FAC_FOUNDRY, 10800, 1, 1,  /* 3 h */
        {{ ITEM_GOLD_ORE, 5 }} },
    { ITEM_PLATINUM_INGOT, "Platinum Ingot", FAC_FOUNDRY, 14400, 1, 1,  /* 4 h */
        {{ ITEM_PLATINUM_ORE, 5 }} },
    { ITEM_COPPER_ORE,   "Copper Ore",   FAC_MINE, 0, 1, 0, {{0}} },
    { ITEM_CLAY,         "Clay",         FAC_MINE, 0, 1, 0, {{0}} },
    { ITEM_SILVER_ORE,   "Silver Ore",   FAC_MINE, 0, 1, 0, {{0}} },
    { ITEM_GOLD_ORE,     "Gold Ore",     FAC_MINE, 0, 1, 0, {{0}} },
    { ITEM_PLATINUM_ORE, "Platinum Ore", FAC_MINE, 0, 1, 0, {{0}} },
    { ITEM_SUSHI_ROLL,          "Sushi Roll",          FAC_ASIAN_RESTAURANT, 2700, 1, 2,  /* 45 m */
        {{ ITEM_RICE, 5 }, { ITEM_FISH, 1 }} },
    { ITEM_LOBSTER_SUSHI,       "Lobster Sushi",       FAC_ASIAN_RESTAURANT, 4500, 1, 2,  /* 1 h 15 m */
        {{ ITEM_LOBSTER, 1 }, { ITEM_RICE, 4 }} },
    { ITEM_SEAWEED_SHRIMP_SALAD,"Seaweed Shrimp Salad",FAC_ASIAN_RESTAURANT, 7200, 1, 2,  /* 2 h */
        {{ ITEM_SEAWEED, 1 }, { ITEM_SHRIMP, 1 }} },
    { ITEM_SCALLOP_SUSHI,       "Scallop Sushi",       FAC_ASIAN_RESTAURANT, 9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_SCALLOP, 1 }, { ITEM_RICE, 4 }, { ITEM_SEAWEED, 1 }} },
    { ITEM_COCONUT_SOUP,        "Coconut Soup",        FAC_ASIAN_RESTAURANT, 8100, 1, 3,  /* 2 h 15 m */
        {{ ITEM_COCONUT, 1 }, { ITEM_SHRIMP, 2 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_RICE_NOODLES,        "Rice Noodles",        FAC_ASIAN_RESTAURANT, 3600, 1, 4,  /* 1 h */
        {{ ITEM_RICE, 6 }, { ITEM_CORN, 3 }, { ITEM_PEPPER, 1 }, { ITEM_SHRIMP, 1 }} },
    { ITEM_SEA_SALAD,           "Sea Salad",           FAC_ASIAN_RESTAURANT, 5400, 1, 4,  /* 1 h 30 m */
        {{ ITEM_FISH, 1 }, { ITEM_SHRIMP, 1 }, { ITEM_CORN, 2 }, { ITEM_CHEESE, 1 }} },
    { ITEM_MUSHROOM_SALAD,      "Mushroom Salad",      FAC_ASIAN_RESTAURANT, 6300, 1, 3,  /* 1 h 45 m */
        {{ ITEM_RICE, 2 }, { ITEM_MUSHROOM, 2 }, { ITEM_PEPPER, 1 }} },
    { ITEM_PEANUT_SAUCE,        "Peanut Sauce",        FAC_ASIAN_RESTAURANT, 10800, 1, 4,  /* 3 h */
        {{ ITEM_PEANUT_BUTTER, 1 }, { ITEM_COCONUT, 1 }, { ITEM_KEY_LIME, 1 }, { ITEM_CHILI_SAUCE, 1 }} },
    { ITEM_PENDANT,          "Pendant",          FAC_JEWELRY_STORE,  1800, 1, 1,  /* 30 m */
        {{ ITEM_SILVER_ORE, 9 }} },
    { ITEM_RING,             "Ring",             FAC_JEWELRY_STORE,  3600, 1, 2,  /* 1 h */
        {{ ITEM_SILVER_ORE, 6 }, { ITEM_GOLD_ORE, 4 }} },
    { ITEM_PEARL_CHOKER,     "Pearl Choker",     FAC_JEWELRY_STORE,  9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_SILVER_ORE, 2 }, { ITEM_PEARLS, 3 }} },
    { ITEM_EARRINGS,         "Earrings",         FAC_JEWELRY_STORE,  5400, 1, 2,  /* 1 h 30 m */
        {{ ITEM_GOLD_ORE, 11 }, { ITEM_PLATINUM_ORE, 5 }} },
    { ITEM_DIADEM,           "Diadem",           FAC_JEWELRY_STORE,  7200, 1, 3,  /* 2 h */
        {{ ITEM_SILVER_ORE, 9 }, { ITEM_GOLD_ORE, 5 }, { ITEM_PLATINUM_ORE, 4 }} },
    { ITEM_FEATHER_EARRINGS, "Feather Earrings", FAC_JEWELRY_STORE,  6300, 1, 2,  /* 1 h 45 m */
        {{ ITEM_SILVER_ORE, 4 }, { ITEM_COLORFUL_FEATHER, 2 }} },
    { ITEM_FLIP_FLOPS,        "Flip Flops",        FAC_SHOE_FACTORY,  5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_RUBBER, 1 }} },
    { ITEM_SANDALS,           "Sandals",           FAC_SHOE_FACTORY,  7200, 1, 2,  /* 2 h */
        {{ ITEM_CORK_OAK, 3 }, { ITEM_NYLON_THREAD, 1 }} },
    { ITEM_SNEAKERS,          "Sneakers",          FAC_SHOE_FACTORY,  7200, 1, 3,  /* 2 h */
        {{ ITEM_RUBBER, 1 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_GLUE, 1 }} },
    { ITEM_BOOTS,             "Boots",             FAC_SHOE_FACTORY, 10800, 1, 3,  /* 3 h */
        {{ ITEM_RUBBER, 1 }, { ITEM_SILK_FABRIC, 1 }, { ITEM_GLUE, 1 }} },
    { ITEM_HIGH_HEELED_SHOES, "High-Heeled Shoes", FAC_SHOE_FACTORY,  9000, 1, 4,  /* 2 h 30 m */
        {{ ITEM_RUBBER, 1 }, { ITEM_SILK_FABRIC, 1 }, { ITEM_PINE_TREE, 1 }, { ITEM_GLUE, 1 }} },
    { ITEM_WARM_BOOTS,        "Warm Boots",        FAC_SHOE_FACTORY,  9900, 1, 3,  /* 2 h 45 m */
        {{ ITEM_DOWN_FEATHER, 2 }, { ITEM_SILK_FABRIC, 1 }, { ITEM_WOOL, 1 }} },
    { ITEM_TABLE,      "Table",      FAC_FURNITURE_FACTORY, 14400, 1, 1,  /* 4 h */
        {{ ITEM_PINE_TREE, 3 }} },
    { ITEM_CHAIR,      "Chair",      FAC_FURNITURE_FACTORY, 10800, 1, 1,  /* 3 h */
        {{ ITEM_PLASTIC, 1 }} },
    { ITEM_COUCH,      "Couch",      FAC_FURNITURE_FACTORY, 21600, 1, 2,  /* 6 h */
        {{ ITEM_PINE_TREE, 2 }, { ITEM_COTTON_FABRIC, 1 }} },
    { ITEM_BED,        "Bed",        FAC_FURNITURE_FACTORY, 16200, 1, 3,  /* 4 h 30 m */
        {{ ITEM_SILK_FABRIC, 1 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_PINE_TREE, 2 }} },
    { ITEM_FLOOR_LAMP, "Floor Lamp", FAC_FURNITURE_FACTORY, 12600, 1, 2,  /* 3 h 30 m */
        {{ ITEM_COPPER_ORE, 5 }, { ITEM_PLASTIC, 1 }} },
    { ITEM_ERASER,          "Eraser",          FAC_STATIONERY_FACTORY,  7200, 1, 1,  /* 2 h */
        {{ ITEM_RUBBER_TREE, 3 }} },
    { ITEM_STICKY_NOTES,   "Sticky Notes",    FAC_STATIONERY_FACTORY,  9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_PAPER, 3 }, { ITEM_GLUE, 1 }} },
    { ITEM_BULLETIN_BOARD, "Bulletin Board",  FAC_STATIONERY_FACTORY, 10200, 1, 2,  /* 2 h 50 m */
        {{ ITEM_CORK_OAK, 1 }, { ITEM_PAPER, 1 }} },
    { ITEM_HIGHLIGHTER_PEN,"Highlighter Pen", FAC_STATIONERY_FACTORY, 11400, 1, 3,  /* 3 h 10 m */
        {{ ITEM_NYLON_THREAD, 1 }, { ITEM_COTTON, 3 }, { ITEM_PLASTIC, 1 }} },
    { ITEM_CHILI_SAUCE,            "Chili Sauce",                     FAC_MEXICAN_RESTAURANT,  7200, 1, 3,  /* 2 h */
        {{ ITEM_TOMATO, 3 }, { ITEM_PEPPER, 3 }, { ITEM_SUGAR, 1 }} },
    { ITEM_BURRITO,                "Burrito",                         FAC_MEXICAN_RESTAURANT,  3600, 1, 3,  /* 1 h */
        {{ ITEM_WHEAT, 2 }, { ITEM_BACON, 2 }, { ITEM_TOMATO, 1 }} },
    { ITEM_NACHOS,                 "Nachos",                          FAC_MEXICAN_RESTAURANT, 10800, 1, 3,  /* 3 h */
        {{ ITEM_CORN_CHIPS, 1 }, { ITEM_CHEESE, 1 }, { ITEM_PEPPER, 2 }} },
    { ITEM_TACO,                   "Taco",                            FAC_MEXICAN_RESTAURANT,  5400, 1, 4,  /* 1 h 30 m */
        {{ ITEM_CORN, 3 }, { ITEM_CREAM, 1 }, { ITEM_TOMATO, 2 }, { ITEM_PEPPER, 2 }} },
    { ITEM_BACON_JALAPENO_POPPERS, "Bacon-wrapped Jalapeno Poppers",  FAC_MEXICAN_RESTAURANT,  7200, 1, 3,  /* 2 h */
        {{ ITEM_PEPPER, 2 }, { ITEM_BACON, 1 }, { ITEM_CHEESE, 1 }} },
    { ITEM_GAZPACHO,               "Gazpacho",                        FAC_MEXICAN_RESTAURANT,  9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_TOMATO, 3 }, { ITEM_PEPPER, 2 }, { ITEM_BREAD, 1 }} },
    { ITEM_CORN_SOUP,              "Corn Soup",                       FAC_MEXICAN_RESTAURANT,  6300, 1, 3,  /* 1 h 45 m */
        {{ ITEM_CORN, 3 }, { ITEM_CARROT, 2 }, { ITEM_BACON, 2 }} },
    { ITEM_MOLE_SAUCE,             "Mole Sauce",                      FAC_MEXICAN_RESTAURANT,  7200, 1, 2,  /* 2 h */
        {{ ITEM_CACAO, 3 }, { ITEM_PEPPER, 3 }} },
    { ITEM_MUSHROOM_SOUP,          "Mushroom Soup",                    FAC_MEXICAN_RESTAURANT, 12600, 1, 4,  /* 3 h 30 m */
        {{ ITEM_DRIED_MUSHROOMS, 1 }, { ITEM_TOMATO, 2 }, { ITEM_KEY_LIME, 1 }, { ITEM_BUTTER, 1 }} },
    { ITEM_JELLY_BEANS,        "Jelly Beans",        FAC_CANDY_FACTORY,  7200, 1, 2,  /* 2 h */
        {{ ITEM_STRAWBERRY, 3 }, { ITEM_SYRUP, 1 }} },
    { ITEM_TOFFEE,             "Toffee",             FAC_CANDY_FACTORY, 10800, 1, 2,  /* 3 h */
        {{ ITEM_CARAMEL, 1 }, { ITEM_BUTTER, 1 }} },
    { ITEM_CANDY_CANE,         "Candy Cane",         FAC_CANDY_FACTORY, 14400, 1, 3,  /* 4 h */
        {{ ITEM_CARAMEL, 1 }, { ITEM_CREAM, 1 }, { ITEM_PAPER, 1 }} },
    { ITEM_CHOCOLATE,          "Chocolate",          FAC_CANDY_FACTORY,  9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_CACAO, 3 }, { ITEM_CREAM, 1 }, { ITEM_SUGAR, 1 }} },
    { ITEM_LOLLIPOP,           "Lollipop",           FAC_CANDY_FACTORY, 18000, 1, 3,  /* 5 h */
        {{ ITEM_STRAWBERRY, 2 }, { ITEM_SYRUP, 1 }, { ITEM_PINE_TREE, 2 }} },
    { ITEM_HONEY_MARSHMALLOW,  "Honey Marshmallow",  FAC_CANDY_FACTORY, 16200, 1, 2,  /* 4 h 30 m */
        {{ ITEM_HONEY_CARAMEL, 1 }, { ITEM_EGG, 2 }} },
    { ITEM_MINT_CANDY,         "Mint Candy",         FAC_CANDY_FACTORY,  7200, 1, 2,  /* 2 h */
        {{ ITEM_SYRUP, 1 }, { ITEM_MINT, 2 }} },
    { ITEM_JELLY_FRUIT_SLICES, "Jelly Fruit Slices", FAC_CANDY_FACTORY,  9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_WATERMELON_JAM, 1 }, { ITEM_STRAWBERRY_JAM, 1 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_CHOCOLATE_BAR,      "Chocolate Bar",      FAC_CANDY_FACTORY, 12600, 1, 3,  /* 3 h 30 m */
        {{ ITEM_CACAO, 2 }, { ITEM_PEANUT_PLANT, 2 }, { ITEM_HONEYCOMBS, 1 }} },
    { ITEM_GREEN_TEA_CANDY,    "Green Tea Candy",    FAC_CANDY_FACTORY,  5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_TEA_PLANT, 2 }, { ITEM_CREAM, 1 }, { ITEM_SUGAR, 2 }} },
    { ITEM_SCRUB_BRUSH,    "Scrub Brush",               FAC_HOUSEHOLD_GOODS,  7200, 1, 2,  /* 2 h */
        {{ ITEM_SUGARCANE, 3 }, { ITEM_NYLON_THREAD, 1 }} },
    { ITEM_SOAP_DISPENSER, "Soap Dispenser",             FAC_HOUSEHOLD_GOODS,  8400, 1, 2,  /* 2 h 20 m */
        {{ ITEM_CORK_OAK, 1 }, { ITEM_PLASTIC_BOTTLE, 1 }} },
    { ITEM_CLOTHESLINE,    "Clothesline and Clothespins",FAC_HOUSEHOLD_GOODS, 10200, 1, 2,  /* 2 h 50 m */
        {{ ITEM_SUGARCANE, 5 }, { ITEM_NYLON_THREAD, 1 }} },
    { ITEM_PLUNGER,        "Plunger",                    FAC_HOUSEHOLD_GOODS, 11400, 1, 2,  /* 3 h 10 m */
        {{ ITEM_PINE_TREE, 1 }, { ITEM_RUBBER, 2 }} },
    { ITEM_FEATHER_DUSTER, "Feather Duster",             FAC_HOUSEHOLD_GOODS, 12600, 1, 2,  /* 3 h 30 m */
        {{ ITEM_SUGARCANE, 1 }, { ITEM_COLORFUL_FEATHER, 3 }} },
    { ITEM_RUBBER_GLOVES,  "Rubber Gloves",              FAC_HOUSEHOLD_GOODS, 14400, 1, 2,  /* 4 h */
        {{ ITEM_RUBBER, 1 }, { ITEM_ALOE, 1 }} },
    { ITEM_PLASTIC_BOTTLE, "Plastic Bottle", FAC_PLASTICS_FACTORY, 5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_PLASTIC, 1 }} },
    { ITEM_TOYS,           "Toys",           FAC_PLASTICS_FACTORY, 2700, 1, 2,  /* 45 m */
        {{ ITEM_PLASTIC, 1 }, { ITEM_RUBBER, 1 }} },
    { ITEM_BALL,           "Ball",           FAC_PLASTICS_FACTORY, 7200, 1, 2,  /* 2 h */
        {{ ITEM_PLASTIC, 1 }, { ITEM_GLUE, 1 }} },
    { ITEM_INFLATABLE_BOAT,"Inflatable Boat",FAC_PLASTICS_FACTORY, 9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_RUBBER, 2 }, { ITEM_GLUE, 1 }} },
    { ITEM_SHUTTLECOCK,    "Shuttlecock",    FAC_PLASTICS_FACTORY, 2400, 1, 2,  /* 40 m */
        {{ ITEM_DOWN_FEATHER, 2 }, { ITEM_PLASTIC, 1 }} },
    { ITEM_MODELING_CLAY,  "Modeling Clay",  FAC_PLASTICS_FACTORY, 3600, 1, 2,  /* 1 h */
        {{ ITEM_CLAY, 2 }, { ITEM_RUBBER_TREE, 2 }} },
    { ITEM_BACKPACK,      "Backpack",      FAC_BAG_FACTORY, 7200, 1, 3,   /* 2 h */
        {{ ITEM_COTTON_FABRIC, 3 }, { ITEM_GLUE, 1 }, { ITEM_RUBBER, 1 }} },
    { ITEM_WOVEN_BAG,     "Woven Bag",     FAC_BAG_FACTORY, 5400, 1, 2,   /* 1 h 30 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_SUGARCANE, 2 }} },
    { ITEM_SMALL_HANDBAG, "Small Handbag", FAC_BAG_FACTORY, 12600, 1, 3,  /* 3 h 30 m */
        {{ ITEM_SILK_FABRIC, 2 }, { ITEM_PEARLS, 1 }, { ITEM_SUGARCANE, 1 }} },
    { ITEM_SUITCASE,      "Suitcase",      FAC_BAG_FACTORY, 18000, 1, 2,  /* 5 h */
        {{ ITEM_PLASTIC, 3 }, { ITEM_RUBBER, 2 }} },
    { ITEM_KIDS_BAG,      "Kids Bag",      FAC_BAG_FACTORY, 4500, 1, 3,   /* 1 h 15 m */
        {{ ITEM_COTTON_FABRIC, 1 }, { ITEM_COLORFUL_FEATHER, 2 }, { ITEM_DOWN_FEATHER, 3 }} },
    { ITEM_QUICHE,              "Quiche",              FAC_GRILL_FACTORY,  5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_WHEAT, 2 }, { ITEM_BACON, 2 }, { ITEM_EGG, 1 }} },
    { ITEM_BAKED_LOBSTER,       "Baked Lobster",       FAC_GRILL_FACTORY, 10800, 1, 2,  /* 3 h */
        {{ ITEM_LOBSTER, 1 }, { ITEM_CREAM, 1 }} },
    { ITEM_BACON_AND_EGGS,      "Bacon and Eggs",      FAC_GRILL_FACTORY,  3600, 1, 2,  /* 1 h */
        {{ ITEM_BACON, 2 }, { ITEM_EGG, 2 }} },
    { ITEM_FRIED_FISH,          "Fried Fish",          FAC_GRILL_FACTORY,  7200, 1, 2,  /* 2 h */
        {{ ITEM_FISH, 1 }, { ITEM_BUTTER, 1 }} },
    { ITEM_RICE_CASSEROLE,      "Rice Casserole",      FAC_GRILL_FACTORY,  6300, 1, 4,  /* 1 h 45 m */
        {{ ITEM_RICE, 5 }, { ITEM_BACON, 2 }, { ITEM_EGG, 2 }, { ITEM_CHEESE, 1 }} },
    { ITEM_PANCAKES_WITH_HONEY, "Pancakes with Honey", FAC_GRILL_FACTORY,  2700, 1, 3,  /* 45 m */
        {{ ITEM_EGG, 3 }, { ITEM_HONEYCOMBS, 1 }, { ITEM_SUGAR, 1 }} },
    { ITEM_LOBSTER_OMELET,      "Lobster Omelet",      FAC_GRILL_FACTORY,  8100, 1, 3,  /* 2 h 15 m */
        {{ ITEM_LOBSTER, 1 }, { ITEM_EGG, 2 }, { ITEM_BREAD, 1 }} },
    { ITEM_GRILLED_SCALLOP,     "Grilled Scallop",     FAC_GRILL_FACTORY,  9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_OLIVE, 1 }, { ITEM_SCALLOP, 2 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_ROAST_MEAT,          "Roast Meat",          FAC_GRILL_FACTORY, 12600, 1, 3,  /* 3 h 30 m */
        {{ ITEM_MUSHROOM, 2 }, { ITEM_BACON, 1 }, { ITEM_PEANUT_BUTTER, 1 }} },
    { ITEM_AROMATHERAPY_CANDLE, "Aromatherapy Candle", FAC_PERFUME_FACTORY,  7200, 1, 3,  /* 2 h */
        {{ ITEM_HONEYCOMBS, 2 }, { ITEM_CACAO, 2 }, { ITEM_CARAMEL, 1 }} },
    { ITEM_PERFUME,             "Perfume",             FAC_PERFUME_FACTORY, 10800, 1, 3,  /* 3 h */
        {{ ITEM_ROSE, 3 }, { ITEM_BANANA, 2 }, { ITEM_STRAWBERRY, 2 }} },
    { ITEM_AIR_FRESHENER,       "Air Freshener",       FAC_PERFUME_FACTORY,  2400, 1, 2,  /* 40 m */
        {{ ITEM_JASMINE, 2 }, { ITEM_ROSE, 2 }} },
    { ITEM_SCENTED_SOAP,        "Scented Soap",        FAC_PERFUME_FACTORY,  9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_HONEYCOMBS, 3 }, { ITEM_OLIVE, 2 }} },
    { ITEM_JASMINE_OIL,         "Jasmine Oil",         FAC_PERFUME_FACTORY, 14400, 1, 2,  /* 4 h */
        {{ ITEM_JASMINE, 3 }, { ITEM_OLIVE, 2 }} },
    { ITEM_LOTION,              "Lotion",              FAC_PERFUME_FACTORY,  5400, 1, 2,  /* 1 h 30 m */
        {{ ITEM_ROSE, 2 }, { ITEM_COCONUT, 2 }} },
    { ITEM_FACE_MASK,           "Face Mask",           FAC_PERFUME_FACTORY,  3600, 1, 2,  /* 1 h */
        {{ ITEM_SEAWEED, 1 }, { ITEM_CLAY, 1 }} },
    { ITEM_TOOTHPASTE,          "Toothpaste",          FAC_PERFUME_FACTORY,  9900, 1, 3,  /* 2 h 45 m */
        {{ ITEM_HONEYCOMBS, 1 }, { ITEM_MINT, 1 }, { ITEM_PINEAPPLE, 1 }} },
    { ITEM_VITAMIN_COCKTAIL,    "Vitamin Cocktail",    FAC_BEVERAGE_FACTORY,  1800, 1, 3,  /* 30 m */
        {{ ITEM_CARROT, 1 }, { ITEM_TOMATO, 1 }, { ITEM_PEPPER, 1 }} },
    { ITEM_GRAPE_FIZZ,          "Grape Fizz",          FAC_BEVERAGE_FACTORY,  3600, 1, 3,  /* 1 h */
        {{ ITEM_GRAPE, 2 }, { ITEM_EGG, 1 }, { ITEM_SUGAR, 1 }} },
    { ITEM_CHOCOLATE_SMOOTHIE,  "Chocolate Smoothie",  FAC_BEVERAGE_FACTORY,  5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_MILK, 2 }, { ITEM_CHOCOLATE, 1 }, { ITEM_BANANA, 2 }} },
    { ITEM_WATERMELON_FRESH,    "Watermelon Fresh",    FAC_BEVERAGE_FACTORY,  2700, 1, 2,  /* 45 m */
        {{ ITEM_WATERMELON, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_ICED_TEA,            "Iced Tea",            FAC_BEVERAGE_FACTORY,  6000, 1, 2,  /* 1 h 40 m */
        {{ ITEM_JASMINE, 3 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_TROPICAL_MIX,        "Tropical Mix",        FAC_BEVERAGE_FACTORY,  7200, 1, 3,  /* 2 h */
        {{ ITEM_COCONUT, 2 }, { ITEM_PINEAPPLE, 2 }, { ITEM_SUGARCANE, 3 }} },
    { ITEM_APPLE_FRESH,         "Apple Fresh",         FAC_BEVERAGE_FACTORY,  9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_APPLE, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_MINT_ICED_TEA,       "Mint Iced Tea",       FAC_BEVERAGE_FACTORY,  4500, 1, 2,  /* 1 h 15 m */
        {{ ITEM_MINT, 2 }, { ITEM_TEA_PLANT, 2 }} },
    { ITEM_CARROT_CAKE,    "Carrot Cake",    FAC_CAKE_FACTORY,  7200, 1, 3,  /* 2 h */
        {{ ITEM_CARROT, 2 }, { ITEM_SUGAR, 1 }, { ITEM_BUTTER, 1 }} },
    { ITEM_STRAWBERRY_CAKE,"Strawberry Cake",FAC_CAKE_FACTORY, 16200, 1, 4,  /* 4 h 30 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_STRAWBERRY, 2 }, { ITEM_SUGAR, 1 }, { ITEM_CREAM, 1 }} },
    { ITEM_COFFEE_CAKE,    "Coffee Cake",    FAC_CAKE_FACTORY, 14400, 1, 4,  /* 4 h */
        {{ ITEM_WHEAT, 2 }, { ITEM_COFFEE_PLANT, 2 }, { ITEM_EGG, 2 }, { ITEM_BUTTER, 1 }} },
    { ITEM_MINT_CAKE,      "Mint Cake",      FAC_CAKE_FACTORY, 12600, 1, 4,  /* 3 h 30 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_MINT, 2 }, { ITEM_EGG, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_CHOCOLATE_CAKE, "Chocolate Cake", FAC_CAKE_FACTORY, 10800, 1, 3,  /* 3 h */
        {{ ITEM_CACAO, 3 }, { ITEM_SUGAR, 1 }, { ITEM_BUTTER, 1 }} },
    { ITEM_WEDDING_CAKE,   "Wedding Cake",   FAC_CAKE_FACTORY, 21600, 1, 3,  /* 6 h */
        {{ ITEM_WHEAT, 3 }, { ITEM_CREAM, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_HOT_DOG,          "Hot Dog",          FAC_HOT_DOG_FACTORY, 1500, 1, 3,  /* 25 m */
        {{ ITEM_BREAD, 2 }, { ITEM_BACON, 1 }, { ITEM_TOMATO, 1 }} },
    { ITEM_CORN_DOG,         "Corn Dog",         FAC_HOT_DOG_FACTORY, 5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_CORN, 4 }, { ITEM_BACON, 2 }, { ITEM_OLIVE, 2 }} },
    { ITEM_CONEY_DOG,        "Coney Dog",        FAC_HOT_DOG_FACTORY, 3000, 1, 4,  /* 50 m */
        {{ ITEM_BREAD, 1 }, { ITEM_BACON, 2 }, { ITEM_CHEESE, 1 }, { ITEM_PEPPER, 1 }} },
    { ITEM_CARROT_SANDWICH,  "Carrot Sandwich",  FAC_HOT_DOG_FACTORY, 4500, 1, 3,  /* 1 h 15 m */
        {{ ITEM_CARROT, 2 }, { ITEM_BREAD, 1 }, { ITEM_SOYBEAN, 2 }} },
    { ITEM_RATATOUILLE,    "Ratatouille",    FAC_FRENCH_RESTAURANT,  7200, 1, 3,  /* 2 h */
        {{ ITEM_PEPPER, 1 }, { ITEM_POTATO, 2 }, { ITEM_TOMATO, 2 }} },
    { ITEM_PROFITEROLES,   "Profiteroles",   FAC_FRENCH_RESTAURANT,  8400, 1, 3,  /* 2 h 20 m */
        {{ ITEM_DOUGH, 2 }, { ITEM_CREAM, 1 }, { ITEM_CHOCOLATE, 3 }} },
    { ITEM_SALADE_NICOISE, "Salade Nicoise", FAC_FRENCH_RESTAURANT,  9600, 1, 4,  /* 2 h 40 m */
        {{ ITEM_OLIVE, 3 }, { ITEM_TOMATO, 2 }, { ITEM_FISH, 1 }, { ITEM_EGG, 1 }} },
    { ITEM_BOUILLABAISSE,  "Bouillabaisse",  FAC_FRENCH_RESTAURANT, 11400, 1, 4,  /* 3 h 10 m */
        {{ ITEM_FISH, 1 }, { ITEM_SHRIMP, 3 }, { ITEM_POTATO, 2 }, { ITEM_TOMATO, 1 }} },
    { ITEM_ESPRESSO,      "Espresso",      FAC_COFFEE_FACTORY,  900, 1, 2,  /* 15 m */
        {{ ITEM_COFFEE_PLANT, 3 }, { ITEM_SUGAR, 1 }} },
    { ITEM_CAPPUCCINO,    "Cappuccino",    FAC_COFFEE_FACTORY, 1800, 1, 3,  /* 30 m */
        {{ ITEM_COFFEE_PLANT, 2 }, { ITEM_MILK, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_CAFFE_MOCHA,   "Caffe Mocha",   FAC_COFFEE_FACTORY, 3600, 1, 3,  /* 1 h */
        {{ ITEM_COFFEE_PLANT, 2 }, { ITEM_CACAO, 2 }, { ITEM_CREAM, 1 }} },
    { ITEM_HOT_CHOCOLATE, "Hot Chocolate", FAC_COFFEE_FACTORY, 2700, 1, 3,  /* 45 m */
        {{ ITEM_CACAO, 2 }, { ITEM_MILK, 2 }, { ITEM_SUGAR, 1 }} },
    { ITEM_COCONUT_LATTE, "Coconut Latte", FAC_COFFEE_FACTORY, 4200, 1, 3,  /* 1 h 10 m */
        {{ ITEM_COFFEE_PLANT, 2 }, { ITEM_SYRUP, 1 }, { ITEM_COCONUT, 2 }} },
    { ITEM_PILLOW,            "Pillow",            FAC_DOWN_FEATHER_FACTORY,  3600, 1, 2,  /* 1 h */
        {{ ITEM_DOWN_FEATHER, 2 }, { ITEM_COTTON_FABRIC, 1 }} },
    { ITEM_PARKA,             "Parka",             FAC_DOWN_FEATHER_FACTORY,  7200, 1, 2,  /* 2 h */
        {{ ITEM_DOWN_FEATHER, 3 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_DOWN_QUILT,        "Down Quilt",        FAC_DOWN_FEATHER_FACTORY,  6300, 1, 2,  /* 1 h 45 m */
        {{ ITEM_DOWN_FEATHER, 5 }, { ITEM_COTTON_FABRIC, 2 }} },
    { ITEM_ROBE_AND_SLIPPERS, "Robe and Slippers", FAC_DOWN_FEATHER_FACTORY,  5400, 1, 4,  /* 1 h 30 m */
        {{ ITEM_DOWN_FEATHER, 2 }, { ITEM_SILK_FABRIC, 2 }, { ITEM_RUBBER, 1 }, { ITEM_COLORFUL_FEATHER, 1 }} },
    { ITEM_PUPPET,        "Puppet",        FAC_DOLL_FACTORY, 6000, 1, 3,  /* 1 h 40 m */
        {{ ITEM_PINE_TREE, 2 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_YARN, 1 }} },
    { ITEM_PORCELAIN_DOLL,"Porcelain Doll",FAC_DOLL_FACTORY, 9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_CLAY, 3 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_FASHION_DOLL,  "Fashion Doll",  FAC_DOLL_FACTORY, 3600, 1, 3,  /* 1 h */
        {{ ITEM_PLASTIC, 1 }, { ITEM_COTTON_FABRIC, 2 }, { ITEM_GLUE, 1 }} },
    { ITEM_RAG_DOLL,      "Rag Doll",      FAC_DOLL_FACTORY, 7200, 1, 3,  /* 2 h */
        {{ ITEM_SILK_FABRIC, 1 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_COTTON, 2 }} },
    { ITEM_RUBBER_BONE,   "Rubber Bone",   FAC_PET_SUPPLY_FACTORY, 5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_RUBBER, 2 }} },
    { ITEM_WIND_UP_MOUSE, "Wind-up Mouse", FAC_PET_SUPPLY_FACTORY, 6300, 1, 3,  /* 1 h 45 m */
        {{ ITEM_WOOL, 2 }, { ITEM_COTTON_FABRIC, 1 }, { ITEM_PLASTIC, 1 }} },
    { ITEM_CAT_LITTER,    "Cat Litter",    FAC_PET_SUPPLY_FACTORY, 4800, 1, 2,  /* 1 h 20 m */
        {{ ITEM_SOYBEAN, 3 }, { ITEM_PAPER, 1 }} },
    { ITEM_WATER_BOWL,    "Water Bowl",    FAC_PET_SUPPLY_FACTORY, 3600, 1, 2,  /* 1 h */
        {{ ITEM_CLAY, 2 }, { ITEM_PINE_TREE, 2 }} },
    { ITEM_PET_BED,       "Pet Bed",       FAC_PET_SUPPLY_FACTORY, 10800, 1, 2,  /* 3 h */
        {{ ITEM_DOWN_FEATHER, 2 }, { ITEM_COTTON_FABRIC, 3 }} },
    { ITEM_FALAFEL,          "Falafel",          FAC_VEGAN_CAFE, 3600, 1, 3,   /* 1 h */
        {{ ITEM_SOYBEAN, 4 }, { ITEM_PEPPER, 1 }, { ITEM_POTATO, 1 }} },
    { ITEM_MISO_SOUP,        "Miso Soup",        FAC_VEGAN_CAFE, 10800, 1, 4,  /* 3 h */
        {{ ITEM_SOYBEAN, 4 }, { ITEM_SEAWEED, 2 }, { ITEM_TOFU, 1 }, { ITEM_MUSHROOM, 1 }} },
    { ITEM_VEGAN_CHEESECAKE, "Vegan Cheesecake", FAC_VEGAN_CAFE, 14400, 1, 4,  /* 4 h */
        {{ ITEM_PLANT_MILK, 2 }, { ITEM_WHEAT, 2 }, { ITEM_GRAPE, 1 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_SOYBEAN_HUMMUS,   "Soybean Hummus",   FAC_VEGAN_CAFE, 9000, 1, 4,   /* 2 h 30 m */
        {{ ITEM_SOYBEAN, 4 }, { ITEM_CHILI_SAUCE, 1 }, { ITEM_KEY_LIME, 1 }, { ITEM_CARROT, 2 }} },
    { ITEM_GUACAMOLE,        "Guacamole",        FAC_VEGAN_CAFE, 12000, 1, 3,  /* 3 h 20 m */
        {{ ITEM_AVOCADO, 3 }, { ITEM_TOMATO, 1 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_BALLOON,      "Balloon",      FAC_FESTIVITIES_FACTORY, 3600, 1, 2,  /* 1 h */
        {{ ITEM_YARN, 1 }, { ITEM_RUBBER, 1 }} },
    { ITEM_COTTON_CANDY, "Cotton Candy", FAC_FESTIVITIES_FACTORY, 2700, 1, 3,  /* 45 m */
        {{ ITEM_SUGAR, 2 }, { ITEM_SYRUP, 1 }, { ITEM_ROSE, 2 }} },
    { ITEM_SOAP_BUBBLES, "Soap Bubbles", FAC_FESTIVITIES_FACTORY, 5400, 1, 2,  /* 1 h 30 m */
        {{ ITEM_SCENTED_SOAP, 1 }, { ITEM_PLASTIC, 1 }} },
    { ITEM_LEI,          "Lei",          FAC_FESTIVITIES_FACTORY, 1800, 1, 2,  /* 30 m */
        {{ ITEM_ROSE, 5 }, { ITEM_JASMINE, 5 }} },
    { ITEM_PINATA,       "Pinata",       FAC_FESTIVITIES_FACTORY, 7200, 1, 3,  /* 2 h */
        {{ ITEM_GLUE, 1 }, { ITEM_PAPER, 2 }, { ITEM_JELLY_BEANS, 1 }} },
    { ITEM_GARDEN_TOOLS, "Garden Tools", FAC_GARDENING_SUPPLIES, 6300, 1, 3,  /* 1 h 45 m */
        {{ ITEM_PINE_TREE, 1 }, { ITEM_COPPER_ORE, 3 }, { ITEM_PLASTIC, 1 }} },
    { ITEM_GARDEN_GNOME, "Garden Gnome", FAC_GARDENING_SUPPLIES, 10800, 1, 1,  /* 3 h */
        {{ ITEM_CLAY, 3 }} },
    { ITEM_LAWN_CHAIR,   "Lawn Chair",   FAC_GARDENING_SUPPLIES, 5400, 1, 2,  /* 1 h 30 m */
        {{ ITEM_PINE_TREE, 2 }, { ITEM_COTTON_FABRIC, 1 }} },
    { ITEM_PLANTER,      "Planter",      FAC_GARDENING_SUPPLIES, 3600, 1, 1,  /* 1 h */
        {{ ITEM_PINE_TREE, 3 }} },
    { ITEM_GARDEN_HOSE,  "Garden Hose",  FAC_GARDENING_SUPPLIES, 7200, 1, 3,  /* 2 h */
        {{ ITEM_PLASTIC, 1 }, { ITEM_RUBBER, 1 }, { ITEM_COTTON_FABRIC, 1 }} },
    { ITEM_OLIVE_OIL,       "Olive Oil",       FAC_ITALIAN_RESTAURANT, 5400, 1, 1,  /* 1 h 30 m */
        {{ ITEM_OLIVE, 3 }} },
    { ITEM_BRUSCHETTA,      "Bruschetta",      FAC_ITALIAN_RESTAURANT, 2700, 1, 3,  /* 45 m */
        {{ ITEM_BREAD, 1 }, { ITEM_TOMATO, 1 }, { ITEM_SHRIMP, 2 }} },
    { ITEM_PASTA_ARRABIATA, "Pasta Arrabiata", FAC_ITALIAN_RESTAURANT, 6300, 1, 4,  /* 1 h 45 m */
        {{ ITEM_WHEAT, 3 }, { ITEM_EGG, 2 }, { ITEM_PEPPER, 2 }, { ITEM_CHEESE, 1 }} },
    { ITEM_RAVIOLI,         "Ravioli",         FAC_ITALIAN_RESTAURANT, 7200, 1, 3,  /* 2 h */
        {{ ITEM_WHEAT, 3 }, { ITEM_LOBSTER, 1 }, { ITEM_CHEESE, 1 }} },
    { ITEM_TIRAMISU,        "Tiramisu",        FAC_ITALIAN_RESTAURANT, 3600, 1, 4,  /* 1 h */
        {{ ITEM_ESPRESSO, 1 }, { ITEM_EGG, 2 }, { ITEM_COOKIES, 2 }, { ITEM_CHOCOLATE, 1 }} },
    { ITEM_LASAGNA,         "Lasagna",         FAC_ITALIAN_RESTAURANT, 9000, 1, 4,  /* 2 h 30 m */
        {{ ITEM_WHEAT, 4 }, { ITEM_MUSHROOM, 2 }, { ITEM_BACON, 1 }, { ITEM_CHEESE, 1 }} },
    { ITEM_SUMMER_BOUQUET,    "Summer Bouquet",        FAC_BOUQUET_FACTORY, 4500, 1, 3,  /* 1 h 15 m */
        {{ ITEM_ROSE, 3 }, { ITEM_WHEAT, 5 }, { ITEM_PAPER, 1 }} },
    { ITEM_VEGETABLE_BOUQUET, "Vegetable Bouquet",     FAC_BOUQUET_FACTORY, 9000, 1, 4,  /* 2 h 30 m */
        {{ ITEM_TOMATO, 3 }, { ITEM_CORN, 1 }, { ITEM_CARROT, 2 }, { ITEM_SUGARCANE, 4 }} },
    { ITEM_WEDDING_BOUQUET,   "Wedding Bouquet",       FAC_BOUQUET_FACTORY, 5400, 1, 3,  /* 1 h 30 m */
        {{ ITEM_JASMINE, 2 }, { ITEM_COTTON, 3 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_CANDY_BOUQUET,     "Candy Bouquet",         FAC_BOUQUET_FACTORY, 3600, 1, 3,  /* 1 h */
        {{ ITEM_STRAWBERRY, 3 }, { ITEM_HONEY_GINGERBREAD, 1 }, { ITEM_CANDY_CANE, 1 }} },
    { ITEM_FLOWER_BASKET,     "Flower Basket",         FAC_BOUQUET_FACTORY, 7200, 1, 3,  /* 2 h */
        {{ ITEM_ROSE, 3 }, { ITEM_JASMINE, 4 }, { ITEM_PINE_TREE, 1 }} },
    { ITEM_LAVENDER_BOUQUET,  "Lavender Bouquet",      FAC_BOUQUET_FACTORY, 8400, 1, 2,  /* 2 h 20 m */
        {{ ITEM_LAVENDER, 2 }, { ITEM_SUGARCANE, 3 }} },
    { ITEM_TEA_COFFEE_BOUQUET,"Tea and Coffee Bouquet", FAC_BOUQUET_FACTORY, 10800, 1, 4,  /* 3 h */
        {{ ITEM_TEA_BAGS, 3 }, { ITEM_CACAO, 1 }, { ITEM_COFFEE_PLANT, 1 }, { ITEM_PAPER, 1 }} },
    { ITEM_CUP,              "Cup",              FAC_KITCHENWARE_FACTORY, 6300, 1, 1,  /* 1 h 45 m */
        {{ ITEM_CLAY, 2 }} },
    { ITEM_FRYING_PAN,       "Frying Pan",       FAC_KITCHENWARE_FACTORY, 5400, 1, 2,  /* 1 h 30 m */
        {{ ITEM_COPPER_ORE, 4 }, { ITEM_PINE_TREE, 1 }} },
    { ITEM_TRIVET_MAT,       "Trivet Mat",       FAC_KITCHENWARE_FACTORY, 14400, 1, 2,  /* 4 h */
        {{ ITEM_CORK_OAK, 3 }, { ITEM_PAPER, 1 }} },
    { ITEM_TEAPOT,           "Teapot",           FAC_KITCHENWARE_FACTORY, 8100, 1, 1,  /* 2 h 15 m */
        {{ ITEM_CLAY, 3 }} },
    { ITEM_CUTLERY,          "Cutlery",          FAC_KITCHENWARE_FACTORY, 2400, 1, 1,  /* 40 m */
        {{ ITEM_SILVER_ORE, 7 }} },
    { ITEM_TEA_CEREMONY_SET, "Tea Ceremony Set", FAC_KITCHENWARE_FACTORY, 9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_CLAY, 2 }, { ITEM_PINE_TREE, 1 }, { ITEM_COTTON_FABRIC, 1 }} },
    { ITEM_UKULELE,   "Ukulele",   FAC_MUSIC_FACTORY, 4500, 1, 2,  /* 1 h 15 m */
        {{ ITEM_PINE_TREE, 3 }, { ITEM_COPPER_ORE, 3 }} },
    { ITEM_SAXOPHONE, "Saxophone", FAC_MUSIC_FACTORY, 5100, 1, 3,  /* 1 h 25 m */
        {{ ITEM_PLASTIC, 1 }, { ITEM_COPPER_ORE, 6 }, { ITEM_SUGARCANE, 1 }} },
    { ITEM_DRUM,      "Drum",      FAC_MUSIC_FACTORY, 7200, 1, 3,  /* 2 h */
        {{ ITEM_PINE_TREE, 3 }, { ITEM_COTTON_FABRIC, 2 }, { ITEM_SILK_FABRIC, 1 }} },
    { ITEM_ACCORDION, "Accordion", FAC_MUSIC_FACTORY, 9000, 1, 2,  /* 2 h 30 m */
        {{ ITEM_PLASTIC, 2 }, { ITEM_SILK_FABRIC, 2 }} },
    { ITEM_PAN_FLUTE, "Pan Flute", FAC_MUSIC_FACTORY, 3600, 1, 2,  /* 1 h */
        {{ ITEM_SUGARCANE, 5 }, { ITEM_COLORFUL_FEATHER, 1 }} },
    { ITEM_BLACK_TEA,         "Black Tea",         FAC_TEA_FACTORY, 2700, 1, 1,  /* 45 m */
        {{ ITEM_TEA_PLANT, 2 }} },
    { ITEM_JASMINE_WHITE_TEA, "Jasmine White Tea", FAC_TEA_FACTORY, 1800, 1, 2,  /* 30 m */
        {{ ITEM_TEA_BAGS, 1 }, { ITEM_JASMINE, 2 }} },
    { ITEM_ROSE_TEA,          "Rose Tea",          FAC_TEA_FACTORY, 3600, 1, 1,  /* 1 h */
        {{ ITEM_ROSE, 2 }} },
    { ITEM_BUTTER_TEA,        "Butter Tea",        FAC_TEA_FACTORY, 7200, 1, 3,  /* 2 h */
        {{ ITEM_TEA_PLANT, 2 }, { ITEM_BUTTER, 1 }, { ITEM_MILK, 1 }} },
    { ITEM_APPLE_TEA,         "Apple Tea",         FAC_TEA_FACTORY, 5400, 1, 4,  /* 1 h 30 m */
        {{ ITEM_APPLE, 2 }, { ITEM_TEA_PLANT, 1 }, { ITEM_HONEYCOMBS, 1 }, { ITEM_KEY_LIME, 1 }} },
    { ITEM_MILK_OOLONG_TEA,   "Milk Oolong Tea",   FAC_TEA_FACTORY, 9000, 1, 3,  /* 2 h 30 m */
        {{ ITEM_TEA_PLANT, 1 }, { ITEM_MILK, 2 }, { ITEM_TEA_CEREMONY_SET, 1 }} },
    { ITEM_CHOCOLATE_CUSTARD, "Chocolate Custard", FAC_TEA_FACTORY, 10800, 1, 3,  /* 3 h */
        {{ ITEM_TEA_PLANT, 2 }, { ITEM_CHOCOLATE, 1 }, { ITEM_EGG, 2 }} },
    { ITEM_STRAWBERRY_JAM,  "Strawberry Jam",  FAC_JAM_FACTORY, 5400, 1, 1,   /* 90 m */
        {{ ITEM_STRAWBERRY, 3 }} },
    { ITEM_PEACH_MARMALADE, "Peach Marmalade", FAC_JAM_FACTORY, 9000, 1, 1,   /* 150 m */
        {{ ITEM_PEACH, 3 }} },
    { ITEM_WATERMELON_JAM,  "Watermelon Jam",  FAC_JAM_FACTORY, 10800, 1, 1,  /* 3 h */
        {{ ITEM_WATERMELON, 3 }} },
    { ITEM_PLUM_JAM,              "Plum Jam",              FAC_JAM_FACTORY, 14400, 1, 1,  /* 4 h */
        {{ ITEM_PLUM, 3 }} },
    { ITEM_GRAPE_JELLY,           "Grape Jelly",           FAC_JAM_FACTORY, 12600, 1, 1,  /* 3 h 30 m */
        {{ ITEM_GRAPE, 3 }} },
    { ITEM_ROSE_JAM,              "Rose Jam",              FAC_JAM_FACTORY,  7200, 1, 1,  /* 2 h */
        {{ ITEM_ROSE, 3 }} },
    { ITEM_CARAMELIZED_MUSHROOMS, "Caramelized Mushrooms", FAC_JAM_FACTORY,  6300, 1, 2,  /* 1 h 45 m */
        {{ ITEM_MUSHROOM, 3 }, { ITEM_SUGAR, 2 }} },
    { ITEM_PEANUT_BUTTER,         "Peanut Butter",         FAC_JAM_FACTORY,  8100, 1, 2,  /* 2 h 15 m */
        {{ ITEM_PEANUT_PLANT, 3 }, { ITEM_SYRUP, 1 }} },
    { ITEM_APPLE_JAM,             "Apple Jam",             FAC_JAM_FACTORY,  9900, 1, 1,  /* 2 h 45 m */
        {{ ITEM_APPLE, 3 }} },
};

const char g_item_images[ITEM_COUNT][MAX_IMAGE_NAME] = {
    [ITEM_WHEAT]                              = "Wheat.webp",
    [ITEM_CORN]                               = "Corn.webp",
    [ITEM_CARROT]                             = "Carrot.webp",
    [ITEM_SUGARCANE]                          = "Sugarcane.webp",
    [ITEM_COTTON]                             = "Cotton.webp",
    [ITEM_STRAWBERRY]                         = "Strawberry.webp",
    [ITEM_TOMATO]                             = "Tomato.webp",
    [ITEM_PINE_TREE]                          = "Pine_Tree.webp",
    [ITEM_POTATO]                             = "Potato.webp",
    [ITEM_CACAO]                              = "Cacao.webp",
    [ITEM_RUBBER_TREE]                        = "Rubber_Tree.webp",
    [ITEM_SILK]                               = "Silk.webp",
    [ITEM_CORK_OAK]                           = "Cork_Oak.webp",
    [ITEM_PEPPER]                             = "Pepper.webp",
    [ITEM_MINT]                               = "Mint.webp",
    [ITEM_RICE]                               = "Rice.webp",
    [ITEM_ROSE]                               = "Rose.webp",
    [ITEM_JASMINE]                            = "Jasmine.webp",
    [ITEM_COFFEE_PLANT]                       = "Coffee_Plant.webp",
    [ITEM_PEANUT_PLANT]                       = "Peanut_Plant.webp",
    [ITEM_APPLE]                              = "Apple.webp",
    [ITEM_TEA_PLANT]                          = "Tea_Plant.webp",
    [ITEM_SOYBEAN]                            = "Soybean.webp",
    [ITEM_LAVENDER]                           = "Lavender.webp",
    [ITEM_PEACH]                              = "Peach.webp",
    [ITEM_WATERMELON]                         = "Watermelon.webp",
    [ITEM_PLUM]                               = "Plum.webp",
    [ITEM_GRAPE]                              = "Grapes.webp",
    [ITEM_OLIVE]                              = "Olives.webp",
    [ITEM_KEY_LIME]                           = "Key_Lime.webp",
    [ITEM_BANANA]                             = "Banana.webp",
    [ITEM_COCONUT]                            = "Coconut.webp",
    [ITEM_PINEAPPLE]                          = "Pineapple.webp",
    [ITEM_FISH]                               = "Fish.webp",
    [ITEM_SHRIMP]                             = "Shrimp.webp",
    [ITEM_LOBSTER]                            = "Lobster.webp",
    [ITEM_AVOCADO]                            = "Avocado.webp",
    [ITEM_MANGO]                              = "Mango.webp",
    [ITEM_ALOE]                               = "Aloe.webp",
    [ITEM_COW_FEED]                           = "Cow_Feed.webp",
    [ITEM_CHICKEN_FEED]                       = "Chicken_Feed.webp",
    [ITEM_SHEEP_FEED]                         = "Sheep_Feed.webp",
    [ITEM_BEE_FEED]                           = "Bee_Feed.webp",
    [ITEM_PIG_FEED]                           = "Pig_Feed.webp",
    [ITEM_SUBSTRATE]                          = "Substrate.webp",
    [ITEM_MILK]                               = "Milk.webp",
    [ITEM_EGG]                                = "Egg.webp",
    [ITEM_WOOL]                               = "Wool.webp",
    [ITEM_HONEYCOMBS]                         = "Honeycombs.webp",
    [ITEM_BACON]                              = "Bacon.webp",
    [ITEM_DOWN_FEATHER]                       = "Down_Feather.webp",
    [ITEM_COLORFUL_FEATHER]                   = "Colorful_Feather.webp",
    [ITEM_SEAWEED]                            = "Seaweed.webp",
    [ITEM_SCALLOP]                            = "Scallop.webp",
    [ITEM_PEARLS]                             = "Pearl.webp",
    [ITEM_MUSHROOM]                           = "Mushroom.webp",
    [ITEM_CREAM]                              = "Cream.webp",
    [ITEM_CHEESE]                             = "Cheese.webp",
    [ITEM_BUTTER]                             = "Butter.webp",
    [ITEM_YOGURT]                             = "Yogurt.webp",
    [ITEM_PEACH_YOGURT]                       = "Peach_Yogurt.webp",
    [ITEM_TOFU]                               = "Tofu.webp",
    [ITEM_PLANT_MILK]                         = "Plant_Milk.webp",
    [ITEM_BREAD]                              = "Bread.webp",
    [ITEM_COOKIES]                            = "Cookies.webp",
    [ITEM_BAGEL]                              = "Bagel.webp",
    [ITEM_PIZZA]                              = "Pizza.webp",
    [ITEM_POTATO_BREAD]                       = "Potato_Bread.webp",
    [ITEM_BANANA_BREAD]                       = "Banana_Bread.webp",
    [ITEM_SEAFOOD_PIZZA]                      = "Seafood_Pizza.webp",
    [ITEM_MUSHROOM_TURNOVER]                  = "Mushroom_Turnover.webp",
    [ITEM_APPLE_STRUDEL]                      = "Apple_Strudel.webp",
    [ITEM_SUGAR]                              = "Sugar.webp",
    [ITEM_SYRUP]                              = "Syrup.webp",
    [ITEM_CARAMEL]                            = "Caramel.webp",
    [ITEM_HONEY_CARAMEL]                      = "Honey_Caramel.webp",
    [ITEM_COTTON_FABRIC]                      = "Cotton_Fabric.webp",
    [ITEM_YARN]                               = "Yarn.webp",
    [ITEM_SILK_FABRIC]                        = "Silk_Fabric.webp",
    [ITEM_NYLON_THREAD]                       = "Nylon_Thread.webp",
    [ITEM_DOUGH]                              = "Dough.webp",
    [ITEM_FROZEN_VEGETABLES]                  = "Frozen_Vegetables.webp",
    [ITEM_DUMPLINGS]                          = "Dumplings.webp",
    [ITEM_SEAFOOD_MIX]                        = "Seafood_Mix.webp",
    [ITEM_FROZEN_FRUIT]                       = "Frozen_Fruit.webp",
    [ITEM_PACKAGED_MEAL]                      = "Packaged_Meal.webp",
    [ITEM_MUFFIN]                             = "Muffin.webp",
    [ITEM_BROWNIE]                            = "Brownie.webp",
    [ITEM_CUPCAKE]                            = "Cupcake.webp",
    [ITEM_DONUT]                              = "Donut.webp",
    [ITEM_CHEESECAKE]                         = "Cheesecake.webp",
    [ITEM_HONEY_GINGERBREAD]                  = "Honey_Gingerbread.webp",
    [ITEM_KEY_LIME_PIE]                       = "Key_Lime_Pie.webp",
    [ITEM_COCONUT_MACAROON]                   = "Coconut_Macaroon.webp",
    [ITEM_CARAMEL_APPLE]                      = "Caramel_Apple.webp",
    [ITEM_ICE_CREAM_CONE]                     = "Ice_Cream_Cone.webp",
    [ITEM_POPSICLE]                           = "Popsicle.webp",
    [ITEM_FROZEN_YOGURT]                      = "Frozen_Yogurt.webp",
    [ITEM_ICE_CREAM_BAR]                      = "Ice_Cream_Bar.webp",
    [ITEM_MINT_CHOCO_ICE_CREAM]               = "Mint_Chocolate_Ice_Cream.webp",
    [ITEM_PINEAPPLE_SORBET]                   = "Pineapple_Sorbet.webp",
    [ITEM_ROSE_SORBET]                        = "Rose_Sorbet.webp",
    [ITEM_PEANUT_PARFAIT]                     = "Peanut_Parfait.webp",
    [ITEM_RUBBER]                             = "Rubber.webp",
    [ITEM_PLASTIC]                            = "Plastic.webp",
    [ITEM_GLUE]                               = "Glue.webp",
    [ITEM_DUMBBELL]                           = "Dumbbell.webp",
    [ITEM_PAPER]                              = "Paper.webp",
    [ITEM_PAPER_TOWEL]                        = "Paper_Towel.webp",
    [ITEM_WALLPAPER]                          = "Wallpaper.webp",
    [ITEM_BOOK]                               = "Book.webp",
    [ITEM_TEA_BAGS]                           = "Tea_Bags.webp",
    [ITEM_MILKSHAKE]                          = "Milkshake.webp",
    [ITEM_CHEESEBURGER]                       = "Cheeseburger.webp",
    [ITEM_SANDWICH]                           = "Sandwich.webp",
    [ITEM_FRENCH_FRIES]                       = "French_Fries.webp",
    [ITEM_BAKED_POTATO]                       = "Baked_Potato.webp",
    [ITEM_FISH_BURGER]                        = "Fish_Burger.webp",
    [ITEM_FISH_AND_CHIPS]                     = "Fish_and_Chips.webp",
    [ITEM_PEANUT_BUTTER_CREPES]               = "Peanut_Butter_Cr%3Fpes.webp",
    [ITEM_POPCORN]                            = "Popcorn.webp",
    [ITEM_CORN_CHIPS]                         = "Corn_Chips.webp",
    [ITEM_GRANOLA]                            = "Granola.webp",
    [ITEM_POTATO_CHIPS]                       = "Potato_Chips.webp",
    [ITEM_CANAPE]                             = "Canap%3F.webp",
    [ITEM_GLAZED_BACON]                       = "Glazed_Bacon.webp",
    [ITEM_PUFFED_RICE]                        = "Puffed_Rice.webp",
    [ITEM_DRIED_MUSHROOMS]                    = "Dried_Mushrooms.webp",
    [ITEM_SALTED_PEANUTS]                     = "Salted_Peanuts.webp",
    [ITEM_SHIRT]                              = "Shirt.webp",
    [ITEM_SWEATER]                            = "Sweater.webp",
    [ITEM_COAT]                               = "Coat.webp",
    [ITEM_HAT]                                = "Hat.webp",
    [ITEM_DRESS]                              = "Dress.webp",
    [ITEM_SUIT]                               = "Suit.webp",
    [ITEM_TYROLEAN_HAT]                       = "Tyrolean_Hat.webp",
    [ITEM_EVENING_GOWN]                       = "Evening_Gown.webp",
    [ITEM_BRONZE_INGOT]                       = "Bronze_Ingot.webp",
    [ITEM_SILVER_INGOT]                       = "Silver_Ingot.webp",
    [ITEM_GOLD_INGOT]                         = "Gold_Ingot.webp",
    [ITEM_PLATINUM_INGOT]                     = "Platinum_Ingot.webp",
    [ITEM_COPPER_ORE]                         = "Bronze_Ore.webp",
    [ITEM_CLAY]                               = "Clay.webp",
    [ITEM_SILVER_ORE]                         = "Silver_Ore.webp",
    [ITEM_GOLD_ORE]                           = "Gold_Ore.webp",
    [ITEM_PLATINUM_ORE]                       = "Platinum_Ore.webp",
    [ITEM_SUSHI_ROLL]                         = "Sushi_Roll.webp",
    [ITEM_LOBSTER_SUSHI]                      = "Lobster_Sushi.webp",
    [ITEM_SEAWEED_SHRIMP_SALAD]               = "Seaweed_Shrimp_Salad.webp",
    [ITEM_SCALLOP_SUSHI]                      = "Scallop_Sushi.webp",
    [ITEM_COCONUT_SOUP]                       = "Coconut_Soup.webp",
    [ITEM_RICE_NOODLES]                       = "Rice_Noodles.webp",
    [ITEM_SEA_SALAD]                          = "Sea_Salad.webp",
    [ITEM_MUSHROOM_SALAD]                     = "Mushroom_Salad.webp",
    [ITEM_PEANUT_SAUCE]                       = "Peanut_Sauce.webp",
    [ITEM_PENDANT]                            = "Pendant.webp",
    [ITEM_RING]                               = "Ring.webp",
    [ITEM_PEARL_CHOKER]                       = "Pearl_Choker.webp",
    [ITEM_EARRINGS]                           = "Earrings.webp",
    [ITEM_DIADEM]                             = "Diadem.webp",
    [ITEM_FEATHER_EARRINGS]                   = "Feather_Earrings.webp",
    [ITEM_FLIP_FLOPS]                         = "Flip_Flops.webp",
    [ITEM_SANDALS]                            = "Sandals_Shoe.webp",
    [ITEM_SNEAKERS]                           = "Sneakers.webp",
    [ITEM_BOOTS]                              = "Boots.webp",
    [ITEM_HIGH_HEELED_SHOES]                  = "High-Heeled_Shoes.webp",
    [ITEM_WARM_BOOTS]                         = "Warm_Boots.webp",
    [ITEM_TABLE]                              = "Table.webp",
    [ITEM_CHAIR]                              = "Chair.webp",
    [ITEM_COUCH]                              = "Couch.webp",
    [ITEM_BED]                                = "Bed.webp",
    [ITEM_FLOOR_LAMP]                         = "Floor_Lamp.webp",
    [ITEM_ERASER]                             = "Eraser.webp",
    [ITEM_STICKY_NOTES]                       = "Sticky_Notes.webp",
    [ITEM_BULLETIN_BOARD]                     = "Bulletin_Board.webp",
    [ITEM_HIGHLIGHTER_PEN]                    = "Highlighter_Pen.webp",
    [ITEM_CHILI_SAUCE]                        = "Chili_Sauce.webp",
    [ITEM_BURRITO]                            = "Burrito.webp",
    [ITEM_NACHOS]                             = "Nachos.webp",
    [ITEM_TACO]                               = "Taco.webp",
    [ITEM_BACON_JALAPENO_POPPERS]             = "Bacon-wrapped_Jalape%3Fo_Poppers.webp",
    [ITEM_GAZPACHO]                           = "Gazpacho.webp",
    [ITEM_CORN_SOUP]                          = "Corn_Soup.webp",
    [ITEM_MOLE_SAUCE]                         = "Mole_Sauce.webp",
    [ITEM_MUSHROOM_SOUP]                      = "Mushroom_Soup.webp",
    [ITEM_JELLY_BEANS]                        = "Jelly_Beans.webp",
    [ITEM_TOFFEE]                             = "Toffee.webp",
    [ITEM_CANDY_CANE]                         = "Candy_Cane.webp",
    [ITEM_CHOCOLATE]                          = "Chocolate.webp",
    [ITEM_LOLLIPOP]                           = "Lollipop.webp",
    [ITEM_HONEY_MARSHMALLOW]                  = "Honey_Marshmallow.webp",
    [ITEM_MINT_CANDY]                         = "Mint_Candy.webp",
    [ITEM_JELLY_FRUIT_SLICES]                 = "Jelly_Fruit_Slices.webp",
    [ITEM_CHOCOLATE_BAR]                      = "Chocolate_Bar.webp",
    [ITEM_GREEN_TEA_CANDY]                    = "Green_Tea_Candy.webp",
    [ITEM_SCRUB_BRUSH]                        = "Scrub_Brush.webp",
    [ITEM_SOAP_DISPENSER]                     = "Soap_Dispenser.webp",
    [ITEM_CLOTHESLINE]                        = "Clothesline_and_Clothespins.webp",
    [ITEM_PLUNGER]                            = "Plunger.webp",
    [ITEM_FEATHER_DUSTER]                     = "Feather_Duster.webp",
    [ITEM_RUBBER_GLOVES]                      = "Rubber_Gloves.webp",
    [ITEM_PLASTIC_BOTTLE]                     = "Plastic_Bottle.webp",
    [ITEM_TOYS]                               = "Toys.webp",
    [ITEM_BALL]                               = "Ball.webp",
    [ITEM_INFLATABLE_BOAT]                    = "Inflatable_Boat.webp",
    [ITEM_SHUTTLECOCK]                        = "Shuttlecock.webp",
    [ITEM_MODELING_CLAY]                      = "Modeling_Clay.webp",
    [ITEM_BACKPACK]                           = "Bagpack.webp",
    [ITEM_WOVEN_BAG]                          = "Woven_Bag.webp",
    [ITEM_SMALL_HANDBAG]                      = "Small_Handbag.webp",
    [ITEM_SUITCASE]                           = "Suitcase.webp",
    [ITEM_KIDS_BAG]                           = "Kids_Bag.webp",
    [ITEM_STRAWBERRY_JAM]                     = "Strawberry_Jam.webp",
    [ITEM_PEACH_MARMALADE]                    = "Peach_Marmalade.webp",
    [ITEM_WATERMELON_JAM]                     = "Watermelon_Jam.webp",
    [ITEM_PLUM_JAM]                           = "Plum_Jam.webp",
    [ITEM_GRAPE_JELLY]                        = "Grape_Jelly.webp",
    [ITEM_ROSE_JAM]                           = "Rose_Jam.webp",
    [ITEM_CARAMELIZED_MUSHROOMS]              = "Caramelized_Mushrooms.webp",
    [ITEM_PEANUT_BUTTER]                      = "Peanut_Butter.webp",
    [ITEM_APPLE_JAM]                          = "Apple_Jam.webp",
    [ITEM_QUICHE]                             = "Quiche.webp",
    [ITEM_BAKED_LOBSTER]                      = "Baked_Lobster.webp",
    [ITEM_BACON_AND_EGGS]                     = "Bacon_and_Eggs.webp",
    [ITEM_FRIED_FISH]                         = "Fried_Fish.webp",
    [ITEM_RICE_CASSEROLE]                     = "Rice_Casserole.webp",
    [ITEM_PANCAKES_WITH_HONEY]                = "Pancakes_with_Honey.webp",
    [ITEM_LOBSTER_OMELET]                     = "Lobster_Omelet.webp",
    [ITEM_GRILLED_SCALLOP]                    = "Grilled_Scallop.webp",
    [ITEM_ROAST_MEAT]                         = "Roast_Meat.webp",
    [ITEM_AROMATHERAPY_CANDLE]                = "Aromatherapy_Candle.webp",
    [ITEM_PERFUME]                            = "Perfume.webp",
    [ITEM_AIR_FRESHENER]                      = "Air_Freshener.webp",
    [ITEM_SCENTED_SOAP]                       = "Scented_Soap.webp",
    [ITEM_JASMINE_OIL]                        = "Jasmine_Oil.webp",
    [ITEM_LOTION]                             = "Lotion.webp",
    [ITEM_FACE_MASK]                          = "Face_Mask.webp",
    [ITEM_TOOTHPASTE]                         = "Toothpaste.webp",
    [ITEM_VITAMIN_COCKTAIL]                   = "Vitamin_Cocktail.webp",
    [ITEM_GRAPE_FIZZ]                         = "Grape_Fizz.webp",
    [ITEM_CHOCOLATE_SMOOTHIE]                 = "Chocolate_Smoothie.webp",
    [ITEM_WATERMELON_FRESH]                   = "Watermelon_Fresh.webp",
    [ITEM_ICED_TEA]                           = "Iced_Tea.webp",
    [ITEM_TROPICAL_MIX]                       = "Tropical_Mix.webp",
    [ITEM_APPLE_FRESH]                        = "Apple_Fresh.webp",
    [ITEM_MINT_ICED_TEA]                      = "Mint_Iced_Tea.webp",
    [ITEM_CARROT_CAKE]                        = "Carrot_Cake.webp",
    [ITEM_STRAWBERRY_CAKE]                    = "Strawberry_Cake.webp",
    [ITEM_COFFEE_CAKE]                        = "Coffee_Cake.webp",
    [ITEM_MINT_CAKE]                          = "Mint_Cake.webp",
    [ITEM_CHOCOLATE_CAKE]                     = "Chocolate_Cake.webp",
    [ITEM_WEDDING_CAKE]                       = "Wedding_Cake.webp",
    [ITEM_HOT_DOG]                            = "Hot_Dog.webp",
    [ITEM_CORN_DOG]                           = "Corn_Dog.webp",
    [ITEM_CONEY_DOG]                          = "Coney_Dog.webp",
    [ITEM_CARROT_SANDWICH]                    = "Carrot_Sandwich.webp",
    [ITEM_RATATOUILLE]                        = "Ratatouille.webp",
    [ITEM_PROFITEROLES]                       = "Profiteroles.webp",
    [ITEM_SALADE_NICOISE]                     = "Salade_Nicoise.webp",
    [ITEM_BOUILLABAISSE]                      = "Bouillabaisse.webp",
    [ITEM_ESPRESSO]                           = "Espresso.webp",
    [ITEM_CAPPUCCINO]                         = "Cappuccino.webp",
    [ITEM_CAFFE_MOCHA]                        = "Caff%3F_Mocha.webp",
    [ITEM_HOT_CHOCOLATE]                      = "Hot_Chocolate.webp",
    [ITEM_COCONUT_LATTE]                      = "Coconut_Latte.webp",
    [ITEM_PILLOW]                             = "Pillow.webp",
    [ITEM_PARKA]                              = "Parka.webp",
    [ITEM_DOWN_QUILT]                         = "Down_Quilt.webp",
    [ITEM_ROBE_AND_SLIPPERS]                  = "Robe_and_Slippers.webp",
    [ITEM_PUPPET]                             = "Puppet.webp",
    [ITEM_PORCELAIN_DOLL]                     = "Porcelain_Doll.webp",
    [ITEM_FASHION_DOLL]                       = "Fashion_Doll.webp",
    [ITEM_RAG_DOLL]                           = "Rag_Doll.webp",
    [ITEM_RUBBER_BONE]                        = "Rubber_Bone.webp",
    [ITEM_WIND_UP_MOUSE]                      = "Wind-up_Mouse.webp",
    [ITEM_CAT_LITTER]                         = "Cat_Litter.webp",
    [ITEM_WATER_BOWL]                         = "Water_Bowl.webp",
    [ITEM_PET_BED]                            = "Pet_Bed.webp",
    [ITEM_FALAFEL]                            = "Falafel.webp",
    [ITEM_MISO_SOUP]                          = "Miso_Soup.webp",
    [ITEM_VEGAN_CHEESECAKE]                   = "Vegan_Cheesecake.webp",
    [ITEM_SOYBEAN_HUMMUS]                     = "Soybean_Hummus.webp",
    [ITEM_GUACAMOLE]                          = "Guacamole.webp",
    [ITEM_BALLOON]                            = "Balloon.webp",
    [ITEM_COTTON_CANDY]                       = "Cotton_Candy.webp",
    [ITEM_SOAP_BUBBLES]                       = "Soap_Bubbles.webp",
    [ITEM_LEI]                                = "Lei.webp",
    [ITEM_PINATA]                             = "Pi%3Fata.webp",
    [ITEM_GARDEN_TOOLS]                       = "Garden_Tools.webp",
    [ITEM_GARDEN_GNOME]                       = "Garden_Gnome.webp",
    [ITEM_LAWN_CHAIR]                         = "Lawn_Chair.webp",
    [ITEM_PLANTER]                            = "Planter.webp",
    [ITEM_GARDEN_HOSE]                        = "Garden_Hose.webp",
    [ITEM_OLIVE_OIL]                          = "Olive_Oil.webp",
    [ITEM_BRUSCHETTA]                         = "Bruschetta.webp",
    [ITEM_PASTA_ARRABIATA]                    = "Pasta_Arrabiata.webp",
    [ITEM_RAVIOLI]                            = "Ravioli.webp",
    [ITEM_TIRAMISU]                           = "Tiramisu.webp",
    [ITEM_LASAGNA]                            = "Lasagna.webp",
    [ITEM_SUMMER_BOUQUET]                     = "Summer_Bouquet.webp",
    [ITEM_VEGETABLE_BOUQUET]                  = "Vegetable_Bouquet.webp",
    [ITEM_WEDDING_BOUQUET]                    = "Wedding_Bouquet.webp",
    [ITEM_CANDY_BOUQUET]                      = "Candy_Bouquet.webp",
    [ITEM_FLOWER_BASKET]                      = "Flower_Basket.webp",
    [ITEM_LAVENDER_BOUQUET]                   = "Lavender_Bouquet.webp",
    [ITEM_TEA_COFFEE_BOUQUET]                 = "Tea_and_Coffee_Bouquet.webp",
    [ITEM_CUP]                                = "Cup.webp",
    [ITEM_FRYING_PAN]                         = "Frying_Pan.webp",
    [ITEM_TRIVET_MAT]                         = "Trivet_Mat.webp",
    [ITEM_TEAPOT]                             = "Teapot.webp",
    [ITEM_CUTLERY]                            = "Cutlery.webp",
    [ITEM_TEA_CEREMONY_SET]                   = "Tea_Ceremony_Set.webp",
    [ITEM_UKULELE]                            = "Ukulele.webp",
    [ITEM_SAXOPHONE]                          = "Saxophone.webp",
    [ITEM_DRUM]                               = "Drum.webp",
    [ITEM_ACCORDION]                          = "Accordion.webp",
    [ITEM_PAN_FLUTE]                          = "Pan_Flute.webp",
    [ITEM_BLACK_TEA]                          = "Black_Tea.webp",
    [ITEM_JASMINE_WHITE_TEA]                  = "Jasmine_White_Tea.webp",
    [ITEM_ROSE_TEA]                           = "Rose_Tea.webp",
    [ITEM_BUTTER_TEA]                         = "Butter_Tea.webp",
    [ITEM_APPLE_TEA]                          = "Apple_Tea.webp",
    [ITEM_MILK_OOLONG_TEA]                    = "Milk_Oolong_Tea.webp",
    [ITEM_CHOCOLATE_CUSTARD]                  = "Chocolate_Custard.webp",
};
