#include <stdio.h>
#include <stdlib.h>

#define LEN 5
#define N_ROWS 3
#define N_COLS 4
#define N_LAYERS 5

int main()
{
    printf("\n=== Multidimensional Arrays ===\n\n");

    int array[LEN] = {1, 2, 3};

    // n = N_ROWS * N_COLS
    int matrix[N_ROWS][N_COLS] = 
    {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
    };

    // n = N_LAYERS * N_ROWS * N_COLS
    int tensor[N_LAYERS][N_ROWS][N_COLS] = 
    {
        {
            {111, 112, 113, 114},
            {121, 122, 123, 124}
        },
        {
            {211, 212, 213, 214},
            {221, 222, 223, 224}
        },
        [N_LAYERS - 1][N_ROWS - 1][N_COLS - 1] = -1,
    };

    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n---\n\n");
    for (int i = 0; i < N_ROWS; i++)
    {
        for (int j = 0; j < N_COLS; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n---\n\n");
    for (int l = 0; l < N_LAYERS; l++)
    {
        for (int i = 0; i < N_ROWS; i++)
        {
            for (int j = 0; j < N_COLS; j++)
            {
                printf("%3d ", tensor[l][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
