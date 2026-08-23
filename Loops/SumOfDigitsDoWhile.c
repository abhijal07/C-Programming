/*
Program: Sum of Digits Using Do-While
Author: Abhijal C.A.
Description: Calculates the sum of digits of a number using a do-while loop.
*/

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;

    } while (num != 0);

    printf("Sum of digits = %d\n", sum);

    return 0;
}