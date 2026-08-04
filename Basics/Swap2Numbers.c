/*
Program: Swap Two Numbers
Author: Abhijal C.A.
Description: Swaps two numbers using a temporary variable.
*/

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:\n");
    printf("First Number = %d\n", a);
    printf("Second Number = %d\n", b);

    return 0;
}