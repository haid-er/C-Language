//Task 7 Price Discount
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//variable declaration
	int regular,discount,price;
	//Taking input from user
	printf("Enter Regular Price : ");
	scanf("%d", &regular);
	printf("Enter discount in percentage : ");
	scanf("%d", &discount);
	price = regular - (regular * discount / 100);
	//GIVING OUTPUTS
	printf("Sale Price : %d", price);
	return 0;

}