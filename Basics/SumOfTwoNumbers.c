/*
Program: Sum of Two Numbers
Author: Abhijal C.A.
Description: Calculates the sum of two numbers entered by the user.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);

    return 0;
}