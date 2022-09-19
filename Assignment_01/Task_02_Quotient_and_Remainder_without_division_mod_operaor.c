// Program to find Quotient and Remainder without using division and modulus operator

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int dividend, divisor, quotient , remainder ;
	dividend = divisor = quotient = remainder = 0;
	
	
	// Taking inputs from user
	// These loop iteate again and again unless user enter valid value

	do
	{
		printf("Enter Dividend : ");
		scanf("%d", &dividend);
		if (dividend < 0 )
			printf("Invalid Input ! ");
	} while (dividend < 0);
	do
	{
		printf("Enter Divisor : ");
		scanf("%d", &divisor);
		if (divisor < 0)
			printf("Invalid Input ! ");
	} while (divisor < 0);
	// Processing the output

	while (dividend >= divisor)
	{
		quotient++;
		dividend = dividend - divisor;
	}
	remainder = dividend;
	
	// Displaying Output
	
	printf("Quotient = %d \nRemainder = %d\n", quotient, remainder);

	return 0;

}