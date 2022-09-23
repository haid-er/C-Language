// Program to print square shape with 1s and 0s using nested loop
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int num;
	num = 0;

	// Taking inputs from user

	do
	{
		printf("Enter any Even Number (>=2) : ");
		scanf("%d", &num);
		if ((num % 2 != 0) || (num < 2))
			printf("Invalid Input ! ");
	} while ((num % 2 != 0) || (num < 2));

	// Processing and Displaying Output

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (i <= j)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}

	return 0;

}