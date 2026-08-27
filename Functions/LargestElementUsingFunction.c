/*
Program: Largest Element Using Function
Author: Abhijal C.A.
Description: Finds the largest element in an array using a function.
*/

#include <stdio.h>

int findLargest(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
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

    printf("Largest element = %d\n", findLargest(arr, n));

    return 0;
}