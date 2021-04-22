#include <stdio.h>
#include <stdlib.h>

// double average(double a, double b)
// {
//     return (a + b) / 2;
// }

double average(double a, double b);

int main()
{
    int num = 12;

    if (num < 0)
    {
        printf("num is < 0\n");
    }

    if (num == 5)
    {
        printf("num is equal to 5\n");
    }

    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");

    double a = 1, b = 2, c = 3;
    // double avg = average(average(a, b), c); //Nope!
    double avg = (a + b + c) / 3;

    printf("average(%.1f, %.1f, %.1f) = %.1f\n", a, b, c, avg);

    printf("average(%.1f, %.1f) = %.1f\n", a, b, average(a, b));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}

double average(double a, double b)
{
    return (a + b) / 2;
}
