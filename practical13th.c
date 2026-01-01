#include <stdio.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    int i;

    printf("Using break:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("(exits at 5)\n\n");

    printf("Using continue:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("(skips 5)\n");

    return 0;
}
