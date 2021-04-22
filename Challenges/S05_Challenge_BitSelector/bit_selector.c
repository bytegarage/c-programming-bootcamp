#include <stdio.h>
#include <stdlib.h>

/**
 * === Bit Selector === 
 * 
 * data: 0xABCD
 * 
 * Goal:
 *  - N, M design variables
 *  - make a selector that selects the bits [N:M] included
 *  - print data and result in hexadecimal format, 4 digits wide, zero padding
 *  - check these selection ranges
 *    - [0:3] expected result 0x000D
 *    - [4:7] expected result 0x000C
 *    - [8:11] expected result 0x000B
 *    - [12:15] expected result 0x000A
 * 
 */

int main()
{
    unsigned data = 0xABCD;

    unsigned N = 8;
    unsigned M = 11;

    // unsigned result = (data >> N);
    // unsigned result = (data >> N) & 0b1111;

    /**
     * 0b1111 = 15 = 2^4 - 1
     * 0b0111 =  7 = 2^3 - 1
     * 0b0011 =  3 = 2^2 - 1
     * 0b0001 =  1 = 2^1 - 1
     *
     * W: width of the bitmask in bits
     * 
     *     bitmask = 2^W - 1
     * 
     * [0:1] --> W = 2 bits
     * [0:2] --> W = 3 bits
     * [N:M] --> W = M - N + 1
     * 
     * 2^W = 1 << W
     * 
     * bitmask ----> 2^W - 1 = (1 << W) - 1
     * 
     */

    unsigned W = M - N + 1;
    unsigned bitmask = (1 << W) - 1;
    unsigned result = (data >> N) & bitmask;

    printf("data ----> 0x%04X\n", data);
    printf("result --> 0x%04X\n", result);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
