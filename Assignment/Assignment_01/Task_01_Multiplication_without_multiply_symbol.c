// Program to which calculate product of two greater than zero number without use of multiplication operator

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int num1, num2, product;
	product = 0;
	// Variable num1 and num2 will be used to take two numbers from user
	// product will be used to store product

	// Taking inputs from user
	// These loop iteate again and again unless user enter valid value
	do
	{
		printf("Enter first Number : ");
		scanf("%d", &num1);
		if (num1 < 0)
			printf("Invalid Input ! ");
	} while (num1 < 0);
	do
	{
		printf("Enter Second Number : ");
		scanf("%d", &num2);
		if (num2 < 0)
			printf("Invalid Input ! ");
	} while (num2 < 0);
	
	// Processing the output

	for (int i = 1; i <= num2; i++)
	{
		product = product + num1;
	}

	// Displaying Output
	
	printf("Product is : %d", product);

	return 0;

}