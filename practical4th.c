#include <stdio.h>

int main()
{
    printf("Student Name: Shivam kumar\n");
    printf("Student ERP Number: 11365\n");
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Greatest number is: %d\n", a);
        }
        else
        {
            printf("Greatest number is: %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Greatest number is: %d\n", b);
        }
        else
        {
            printf("Greatest number is: %d\n", c);
        }
    }
    int num1, num2;
    char operator;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        printf("Sum is %d\n", num1 + num2);
        break;
    case '-':
        printf("Difference is %d\n", num1 - num2);
        break;
    case '*':
        printf("Multiplication is %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("Division is %d\n", num1 / num2);
        else
            printf("Error: Division by zero\n");
        break;
    case '%':
        if (num2 != 0)
            printf("Modulo is %d\n", num1 % num2);
        else
            printf("Error: Modulo by zero\n");
        break;
    default:
        printf("Operator is invalid\n");
    }

    return 0;
}