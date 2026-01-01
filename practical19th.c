#include <stdio.h>
#include <string.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100];

    printf("Original str1: %s\n", str1);
    printf("Original str2: %s\n", str2);

    printf("\nstrlen(str1) = %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("\nstrcpy(str3, str1): %s\n", str3);

    strcat(str3, " ");
    strcat(str3, str2);
    printf("strcat(str3, ' ', str2): %s\n", str3);

    if (strcmp(str1, str2) == 0)
    {
        printf("str1 == str2\n");
    }
    else
    {
        printf("str1 != str2\n");
    }

    return 0;
}
