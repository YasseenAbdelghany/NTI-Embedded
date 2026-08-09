#include <stdio.h>

int main()
{// simple calculator
    char operator = 0;
    float num1 = 0;
    float num2 = 0;
    float result = 0;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        printf("Invalid operator.\n");
        return 1;
    }

    printf("%.1f %c %.1f = %.1f\n", num1, operator, num2, result);

    return 0;
}