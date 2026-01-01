#include <stdio.h>

int main()
{

    printf("student name:- Shivam Kumar\n");
    printf("student ERP number=11365\n");
    int a, b;
    float f;
    char c;
    double d;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter another integer: ");
    scanf("%d", &b);
    printf("Enter a float value: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Enter a double value: ");
    scanf("%lf", &d);
    printf("\nYou entered:\n");
    printf("Integer 1: %d\n", a);
    printf("Integer 2: %d\n", b);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);
    printf("Double: %.5f\n", d);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping:\n");
    printf("Integer 1: %d\n", a);
    printf("Integer 2: %d\n", b);

    return 0;
}