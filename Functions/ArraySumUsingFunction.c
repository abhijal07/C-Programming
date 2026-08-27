/*
Program: Array Sum Using Function
Author: Abhijal C.A.
Description: Calculates the sum of array elements using a function.
*/

#include <stdio.h>

int arraySum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", arraySum(arr, n));

    return 0;
}