// Program to calculate future value of the money in the account according to interest rate
// and the given period of time
// Formula  :    F = P * pow( 1 + i , t)
// Here F is the future values of account
// And p is the present  amount in account
// And i is the iterest rate per month
// And t is time in months for which the money remians in account

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

// Function declaration

double futureValue(double presentValue, double interestRate, double time);

// main function

int main()
{
	// Variable Declaration

	double p, i, t, f;
	
	// Here F is the future values of account
	// And p is the present  amount in account
	// And i is the iterest rate per month
	// And t is time in months for which the money remians in account

	// Taking Input from user
	// These loops will iterate again and again until the user enter the valid value
	do
	{
		printf("Enter Present amount in the account : ");
		scanf("%lf", &p);
		if (p <= 0)
			printf("Invalid Input ! ");
	} while (p <= 0);
	do
	{
		printf("Enter Interest rate per Month : ");
		scanf("%lf", &i);
		if (i <= 0 || i > 100)
			printf("Invalid input ! ");
	} while (i <= 0 || i > 100);
	do
	{
		printf("Enter number of months for which will left in account : ");
		scanf("%lf", &t);
		if (t <= 0)
			printf("Invalid Input ! ");
	} while (t <= 0);
	f = futureValue(p, i, t);
	printf("The Future value of the account = %.3lf", f);
	return 0;
}

// Calculation of the future value of the account money

double futureValue(double presentValue, double interestRate, double time)
{
	return presentValue * (pow(1 + (interestRate / 100), time));
}
