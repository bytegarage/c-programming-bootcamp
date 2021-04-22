#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int variable = 0;
    printf("%llu\n", sizeof(variable));
    printf("%llu\n", sizeof(int));
    printf("%llu\n", sizeof(long int));
    printf("%llu\n", sizeof(long long int));
    printf("%llu\n", sizeof(char));
    printf("%llu\n", sizeof(int16_t));
    printf("%llu\n", sizeof(int32_t));
    printf("%llu\n", sizeof(int64_t));
    printf("%llu\n", sizeof(123 && 456));
    printf("%llu\n", sizeof(123LL && 456LL));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
