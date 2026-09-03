/*
Program: Call by Value
Author: Abhijal C.A.
Description: Demonstrates call by value in C.
*/

#include <stdio.h>

void changeValue(int x)
{
    x = 100;

    printf("Value inside function = %d\n", x);
}

int main()
{
    int num = 50;

    printf("Value before function call = %d\n", num);

    changeValue(num);

    printf("Value after function call = %d\n", num);

    return 0;
}