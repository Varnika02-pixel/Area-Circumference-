#include <stdio.h>

int main()
{
    float radius, circumference, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units ", area);

    return 0;
}