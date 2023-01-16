// Program which takes a number from the user and print table chart up to the given number

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Functions declaration 

int getNumber();
void display(int n);

// Main Function

int main()
{
	// Variable declaration
	int number;
	// Function call
	number = getNumber();
	// these for loops are only used to print first two line means header of the outut
	for (int i = 1; i <= number; i++)
	{
		printf("%7d", i);
	}
	printf("\n+");
	for (int i = 1; i <= (number * 7); i++)
	{
		printf("%c", '-');
	}
	printf("\n");
	// Function call
	display(number);
	
	return 0;

}


// Functions Definition

// This function will take a valid number from user and return it as integer
int getNumber()
{
	int num = 0;
	do
	{
		printf("Enter any Number : ");
		scanf("%d", &num);
		if (num <= 0)
			printf("Invalid Input ! ");
	} while (num <= 0);
	return num;
}
// this function will take a number as parameter and print the table of all the numbers upto that number on screen
void display(int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%3d |", i);
		for (int j = 1; j <= n; j++)
		{
			if (j == 1)
				printf("%2d", i * j);
			else
				printf("%7d", i * j);
		}
		printf("\n");
	}
}
