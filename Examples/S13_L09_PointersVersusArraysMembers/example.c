#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_DIMENSIONS 3

typedef struct GuyP
{
    char *name;
    char *job;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];
} GuyP;

typedef struct GuyA
{
    char *name;
    char job[64];
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];
} GuyA;

int main()
{
    printf("\n=== Pointers Versus Arrays Members ===\n\n");

    printf("Sizeof(GuyP): %lld\n", sizeof(GuyP));
    printf("Sizeof(GuyA): %lld\n", sizeof(GuyA));

    GuyP billP = {
        .name = "Bill Gates",
        .job = "I make software...",
        .active = true,
    };

    billP.job = "I founded Microsoft!";

    GuyA billA = {
        .name = "Bill Gates",
        .job = "I make software...",
        .active = true,
    };

    // billA.job = "I founded Microsoft!"; // wrong!
    strncpy(billA.job, "I founded Microsoft!", sizeof(billA.job) - 1);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}