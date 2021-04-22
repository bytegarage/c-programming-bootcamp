#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MIN_ROWS 2
#define MAX_ROWS 10
#define MIN_COLS 2
#define MAX_COLS 10
#define MIN_UPPER_LIMIT 2
#define MAX_UPPER_LIMIT 1000

/**
 * === Random Matrix === 
 *
 * Generate a random matrix and display it in direct and transposed form
 * 
 * Goals:
 *  - Generate random matrix with number of rows and columns given by the user
 *  - Check that 1 < rows <= 10, the same for the columns
 *  - Generate random matrix with 0 <= numbers < upper limit given by the user
 *  - Check that 1 < upper limit <= 1000
 *  - Display the matrix in direct and transposed form
 * 
 * Tips:
 *  - To generate random numbers below an upper bound you may find the modulo operator useful...
 */

void generate_matrix(const int rows, const int cols, int matrix[rows][cols], int upper_limit)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % upper_limit;
        }
    }
}

void display_matrix(const int rows, const int cols, int matrix[rows][cols], bool transposed)
{
    printf("-----\n");
    for (int i = 0; i < (transposed ? cols : rows); i++)
    {
        for (int j = 0; j < (transposed ? rows : cols); j++)
        {
            printf("%4d ", matrix[transposed ? j : i][transposed ? i : j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols, upper_limit;

    printf("Enter the number of rows (min %d, max %d): ", MIN_ROWS, MAX_ROWS);
    scanf("%d", &rows);
    if (rows < MIN_ROWS || rows > MAX_ROWS)
    {
        printf("Out of bounds!\n");
        return EXIT_FAILURE;
    }

    printf("Enter the number of columns (min %d, max %d): ", MIN_COLS, MAX_COLS);
    scanf("%d", &cols);
    if (cols < MIN_COLS || cols > MAX_COLS)
    {
        printf("Out of bounds!\n");
        return EXIT_FAILURE;
    }

    printf("Enter an upper limit (min %d, max %d): ", MIN_UPPER_LIMIT, MAX_UPPER_LIMIT);
    scanf("%d", &upper_limit);
    if (upper_limit < MIN_UPPER_LIMIT || upper_limit > MAX_UPPER_LIMIT)
    {
        printf("Out of bounds!\n");
        return EXIT_FAILURE;
    }

    int matrix[rows][cols];

    srand(time(NULL));
    generate_matrix(rows, cols, matrix, upper_limit);
    display_matrix(rows, cols, matrix, false);
    display_matrix(rows, cols, matrix, true);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
