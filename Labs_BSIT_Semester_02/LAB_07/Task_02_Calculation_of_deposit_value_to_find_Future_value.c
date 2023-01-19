// Program to calculate the present money deposit in account to achieve a final money in account according to the given years
// formula 
// P = F/pow((1+r),n)
// Here P is present money to deposit
// And F is future value of account
// r is annal interest rate
// n is number of years money left in acount

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double presentValue(double futureValue, double interest, double numberOfYears);
int main()
{
	// Declaration of variables
	
	double p, f, r, n;
	p = f = r = n = 0;
	// Here P is present money to deposit
	// And F is future value of account
	// r is annal interest rate
	// n is number of years money left in acount

	// Taking inputs from user
	
	do
	{
		printf("Enter amount you desire for future : ");
		scanf("%lf", &f);
		if (f <= 0)
			printf("Invalid Input ! ");
	} while (f <= 0);
	do
	{
		printf("Enter annual interest rate of bank : ");
		scanf("%lf", &r);
		if (r <= 0 || r > 100)
			printf("Invalid Input ! ");
	} while (r<=0 || r>100);
	do
	{
		printf("Enter number of years you want to have future value : ");
		scanf("%lf", &n);
		if (n <= 0)
			printf("Invalid Input ! ");
	} while (n <= 0);
	printf("The amount you have to deposit is = %.3lf$", presentValue(f, r, n));
	return 0;
}
double presentValue(double futureValue, double interestRate, double numberOfYears)
{
	return (futureValue / (pow((1 + interestRate/100), numberOfYears)));
}