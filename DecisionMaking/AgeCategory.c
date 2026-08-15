/*
Program: Age Category
Author: Abhijal C.A.
Description: Determines the category of a person based on their age.
*/

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Invalid age.\n");
    }
    else if (age <= 12)
    {
        printf("Category: Child\n");
    }
    else if (age <= 19)
    {
        printf("Category: Teenager\n");
    }
    else if (age <= 59)
    {
        printf("Category: Adult\n");
    }
    else
    {
        printf("Category: Senior Citizen\n");
    }

    return 0;
}