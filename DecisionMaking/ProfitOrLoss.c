/*
Program: Profit or Loss
Author: Abhijal C.A.
Description: Determines whether a transaction results in profit, loss, or no profit/loss.
*/

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice)
    {
        printf("Profit = %.2f\n", sellingPrice - costPrice);
    }
    else if (costPrice > sellingPrice)
    {
        printf("Loss = %.2f\n", costPrice - sellingPrice);
    }
    else
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}