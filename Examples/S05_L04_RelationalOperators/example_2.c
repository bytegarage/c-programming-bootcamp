#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'a';
    char b = 'z';

    printf("A = %c\n", a);
    printf("B = %c\n", b);
    printf("\n");

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B  --> %d\n", a > b);
    printf("A < B  --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
