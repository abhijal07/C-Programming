/*
Program: Print Odd Numbers
Author: Abhijal C.A.
Description: Prints all odd numbers from 1 to N.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}