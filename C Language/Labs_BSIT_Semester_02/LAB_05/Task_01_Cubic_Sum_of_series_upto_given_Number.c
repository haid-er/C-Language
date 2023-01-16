// Program calculate cubic sum of series upto given number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int num,sum;
	num = sum = 0;

	// Taking inputs from user
	do
	{
		printf("Enter any positive Number : ");
		scanf("%d", &num);
		if (num < 0)
			printf("Invalid Input ! ");
	} while (num < 0);

	// Processing

	for (int i = 1; i <= num; i++)
	{
		sum = sum + (i*i*i);
	}

	// Displaying Output

	printf("Sum of Series = %d" , sum);

	return 0;

}