#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool x, y;

    printf("Truth Table\n");
    printf("------------------------------------\n");
    printf("| x | y | x AND y | x OR y | NOT x |\n");
    printf("------------------------------------\n");

    x = 0;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n",x, y, x && y, x || y, !x);

    x = 1;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n",x, y, x && y, x || y, !x);

    x = 0;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n",x, y, x && y, x || y, !x);

    x = 1;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n",x, y, x && y, x || y, !x);

    printf("------------------------------------\n");

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
