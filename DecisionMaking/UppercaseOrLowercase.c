/*
Program: Uppercase or Lowercase
Author: Abhijal C.A.
Description: Checks whether an entered alphabet is uppercase or lowercase.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an Uppercase letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a Lowercase letter.\n", ch);
    }
    else
    {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}