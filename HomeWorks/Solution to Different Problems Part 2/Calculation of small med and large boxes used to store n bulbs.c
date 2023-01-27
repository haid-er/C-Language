//Program to calculate number of boxes used to store n bulbs
// a large box can store 50 to 100 bulbs
// a medium box can store only 10 to 20 bulbs
// a small box can store only 5 or less bulbs

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numBulb = 0;
	int largeBox, mediumBox, smallBox;
	largeBox = mediumBox = smallBox = 0;
	do
	{
		printf("Enter Number of Bulbs : ");
		scanf("%d", &numBulb);
		if (numBulb < 2 || numBulb >999999)
			printf("Invalid Input ! ");
	} while (numBulb < 2 || numBulb >999999);
	while (numBulb > 0)
	{

		if (numBulb > 50)
		{

			if (numBulb > 100)
			{
				numBulb = numBulb - 100;

			}
			else
			{
				numBulb = 0;
			}
			largeBox++;
		}
		else if (numBulb > 10)
		{
			if (numBulb > 20)
			{
				numBulb = numBulb - 20;

			}
			else
			{
				numBulb = 0;
			}
			mediumBox++;
		}
		else
		{
			if (numBulb > 5)
			{
				numBulb = numBulb - 5;

			}
			else
			{
				numBulb = 0;
			}
			smallBox++;
		}
	}
	if (largeBox > 0)
	{
		printf("large box = %d", largeBox);
	}
	if (mediumBox > 0)
	{
		printf("\nmedium box = %d", mediumBox);
	}
	if (smallBox > 0)
	{
		printf("\nsmall box = %d", smallBox);
	}



	return 0;
}