/*
Program: Average of Three Numbers
Author: Abhijal C.A.
Description: Calculates the average of three numbers entered by the user.
*/

#include <stdio.h>

int main()
{
    float num1, num2, num3, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("Average = %.2f\n", average);

    return 0;
}