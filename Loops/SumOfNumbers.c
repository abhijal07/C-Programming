/*
Program: Sum of Natural Numbers
Author: Abhijal C.A.
Description: Calculates the sum of numbers from 1 to N.
*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}