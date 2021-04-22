#include <stdio.h>
#include <stdlib.h>

enum months
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};

int main()
{
    enum months myFavoriteMonth = JUL;
    enum months myWorstMonth = NOV;

    printf("Andrea's favorite month is: %d\n", myFavoriteMonth);
    printf("Andrea's worst month is: %d\n", myWorstMonth);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
