//Task 1: Write a program that create a two - dimensional integer array named X of 3 by 3, and
//initialize it by user input, and write the following functions.
//1. Write a function to print array as printArray(X);
//2. Write a function that calculates the average of all the elements in the integer array named x.
//3. Write a function that computes the square root of the sum of the squares of all the
//positive elements in array named X.
//4. Write a function that take array X and an integer num and return true if num exist in X,
//false otherwise.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 3
void takeInput(int arr[SIZE][SIZE], int s);
void printArray(int arr[SIZE][SIZE], int s);
void calculateAverage(int arr[SIZE][SIZE], int s);
void calculateSqrtOfSumOfSquares(int arr[SIZE][SIZE], int s);
int toFind(int arr[SIZE][SIZE], int num);
int main()
{
	// Declaration of array

	int arr[SIZE][SIZE];

	// Taking inputs from user
	
	takeInput(arr,SIZE);

	// Printing array

	printArray(arr, SIZE);

	// Calculating and Displaying the average of all the numbers in array

	calculateAverage(arr, SIZE);

	// Calculating square root of sum of squares

	calculateSqrtOfSumOfSquares(arr, SIZE);

	// Checking if the number exist in the array or not

	int num = 0;
	printf("Enter any number to find in array : ");
	scanf("%d", &num);
	if (toFind(arr, num))
		printf("Number exist in the array.");
	else
		printf("Number does not exist in array");


	return 0;

}
void takeInput(int arr[SIZE][SIZE], int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			printf("Enter number for index (%d , %d) : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}
void printArray(int arr[SIZE][SIZE], int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
void calculateAverage(int arr[SIZE][SIZE], int s)
{
	int sum = 0;
	float avg = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	avg = sum / (s * s);
	printf("Average of all elements of Array = %.3f\n", avg);
}
void calculateSqrtOfSumOfSquares(int arr[SIZE][SIZE], int s)
{
	long int sum = 0;
	int squareRoot = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			sum = sum + (arr[i][j] * arr[i][j]);
		}
	}
	squareRoot = sqrt(sum);
	printf("Square root of sum of squares = %d\n", squareRoot);
}
int toFind(int arr[SIZE][SIZE], int num)
{
	int flag = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (num == arr[i][j])
				flag = 1;
		}
	}
	return flag;
}