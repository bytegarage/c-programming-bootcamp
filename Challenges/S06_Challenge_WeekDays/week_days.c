#include <stdio.h>
#include <stdlib.h>

/**
 * === Days Of The Week === 
 *
 * Goals:
 *  - declare an enum that lists all the days of the week
 *  - make sure it has the value 1 on Monday
 *  - print monday and sunday values
 *  - get user input and store as a day enum
 *  - print a string with the name of the day 
 * 
 */

typedef enum
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
} WeekDays;

int main()
{
    printf("Monday-Sunday: %d-%d\n", MONDAY, SUNDAY);

    WeekDays day;
    printf("Enter a week day: ");
    scanf("%u", &day);

    switch (day)
    {
    case MONDAY:
        printf("day %d is MONDAY\n", day);
        break;
    case TUESDAY:
        printf("day %d is TUESDAY\n", day);
        break;
    case WEDNESDAY:
        printf("day %d is WEDNESDAY\n", day);
        break;
    case THURSDAY:
        printf("day %d is THURSDAY\n", day);
        break;
    case FRIDAY:
        printf("day %d is FRIDAY\n", day);
        break;
    case SATURDAY:
        printf("day %d is SATURDAY\n", day);
        break;
    case SUNDAY:
        printf("day %d is SUNDAY\n", day);
        break;
    default:
        printf("day has unknown value\n");
        break;
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
