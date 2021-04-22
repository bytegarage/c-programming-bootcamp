#include <stdio.h>
#include <stdlib.h>

/**
 * === Sphere === 
 *
 * Calculate surface and volume of a sphere
 * 
 * Goals:
 *  - prompt user to enter the radius
 *  - calculate the surface area
 *  - calculate the enclosed volume
 *  - print the radius and the results in decimal format (2 digit of precision)
 *  - print the radius and the results in scientific notation (3 digits of precision)
 *  - check the results
 */

int main()
{
    const double pi = 3.14159265359;
    double r;

    printf("Enter the radius of a sphere: ");
    scanf("%lf", &r);
    printf("\n");

    double surface = 4 * pi * r * r;
    double volume =  4.0 / 3 * pi * r * r * r;

    printf("DECIMAL\n");
    printf("radius:  %.2f\n", r);
    printf("surface: %.2f\n", surface);
    printf("volume:  %.2f\n", volume);
    printf("\n");

    printf("SCIENTIFIC\n");
    printf("radius:  %.3e\n", r);
    printf("surface: %.3e\n", surface);
    printf("volume:  %.3e\n", volume);
    printf("\n");

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
