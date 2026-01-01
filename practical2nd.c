#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Name:-Shivam Kumar\nERP=11365\n");
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    if (a > b)
    {
        printf("%d is the greater number\n", a);
    }
    else
    {
        printf("%d is the greater number\n", b);
    }
    return 0;
}