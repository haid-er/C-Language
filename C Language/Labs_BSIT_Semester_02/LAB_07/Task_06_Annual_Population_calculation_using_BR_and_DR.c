// Program to calculate annual population using annual birth rate and death rate
// formula    N = P + BP  + DP
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float bp, dp ,p,n;	
	int y;
	n = 0;
	do
	{
		printf("Enter the current Population : ");
		scanf("%f", &p);
		if (p < 2)
			printf("Invalid Input ! ");
	} while (p < 2);
	do
	{
		printf("Enter Annual Birth rate : ");
		scanf("%f", &bp);
		if (bp <= 0 || bp > 100)
			printf("Invalid Input ! ");
	} while (bp <= 0 || bp > 100);
	do
	{
		printf("Enter Annual Death rate : ");
		scanf("%f", &dp);
		if (dp <= 0 || dp > 100)
			printf("Invalid Input ! ");
	} while (dp <= 0 || dp > 100);
	do
	{
		printf("Enter Number of years : ");
		scanf("%d", &y);
		if (y <= 0)
			printf("Invalid Input ! ");
	} while (y <= 0);
	for (int i = 1; i <= y; i++)
	{
		n = n + p + (p * (bp / 100)) - (p * (dp / 100));
		p = n;
	}

	printf("The New Population after %d years = %.2f",y, n);
	return 0;
}