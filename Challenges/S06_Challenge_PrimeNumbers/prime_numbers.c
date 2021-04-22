#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * === Prime Numbers === 
 *
 * Prime number: integer number greater than 1, only divisible by 1 and itself
 * 
 * Goals:
 *  - Find all prime numbers below a given upper limit
 *  - Find the first prime number above a given lower limit
 *  - Write some dummy cleanup code before the final return (simply print something)
 *  - Define constant MAX equal to 1000
 *  - If user give an upper limit lower than 2 or greater than MAX immediately
 *    execute the cleanup code and exit the program
 *  - Same check for the lower limit
 * 
 * Tips:
 *  - How to check if x is a prime number:
 *    > scan all numbers from 2 to x
 *    > use the modulo operator to find out if x is prime
 * 
 */

int main()
{
    printf("\n=== Prime Numbers ===\n\n");

    const int MAX = 1000;

    /* Find all prime numbers below upperLimit */
    int upperLimit;
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);
    if (upperLimit < 2 || upperLimit > MAX)
    {
        printf("Error: must be 2 < limit < MAX\n");
        /* cleanup and exit */
        goto exit_program;
    }

    printf("Prime numbers up to %d:\n", upperLimit);

    for (int number = 2; number < upperLimit; number++)
    {
        bool isPrime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d\n", number);
        }
    }

    /* Find the first prime number above lowerLimit */
    int lowerLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    if (lowerLimit < 2 || lowerLimit > MAX)
    {
        printf("Error: must be 2 < limit < MAX\n");
        goto exit_program;
    }

    int firstPrimeNumber = -1;

    for (int number = lowerLimit; number < MAX; number++)
    {
        bool isPrime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            firstPrimeNumber = number;
            break;
        }
    }

    if (firstPrimeNumber == -1)
    {
        printf("Cannot find prime numbers above %d\n", lowerLimit);
    }
    else
    {
        printf("The first prime number above %d is %d\n", lowerLimit, firstPrimeNumber);
    }

exit_program:
    printf("\n----------------------\n");
    printf("Some dummy cleanup code...");
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
