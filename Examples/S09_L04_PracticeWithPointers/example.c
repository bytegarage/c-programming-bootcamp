#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf("\n=== pointers ===\n");

    char a = 'A';
    char *ptr = &a;
    printf(" 1 | %c, %c, %llu\n", a, *ptr, (uint64_t)ptr);

    char b = 'B';
    ptr = &b;
    printf(" 2 | %c, %c, %llu\n", b, *ptr, (uint64_t)ptr);

    *ptr = 'C';
    printf(" 3 | %c, %c, %llu\n", b, *ptr, (uint64_t)ptr);

    (*ptr)++;
    printf(" 4 | %c, %c, %llu\n", b, *ptr, (uint64_t)ptr);

    unsigned x = 'A';
    ptr = (char *)&x;
    printf(" 5 | %u, %c, %llu\n", x, *ptr, (uint64_t)&x);

    unsigned y = 'B';
    ptr = (char *)&y;
    printf(" 6 | %u, %c, %llu\n", y, *ptr, (uint64_t)&y);

    *ptr = 'C';
    printf(" 7 | %u, %c, %llu\n", y, *ptr, (uint64_t)&y);

    (*ptr)++;
    printf(" 8 | %u, %c, %llu\n", y, *ptr, (uint64_t)&y);

    x = 0xABCD1234;
    ptr = (char *)&x;
    printf(" 9 | %X, %X, %c\n", x, *ptr, *ptr);

    *ptr = 'C';
    printf("10 | %u, %X, %X, %c\n", x, x, *ptr, *ptr);

    unsigned *uint_ptr = (unsigned *)ptr;
    *uint_ptr = 'C';
    printf("11 | %u, %X, %X, %c\n", x, x, *ptr, *ptr);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
