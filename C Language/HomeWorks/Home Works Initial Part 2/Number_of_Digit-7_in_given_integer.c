// Program display Number of Digit 7 in Given Integer
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int number, digit, seven;
	number = digit = seven = 0;
	// Taking inputs from user
	printf("Enter any Integer : ");
	scanf("%d", &number);
	// Processing
	while (number != 0)
	{
		digit = number % 10;
		number = number / 10;
		if (digit == 7 || digit == -7)
			seven++;
	}
	// Displaying Output
	printf("Number of Digit 7 in the given integer = %d", seven);

	return 0;

}