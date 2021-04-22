#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_DIMENSIONS 3

typedef struct Guy
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];
    struct Guy *friend;
} Guy;

Guy create_bill()
{
    return (Guy) {
        .name = "Bill Gates",
        .pos = {1, 2, 3},
        .dimensions = 3,
        .active = true,
    };
}

Guy *alloc_elon()
{
    Guy *elon = malloc(sizeof(Guy));

    if (!elon)
    {
        return NULL;
    }

    /* Settings... */
    elon->name = "Elon Musk";
    elon->active = true;
    elon->dimensions = 3;
    double pos[] = {4, 5, 6};
    memcpy(elon->pos, pos, sizeof(pos));
    elon->friend = NULL;

    return elon;
}

void deactivate_guy(Guy g)
{
    g.active = false;
}

void deactivate_guy_ptr(Guy *pg)
{
    pg->active = false;
}

int main()
{
    printf("\n=== Structures And Functions ===\n\n");

    Guy bill = create_bill();
    bill.friend = alloc_elon();

    deactivate_guy(bill);
    deactivate_guy_ptr(&bill);
    

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}