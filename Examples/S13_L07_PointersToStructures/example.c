#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_DIMENSIONS 3

typedef struct Guy
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];
    struct Guy *friend;
} Guy;

int main()
{
    printf("\n=== Pointers To Structures ===\n\n");

    Guy bill = {
        .name = "Bill Gates",
        .pos = {3, 2, 1},
        .dimensions = 3,
        .active = true,
    };

    Guy *firstGuy = &bill;

    /* 1) Accessing the struct directly */
    printf("Guy's name: %s\n", bill.name);

    /* 2) Accessing the struct through pointers using the indirection operator */
    printf("Guy's name: %s\n", (*firstGuy).name);

    /* 3) Accessing the struct through pointers using the arrow operator */
    printf("Guy's name: %s\n", firstGuy->name);
    printf("Guy's position: %.1f, %.1f, %.1f\n",
           firstGuy->pos[0],
           firstGuy->pos[1],
           firstGuy->pos[2]);

    /* Walking a single linked list... */
    firstGuy->friend = malloc(sizeof(Guy));
    firstGuy->friend->name = "Elon Musk";
    firstGuy->friend->active = false;

    /* Go through the list... manually?? */
    firstGuy->friend->friend = malloc(sizeof(Guy));
    firstGuy->friend->friend->name = "Andrea";

    /* Allocating an array of guys */
    int num = 10;
    Guy *manyGuys = malloc(num * sizeof(Guy));

    manyGuys[0].name = "Mario";
    manyGuys[0].friend = &bill;

    /* Accessing the 2nd element of manyGuys using pointers */
    (manyGuys + 1)->name = "Tom";
    printf("manyGuys[1].name = %s\n", manyGuys[1].name);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
