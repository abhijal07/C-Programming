/*
Program: Print Numbers from 1 to N
Author: Abhijal C.A.
Description: Prints numbers from 1 to N using a for loop.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}