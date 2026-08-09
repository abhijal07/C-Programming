/*
Program: Smallest of Three Numbers
Author: Abhijal C.A.
Description: Finds the smallest among three numbers using if-else.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("%d is the smallest.\n", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d is the smallest.\n", b);
    }
    else
    {
        printf("%d is the smallest.\n", c);
    }

    return 0;
}