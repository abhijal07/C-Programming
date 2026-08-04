/*
Program: User Input
Author: Abhijal C.A.
Description: Reads and displays an integer entered by the user.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("You entered: %d\n", num);

    return 0;
}