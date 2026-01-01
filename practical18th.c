#include <stdio.h>

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    int rows, cols, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter %d x %d matrix elements:\n", rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
