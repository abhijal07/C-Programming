/*
Program: Sum of Digits
Author: Abhijal C.A.
Description: Calculates the sum of all digits of a number.
*/

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}