#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * === Even Odd === 
 *
 * Goals:
 *  - prompt user to enter a positive integer number
 *  - if number is negative print a warning and exit
 *  - check if number is even or odd and store the result
 *    in a boolean variable using the ternary operator
 *  - print whether the number is even or odd
 * 
 */

int main()
{
    int userInput;
    printf("Enter a positive integer number: ");
    scanf("%d", &userInput);

    if (userInput < 0)
    {
        printf("Warning: %d is negative.\n", userInput);
        return EXIT_SUCCESS;
    }

    bool isEven = (userInput % 2 == 0) ? true : false;

    if (isEven)
    {
        printf("The number %d is even.\n", userInput);
    }
    else
    {
        printf("The number %d is odd.\n", userInput);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
