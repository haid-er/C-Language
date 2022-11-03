// Program to find coresponding number of series 1 in the series two
// Program should input first number and common difference of series 1 and first number of series 2
// series 2 always have common difference of 1
// Then we have to take the number in series 1 and return the corresponding number in series 2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int seriesOneStart, seriesTwoStart, commonDifference, corespondingNumber, findNumber, count1, count2,flag;
	seriesOneStart = seriesTwoStart = commonDifference = corespondingNumber = findNumber = flag = 0;
	count1 = count2 = 1;
	// seriesOneStart and seriesTwoStart will be used to take starting numbers of both series
	// commonDifference will be used to take the common difference of series 1 from user
	// corespondingNumber will be used to store the corresponging number from series 1 in series 2
	// findNumber will be a number which store the number from series 1 given by the user
	// count1 and count2 are iteration variables

	// Taking inputs from user
	// these loops will iterate until user enters valid value 

	do
	{
		printf("Enter First Number of Series 1 : ");
		scanf("%d", &seriesOneStart);
		if (seriesOneStart < 0)
			printf("Invalid Input ! ");
	} while (seriesOneStart < 0);
	do
	{
		printf("Enter common difference of series 1 : ");
		scanf("%d", &commonDifference);
		if (commonDifference <= 0)
			printf("Invalid Input ! ");
	} while (commonDifference <= 0);
	do
	{
		printf("Enter First Number of Series 2 : ");
		scanf("%d", &seriesTwoStart);
		if (seriesTwoStart < 0)
			printf("Invalid Input ! ");
	} while (seriesTwoStart < 0);
	do
	{
		printf("Enter number from series 1 : ");
		scanf("%d", &findNumber);
		if (findNumber < 0)
			printf("Invalid Input ! ");
	} while (findNumber < 0);

	// Processing the input to output

	for (int i = seriesOneStart; i <= findNumber; i = i + commonDifference)         // this loop will iterate according to series 1
	{	
		count2 = 1;
		for (int j = seriesTwoStart; count2<=count1; j++)            // this loop will iterate according to series 2
		{
			// printf("%d\t%d\t%d\t%d\n", i, j, count1, count2); // this statement is just to check the values
			if (count1 == count2 && i == findNumber)
			{
				flag = 1;
				corespondingNumber = j;
			}
			count2++;
		}
		count1++;
	}

	// Displaying Output
	if (flag == 1)
		printf("Your Corresponding number is %d .", corespondingNumber);
	else
		printf("Number not found in Series.");
	return 0;

}