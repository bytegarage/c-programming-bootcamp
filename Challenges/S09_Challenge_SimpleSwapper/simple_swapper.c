#include <stdio.h>
#include <stdlib.h>

/**
 * === Simple Swapper === 
 *
 * Build a program that exchanges two integer values
 * 
 * Goals:
 *  - Implement the swap operation inside a function
 *  - The swap function must exchange the value of two int variables declared in main
 * 
 * Tips:
 *  - Use pointers!
 *  - Think carefully about the const keyword 
 */

void swap(int *const p1, int *const p2)
{
    int temp;

    temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}

int main()
{
    int apples = 12;
    int pears = 34;

    printf("Before swapping: apples = %d, pears = %d\n", apples, pears);

    int *papples = &apples;
    int *ppears = &pears;

    swap(papples, ppears);

    printf("After swapping: apples = %d, pears = %d\n", apples, pears);

    swap(&apples, &pears);

    printf("After second swapping: apples = %d, pears = %d\n", apples, pears);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
