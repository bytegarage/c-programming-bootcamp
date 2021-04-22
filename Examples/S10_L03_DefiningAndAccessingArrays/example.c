#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Let's keep track of our cash flow!
 * 
 * Goals:
 *  - record the income and expenses of a month
 *  - ask the user to enter a new value (positive or negative)
 *  - insert the value in our accounting book
 *  - when the user enters 0, print the whole list of inputs and outputs
 * 
 * Bonus:
 *  - print the result: how much cash you have at the end of the month
 */

int main()
{
    /* Array: an ordered collection of items of the same type */
    printf("\n=== Defining and Accessing Arrays ===\n\n");

    int io_count = 0;
    const int max_io_count = 5;
    float io_array[max_io_count];

    for (io_count = 0; io_count < max_io_count; io_count++)
    {
        float value;
        printf("Insert an amount of money (0 to end):\n");
        printf("[%d/%d] ", io_count + 1, max_io_count);
        scanf("%f", &value);

        if (value == 0)
        {
            break;
        }

        io_array[io_count] = value;
    }

    printf("------------------\n");

    float sum = 0;
    for (int i = 0; i < io_count; i++)
    {
        sum += io_array[i];
        printf(" %d | %9.2f $\n", i, io_array[i]);
    }

    printf("------------------\n");
    printf("SUM  %9.2f $\n", sum);


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
