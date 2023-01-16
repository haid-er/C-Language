// Program to calculate average rainfall of given years using nested loop
// outer loop iterate once for each year
// Inner loop iterate 12 times and take inches of rainfall for all 12 months
// Return numbers of months and total inches rainfall and average rainfall per month
// Validation Dont accept number of year less than 1 and negative number for monthly rainfall
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int year, month , totalMonths;
	float avgRainfall, totalRainfall, tempRainfall;
	year = avgRainfall = totalRainfall = tempRainfall = totalMonths = 0;
	month = 12;

	// Taking inputs from user

	do
	{
		printf("Enter number of years : ");
		scanf("%d", &year);
		if (year <= 0)
			printf("Invalid Input ! ");
	} while (year <= 0);

	// Processing

	for (int i = 1; i <= year; i++)
	{
		for (int j = 1; j <= month; j++)
		{
			do
			{
				
				printf("Enter Inches of Rainfall in month %d of year %d : ", j, i);
				scanf("%f", &tempRainfall);
				if (tempRainfall < 0)
					printf("Invalid Input ! ");
				else
					totalRainfall = totalRainfall + tempRainfall;

			} while (tempRainfall < 0);
		}
	}
	totalMonths = month * year;
	avgRainfall = totalRainfall / totalMonths;
	

	// Displaying Output

	printf("Total Rainfall = %.2f\n", totalRainfall);
	printf("Total Number of Months = %d\n", totalMonths);
	printf("Average RainFall per month = %.2f\n",avgRainfall);

	return 0;

}