#include <stdio.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    int integer = 42;
    float flot = 3.14f;
    double dbl = 2.71828;
    char ch = 'A';
    char str[] = "Hello";

    printf("Integer: %d\n", integer);
    printf("Float: %f\n", flot);
    printf("Double: %lf\n", dbl);
    printf("Char: %c\n", ch);
    printf("String: %s\n", str);

    printf("\nOctal: %o\n", integer);
    printf("Hex: %x\n", integer);
    printf("Float precision 2: %.2f\n", flot);

    return 0;
}
