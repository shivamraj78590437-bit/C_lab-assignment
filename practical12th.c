#include <stdio.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("N should be positive!\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
