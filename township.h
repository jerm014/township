#ifndef TOWNSHIP_H
#define TOWNSHIP_H

#define MAX_INGREDIENTS 5
#define MAX_ITEM_NAME 48
#define MAX_FACTORY_NAME 48
#define MAX_IMAGE_NAME 64

typedef enum {
    FACTORY_FIELD,
    FACTORY_BUILDING,
    FACTORY_ANIMAL,
    FACTORY_SHIP,
    FACTORY_MINE,
    FACTORY_UNKNOWN
} FactoryType;

typedef struct {
    int item_id;
    int quantity;
} Ingredient;

typedef struct {
    int id;
    char name[MAX_FACTORY_NAME];
    FactoryType type;
} Factory;

typedef struct {
    int id;
    char name[MAX_ITEM_NAME];
    int factory_id;            /* which factory produces this item */
    int production_seconds;    /* time to produce one batch */
    int production_quantity;   /* units produced per batch (usually 1) */
    int ingredient_count;
    Ingredient ingredients[MAX_INGREDIENTS];
} Item;

#endif /* TOWNSHIP_H */
