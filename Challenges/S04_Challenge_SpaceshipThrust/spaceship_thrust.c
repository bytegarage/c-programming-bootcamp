#include <stdio.h>
#include <stdlib.h>

/**
 * === Spaceship Thrust === 
 *
 * We are working on the man-machine interface of a revolutionary spaceship.
 * Define enumeration constants for different predefined thrust levels, these
 * levels will be used to communicate with the engine controller.
 * 
 * The thrust levels are:
 *  - none:     0
 *  - low:      5
 *  - medium:   9
 *  - high:     12
 *  - maximum:  20
 * 
 * Then launch the rocket!
 * We now want to log the thrust level in some critical points:
 *  - set thrust to none ---> log ready to go level
 *  - set thrust to maximum ---> log take off level
 *  - set thrust to medium ---> log entry into the ionosphere
 *  - set thrust to low ---> log traveling to deep space
 * 
 */

typedef enum
{
    THRUST_NONE = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20,
} SpaceshipThrust;

int main()
{
    SpaceshipThrust thrust;

    thrust = THRUST_NONE;
    printf("Spaceship is ready to go, now thust is: %d\n", thrust);

    thrust = THRUST_MAXIMUM;
    printf("Spaceship is taking off into the sky, now thrust is: %d\n", thrust);

    thrust = THRUST_MEDIUM;
    printf("Spaceship is entering ionosphere, now thrust is: %d\n", thrust);

    thrust = THRUST_LOW;
    printf("Spaceship is traveling to deep space, now thrust is: %d\n", thrust);
    printf("Bye bye spaceship!\n");

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
