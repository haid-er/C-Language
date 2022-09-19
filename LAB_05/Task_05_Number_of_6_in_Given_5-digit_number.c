// Program display Number of Digit 6 in Given 5-digit Integer
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int number, digit, six;
	number = digit = six = 0;
	// Taking inputs from user
	
	do
	{

		printf("Enter any 5-digit Integer : ");
		scanf("%d", &number);
		if (number > 99999)
		{
			printf("Invalid Input ! ");
		}
	} while (number > 99999);
	// Processing
	while (number != 0)
	{
		digit = number % 10;
		number = number / 10;
		if (digit == 6 || digit == -6)
			six++;
	}
	// Displaying Output
	printf("Number of Digit 6 in the given integer = %d", six);

	return 0;

}