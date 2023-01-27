// Program that calculate the total days out using the given input of the user
// function1 called by main takes a value from the user for total number of employs and return as int
// function2 called by main that has 1 argument and take the values of absent of each employ and return total absents in int data type
// Function3 called by main that has 2 argument one  is total emploies and other is total absent
// function 3 should return the double value of average
// Dont accept number less than 1

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Functions Declaration

int getNumber();
int totalAbsents(int n);
float averageAbsents(int a, int b);

// main function

int main()
{
	// Variable declaration

	int numberOfEmployees, numberOfAbsents;
	float averageDaysOut;
	numberOfAbsents = numberOfEmployees = averageDaysOut = 0;
	
	// Assigning values using function calls
	numberOfEmployees = getNumber();
	numberOfAbsents = totalAbsents(numberOfEmployees);
	averageDaysOut = averageAbsents(numberOfAbsents, numberOfEmployees);
	printf("Average Number of Days Absent : %.2f", averageDaysOut);

	return 0;

}

// Function Defintions

// This function will get a valid number from user
int getNumber()
{
	int num = 0;
	do
	{
		printf("Enter total Number of employees of company : ");
		scanf("%d", &num);
		if (num < 1)
			printf("Invalid Input ! ");
	} while (num < 1);
	return num;
}
// This function will get the absentees of each employ and return thier total
int totalAbsents(int n)
{
	int sum = 0,num = 0;
	for (int i = 1; i <= n; i++)
	{
		do
		{
			printf("Enter number of day employ %d missed in past year : ", i);
			scanf("%d", &num);
			if (num < 0 || num > 365)
				printf("Invalid Input ! ");
		} while (num < 0 || num > 365);
		sum = sum + num;
	}
	return sum;
}
// This function will calculate average and return it
float averageAbsents(int a, int b)
{
	return (float)a / (float)b ;
}