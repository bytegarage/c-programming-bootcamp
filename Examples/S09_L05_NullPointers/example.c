#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n=== NULL pointers ===\n");

    int *ptr = NULL;

    /* Execute only if ptr isn't null */
    if (ptr) //if (ptr != NULL)
    {
        printf(" 1 | Pointed value: %d\n", *ptr);
    }

    int someValue = 123;

    /* Execute only if ptr is null */
    if (!ptr) //if (ptr == NULL)
    {
        ptr = &someValue;
    }

    /* Execute only if ptr isn't null */
    if (ptr) //if (ptr != NULL)
    {
        printf(" 2 | Pointed value: %d\n", *ptr);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
