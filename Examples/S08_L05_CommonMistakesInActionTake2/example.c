#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int a = 1000000; //1e6
    int b = 5000000; //5e6

    // double c = a * b; //expected: 5e12
    double c = (double)a * b;
    printf("%.0e\n", c);

    int si = -1;
    unsigned ui = 1;

    if (si < ui) //si is converted to UINT_MAX
    {
        printf("as expected\n");
    }
    else
    {
        printf("something wrong\n");
    }

    if (si < (int)ui)
    {
        printf("here we are\n");
    }

    uint8_t port = 0xC5;           // 1100 0101
    uint8_t result = (~port) >> 4; // expected: 0000 0011 = 0x03
    printf("result: 0x%02X\n", result);
    /**
     * The problem is: 
     * 1. integer promotion:    0x 00 00 00 C5
     * 2. complement:           0x FF FF FF 3A
     * 3. shift right by 4:     0x 0F FF FF F3
     * 4. cast to uint8_t:      0x          F3
     * 
     * The solution: 
     * 1. integer promotion:    0x 00 00 00 C5
     * 2. complement:           0x FF FF FF 3A
     * 3. cast to uint8_t:      0x          3A
     * 4. integer promotion:    0x 00 00 00 3A
     * 5. shift right by 4:     0x 00 00 00 03
     * 6. cast to uint8_t:      0x          03
     * 
     */
    result = (uint8_t)(~port) >> 4;
    printf("result: 0x%02X\n", result);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
