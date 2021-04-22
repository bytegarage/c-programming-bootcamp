#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double operand_a, operand_b, result;
    int error = 0;

    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter first operand: ");
    scanf("%lf", &operand_a);
    printf("Enter second operand: ");
    scanf("%lf", &operand_b);
    printf("\n");

    switch (operator)
    {
    case '+':
        result = operand_a + operand_b;
        break;
    case '-':
        result = operand_a - operand_b;
        break;
    case '*':
        result = operand_a * operand_b;
        break;
    case '/':
        result = operand_a / operand_b;
        break;
    default:
        error = 1;
        break;
    }

    if (error)
    {
        printf("Error: unknown operator\n");
    }
    else
    {
        printf("%.1f %c %.1f = %.1f\n", operand_a, operator, operand_b, result);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
