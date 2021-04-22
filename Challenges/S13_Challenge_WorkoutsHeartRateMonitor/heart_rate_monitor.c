#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * === Workouts Heart Rate Monitor === 
 * 
 * Build a heart rate monitor for your workouts!
 * 
 * Maximum heart rate (Tanaka formula):
 *    hr_max = 208 - 0.7 * AGE
 * 
 * Zones:
 * 1 | below 50% | rest
 * 2 |  50%-60%  | very light, active recovery
 * 3 |  60%-70%  | light, cardio training, improves your general endurance
 * 4 |  70%-80%  | moderate, aerobic fitness, improve your efficiency
 * 5 |  80%-90%  | hard, raise the anaerobic threshold, improve your speed endurance
 * 6 | above 90% | peak performance, improve your power, only for pros!
 * 
 * Goals:
 *  - Ask for the user's age
 *  - Print the hr max
 *  - Print each training zone in the format 'id, hr min, hr max, description'
 *  - In loop ask for the current BPM
 *  - Print the current zone in the format 'id, description'
 * 
 */

typedef struct
{
    int id;
    double low; /* lower threshold */
    char *str;  /* description     */
} Zone;

/* tanaka: hr_max = 208 - 0.7 * AGE */
double calc_hr_max(int age)
{
    return 208 - 0.7 * age;
}

void print_row(int id, double lower, double upper, char str[])
{
    printf("%d | %3.0f - %3.0f | %s\n", id, lower, upper, str);
}

void print_table(Zone zones[], int len, double hr_max)
{
    printf("\n");
    for (Zone *z = zones; z < zones + len; z++)
    {
        double upper = z < zones + len - 1 ? (z + 1)->low * hr_max : hr_max;
        print_row(z->id, z->low * hr_max, upper, z->str);
    }
    printf("\n");
}

Zone *find_zone(Zone zones[], int zones_len, double hr_now, double hr_max)
{
    for (int i = zones_len - 1; i >= 0; i--)
    {
        if (hr_now > zones[i].low * hr_max)
        {
            return &zones[i];
        }
    }
    return NULL;
}

void print_zone(Zone *zone)
{
    printf("Zone %d: %s\n\n", zone->id, zone->str);
}

int main()
{
    printf("\n=== Workouts Heart Rate Monitor ===\n\n");

    Zone zones[] = {
        {.id = 1, .low = 0, .str = "rest"},
        {.id = 2, .low = 0.5, .str = "very light, active recovery"},
        {.id = 3, .low = 0.6, .str = "light, cardio training, improves your general endurance"},
        {.id = 4, .low = 0.7, .str = "moderate, aerobic fitness, improve your efficiency"},
        {.id = 5, .low = 0.8, .str = "hard, raise the anaerobic threshold, improve your speed endurance"},
        {.id = 6, .low = 0.9, .str = "peak performance, improve your power, only for pros!"},
    };

    int zones_len = sizeof(zones) / sizeof(zones[0]);
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    double hr_max = calc_hr_max(age);

    printf("Your maximum heart rate is %.0f\n", hr_max);
    print_table(zones, zones_len, hr_max);

    while (true)
    {
        double hr_now;
        printf("Enter the current BPM: ");
        scanf("%lf", &hr_now);

        if (hr_now <= 0)
        {
            break;
        }

        Zone *cur_zone = find_zone(zones, zones_len, hr_now, hr_max);

        if (cur_zone)
        {
            print_zone(cur_zone);
        }
        else
        {
            printf("Cannot find the zone!\n");
        }
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
