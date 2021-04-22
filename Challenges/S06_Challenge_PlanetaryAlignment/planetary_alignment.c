#include <stdio.h>
#include <stdlib.h>

/**
 * === Planetary Alignment === 
 *
 * Context:
 *  - three planets revolving around a star
 *  - each orbit takes x units of time
 *  - unit of time: one day (86,400 seconds)
 * 
 * Goals:
 *  - calculate how many days elapse between planets linear alignment
 *  - calculate how many revolutions each planet makes around the star in this time
 * 
 * Tips:
 *  - orbits duration: a, b, c (days) --> linear alignment every lcm(a, b, c) days
 *  - each planet completes lcm(a, b, c) / x orbits around the star
 * 
 * Trace:
 *  - get the duration (in days) of orbits a, b, c from the user
 *  - calculate lcm(a, b, c):
 *    > store the maximum between a, b, c
 *    > iterate no more than 10,000 times
 *    > check lcm(a, b, c) using the stored max and the modulo operator
 *    > if exceeded the maximum number of iterations: print a warning
 *    > else: print the result and the number of complete revolution for each planet
 * 
 * 
 * Test:
 *  - calculate Earth-Venus-Mercury linear alignment
 *  - calculate Earth-Mars-Jupiter linear alignment
 *  - check orbits duration here: https://spaceplace.nasa.gov/years-on-other-planets/en/
 * 
 */

int main()
{
    printf("\n\n=== Planetary Alignment ===\n\n");

    int a, b, c;

    printf("Enter the duration of the orbit a in days: ");
    scanf("%d", &a);

    printf("Enter the duration of the orbit b in days: ");
    scanf("%d", &b);

    printf("Enter the duration of the orbit c in days: ");
    scanf("%d", &c);

    printf("\n a -> %5d [days]", a);
    printf("\n b -> %5d [days]", b);
    printf("\n c -> %5d [days]\n\n", c);

    int max;
    max = a > b ? a : b;
    max = c > max ? c : max;

    int lcm = -1;
    const int MAX_ITER = 10000;

    for (int i = 1; i < MAX_ITER; i++)
    {
        int mul = max * i;
        if (mul % a == 0 && mul % b == 0 && mul % c == 0)
        {
            lcm = mul;
            break;
        }
    }

    if (lcm == -1)
    {
        printf("Exceeded the maximum number of iterations\n");
    }
    else
    {
        printf("Orbits a, b, c align every %d days\n", lcm);
        printf("Planet a completes %d orbits\n", lcm / a);
        printf("Planet b completes %d orbits\n", lcm / b);
        printf("Planet c completes %d orbits\n", lcm / c);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
