#include <stdio.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a=%d, b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}
