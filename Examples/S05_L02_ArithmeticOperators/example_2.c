#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Enter A operand (float): ");
    scanf("%f", &a);
    
    printf("Enter B operand (float): ");
    scanf("%f", &b);
    printf("\n");

    c = a + b;
    printf("C = A + B --> %9.3f\n", c);

    c = a - b;
    printf("C = A - B --> %9.3f\n", c);

    c = a * b;
    printf("C = A * B --> %9.3f\n", c);

    c = a / b;
    printf("C = A / B --> %9.3f\n", c);
    
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
