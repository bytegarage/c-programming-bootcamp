#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    TEA,    //0
    COFFEE, //1
    JUICE,  //2
    BEER,   //3
} Menu;

int main()
{
    Menu mario = COFFEE;
    Menu andrea = BEER;

    printf("Mario:    %d\n", mario);
    printf("Andrea:   %d\n", andrea);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
