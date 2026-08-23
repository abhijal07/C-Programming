/*
Program: Print Numbers Using Do-While
Author: Abhijal C.A.
Description: Prints numbers from 1 to N using a do-while loop.
*/

#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);

    printf("\n");

    return 0;
}