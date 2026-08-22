/*
Program: Sum of Odd Numbers
Author: Abhijal C.A.
Description: Calculates the sum of all odd numbers from 1 to N using a while loop.
*/

#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }

        i++;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}