#include <stdio.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    int arr[100], n, key, i, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            printf("Element %d found at index %d\n", key, i);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
