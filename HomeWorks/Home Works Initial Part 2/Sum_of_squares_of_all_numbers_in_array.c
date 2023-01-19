// Program to print sum of squares of all numbers in array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
int inputNumber();
int main()
{
	// Declaration of array

	int numArray[SIZE];
	long int sum = 0;

	// Taking inputs from user

	printf("Enter -99 to stop giving input ! \n");
	for (int i = 0; i <= SIZE; i++)
	{
		numArray[i] = inputNumber();
		if (numArray[i] == -99)
			break;
	}

	// Processing

	for (int i = 0; i < SIZE && numArray[i] != -99; i++)
	{
		sum = sum + (numArray[i] * numArray[i]);
	}

	// Displaying Output

	printf("Sum of square of Numbers inside Array = %ld\n", sum);

	return 0;

}
int inputNumber()
{
	int num;
	printf("Enter any number :");
	scanf("%d", &num);
	return num;
}
