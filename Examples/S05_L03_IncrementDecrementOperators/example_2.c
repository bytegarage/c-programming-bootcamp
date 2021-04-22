#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b;

    a = 3.14;
    b = a++;

    printf("After postincrement\n");
    printf("A: %.2f\n", a);
    printf("B: %.2f\n", b);
    printf("\n");

    a = 3.14;
    b = ++a;

    printf("After preincrement\n");
    printf("A: %.2f\n", a);
    printf("B: %.2f\n", b);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
