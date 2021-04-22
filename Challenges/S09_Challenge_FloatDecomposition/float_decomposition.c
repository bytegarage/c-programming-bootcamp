#include <stdio.h>
#include <stdlib.h>

/**
 * === Float Decomposition === 
 *
 * Build a program that decomposes integer and fractional parts of a floating point number.
 * 
 * Goals:
 *  - Write a function called decompose that receives a floating point number 
 *    and returns an integer part (int) and fractional part (float).
 *  - Acquire a floating point from the keyboard.
 *  - Use the decompose function and print to screen integer and fractional part.
 *  - Reconstruct the original floating point number and print it.
 * 
 * Tips:
 *  - You might need pointers ;)
 *  - Think carefully about the const keyword.
 */

void decompose(float number, int *const int_part, float *const frac_part)
{
    *int_part = (int) number;
    *frac_part = number - *int_part;
}

int main()
{
    printf("\n=== Float Decomposition ===\n\n");

    int int_part;
    float frac_part, input;

    printf("Input a floating point number: ");
    scanf("%f", &input);

    decompose(input, &int_part, &frac_part);

    printf("Integer part of %.2f: %d\n", input, int_part);
    printf("Fractional part of %.2f: %.2f\n", input, frac_part);

    float reconstruced = int_part + frac_part;
    printf("Recontructed number: %.2f\n", reconstruced);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
