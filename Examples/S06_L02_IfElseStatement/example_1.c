#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = -1;

    if (a) //same as (a != 0)
    {
        printf("a != 0\n");
    }
    else
    {
        printf("a == 0\n");
    }

    if (!a) //same as (a == 0)
    {
        printf("a == 0\n");
    }
    else
    {
        printf("a != 0\n");
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return 0;
}
