/*
Program: Palindrome Number
Author: Abhijal C.A.
Description: Checks whether a number reads the same forward and backward.
*/

#include <stdio.h>

int main()
{
    int num, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("%d is a Palindrome number.\n", original);
    }
    else
    {
        printf("%d is not a Palindrome number.\n", original);
    }

    return 0;
}