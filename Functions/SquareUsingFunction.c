/*
Program: Square Using Function
Author: Abhijal C.A.
Description: Calculates the square of a number using a function with a return value.
*/

#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);

    printf("Square = %d\n", result);

    return 0;
}