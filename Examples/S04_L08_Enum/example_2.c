#include <stdio.h>
#include <stdlib.h>

enum menu
{
    TEA = 10,
    COFFEE = 20,
    JUICE = 30,
    BEER = 40,
};

int main()
{
    enum menu mario = COFFEE;
    enum menu andrea = BEER;

    printf("Mario:    %d\n", mario);
    printf("Andrea:  %d\n", andrea);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
