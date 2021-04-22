#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter A operand (int): ");
    scanf("%d", &a);
    
    printf("Enter B operand (int): ");
    scanf("%d", &b);
    printf("\n");

    c = a + b;
    printf("C = A + B --> %d\n", c);

    c = a - b;
    printf("C = A - B --> %d\n", c);

    c = a * b;
    printf("C = A * B --> %d\n", c);

    c = a / b;
    printf("C = A / B --> %d\n", c);

    c = a % b; // remainder of a / b
    printf("C = A %% B --> %d\n", c);
    
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
