#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void array_maker(int len)
{
    int vla[len];

    for (int i = 0; i < len; i++)
    {
        vla[i] = i;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", vla[i]);
    }
}

int main()
{
    printf("\n=== Variable Length Arrays ===\n\n");

    int x[LEN] = {1, 2, 3};

    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", x[i]);
    }

    while (1)
    {
        int len;
        printf("\nEnter the len: ");
        scanf("%d", &len);

        if (len < 1)
        {
            break;
        }
        array_maker(len);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
