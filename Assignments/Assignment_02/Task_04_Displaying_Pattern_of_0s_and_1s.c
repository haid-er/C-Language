// Program to Display the pattern of 0s and 1s according to the given number
// The given number should be  greater than or equal to 2 and must be even
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Function Declaration

int getNumber();
int isValid(int num, int range);
void displayPattern(int num);

// Main function

int main()
{
	int num;

	// Function calls
	num = getNumber();
	displayPattern(num);

	return 0;

}

// Function Definitions

// This function will get a number from the user and check its validation and return value as integer
int getNumber()
{
	int num = 0;
	printf("Enter any even Number (>=2) : ");
	scanf("%d", &num);
	num = isValid(num , 2);
	return num;
}
// This function will check if the first parameter is in the range of second parameter
int isValid(int num, int range)
{
	if (num >= range && num % 2 == 0)
		return num;
	else
	{
		printf("Invalid Input ! ");
		num = getNumber();
	}
}
// This function will print the pattern according to the given parameter
void displayPattern(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (i>j)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
}