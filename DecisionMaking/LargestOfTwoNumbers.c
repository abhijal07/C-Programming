/*
Program: Largest of Two Numbers
Author: Abhijal C.A.
Description: Finds the larger of two numbers using if-else.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is the largest.\n", a);
    }
    else if (b > a)
    {
        printf("%d is the largest.\n", b);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}