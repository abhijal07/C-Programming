/*
Program: Pass or Fail
Author: Abhijal C.A.
Description: Checks whether a student has passed or failed based on marks.
*/

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}