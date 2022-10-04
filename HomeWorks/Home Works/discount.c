//Program to calculate the discount if the price is equal to 5000 or greater than 5000 then discount is 15% and if the price is less than 5000 then discount will be 10%
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int price;
    printf("Enter the amount of purchase : ");
    scanf("%d",&price);
    if(price>=5000)
    {
        printf("Given Discount : 15%");
        price = price - ( 0.15 * price ) ;
    }
    else
    {
        printf("Given Discount : 10%");
        price = price - ( 0.10 * price);
    }
    printf("\n The Amount sale after discount is : %d",price);


    return 0;
}