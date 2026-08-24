/*
Program: Prime Number Using Function
Author: Abhijal C.A.
Description: Checks whether a number is prime using a function.
*/

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d is a Prime number.\n", num);
    }
    else
    {
        printf("%d is not a Prime number.\n", num);
    }

    return 0;
}