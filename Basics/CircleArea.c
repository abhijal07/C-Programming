/*
Program: Area of Circle
Author: Abhijal C.A.
Description: Calculates the area of a circle using the radius.
*/

#include <stdio.h>

int main()
{
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;

    printf("Area = %.2f\n", area);

    return 0;
}