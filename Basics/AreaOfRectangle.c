/*
Program: Area of Rectangle
Author: Abhijal C.A.
Description: Calculates the area of a rectangle.
*/

#include <stdio.h>

int main()
{
    float length, width, area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area of Rectangle = %.2f\n", area);

    return 0;
}