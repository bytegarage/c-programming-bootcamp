#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * === Prime Numbers Improved === 
 *
 * Prime number: integer number greater than 1, only divisible by 1 and itself
 * 
 * Goals:
 *  - Find all prime numbers below a given upper limit
 *  - Find the first prime number above a given lower limit
 *  - Define constant MAX equal to 1000
 *  - If user give an upper limit lower than 2 or greater than MAX exit the program
 *  - Same check for the lower limit
 *  - Implement prime check, limit out of bounds check, and error print as functions
 * 
 * Tips:
 *  - How to check if x is a prime number:
 *    > scan all numbers from 2 to x
 *    > use the modulo operator to find out if x is prime
 * 
 */

const int MAX = 1000;

void printLimitError()
{
    printf("Error: must be 2 < limit < MAX\n");
}

bool isOutOfBounds(int limit)
{
    return (limit < 2 || limit > MAX);
}

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    printf("\n=== Prime Numbers Improved ===\n\n");

    /* Find all prime numbers below upperLimit */
    int upperLimit;
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (isOutOfBounds(upperLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    printf("Prime numbers up to %d:\n", upperLimit);

    for (int number = 2; number < upperLimit; number++)
    {
        if (isPrime(number))
        {
            printf("%d\n", number);
        }
    }

    /* Find the first prime number above lowerLimit */
    int lowerLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    if (isOutOfBounds(lowerLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    int firstPrimeNumber = -1;
    for (int number = lowerLimit; number < MAX; number++)
    {
        if (isPrime(number))
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
        printf("First prime number above %d is %d\n", lowerLimit, firstPrimeNumber);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
