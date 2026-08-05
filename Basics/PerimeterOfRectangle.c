/*
Program: Perimeter of Rectangle
Author: Abhijal C.A.
Description: Calculates the perimeter of a rectangle.
*/

#include <stdio.h>

int main()
{
    float length, width, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}