/*
Program: GCD Using Function
Author: Abhijal C.A.
Description: Finds the Greatest Common Divisor of two numbers using a function.
*/

#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD = %d\n", gcd(num1, num2));

    return 0;
}