/*
Program: Positive, Negative or Zero
Author: Abhijal C.A.
Description: Checks whether a number is positive, negative, or zero.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number is Positive.\n");
    }
    else if (num < 0)
    {
        printf("The number is Negative.\n");
    }
    else
    {
        printf("The number is Zero.\n");
    }

    return 0;
}