#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf("\n=== Find the Size of an Array ===\n\n");

    int x[] = {1, 2, 3, 4, 5};
    printf("sizeof(x): %llu\n", sizeof(x));
    printf("sizeof(x[0]): %llu\n", sizeof(x[0]));
    printf("sizeof(int): %llu\n", sizeof(int));
    printf("array length: %llu\n\n", sizeof(x) / sizeof(x[0]));

    int8_t y[] = {1, 2, 3, 4, 5};
    printf("sizeof(y): %llu\n", sizeof(y));
    printf("sizeof(y[0]): %llu\n", sizeof(y[0]));
    printf("sizeof(int8_t): %llu\n", sizeof(int8_t));
    printf("array length: %llu\n", sizeof(y) / sizeof(y[0]));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
