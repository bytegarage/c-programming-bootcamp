#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, accumulator = 0;
    const int ITERATIONS = 5;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter an integer > 0: ");
        scanf("%d", &input);

        if (input < 0)
        {
            continue;
        }

        accumulator += input;
    }

    printf("\nAccumulator: %d\n", accumulator);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
