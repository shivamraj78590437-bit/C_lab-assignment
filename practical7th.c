#include <stdio.h>
#define PI 3.14159

int main()
{
     printf("Name:- Shivam Kumar\nERP=11365\n");

    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    if (radius < 0)
    {
        printf("Radius cannot be negative!\n");
        return 0;
    }

    area = PI * radius * radius;

    printf("Area of circle = %.2f\n", area);

    return 0;
}
