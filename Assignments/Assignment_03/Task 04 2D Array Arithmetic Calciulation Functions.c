// Functions for arithmetic calculations in a 2D array like
/*
	getTotal to calculate sum of all entries
	getAverage to calculate average of all enteries
	getRowTotal to calculate sum of all enteries in a given row
	getColumnTotal to calculate sum of all enteries in a given column
	getHighestInRow to find highest number in given row
	getLowestInRow to find lowest number in a given row
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>;
#include<time.h>
#define ROWS 5
#define COLS 5
int getTotal(int arr[ROWS][COLS]);
float getAverage(int arr[ROWS][COLS]);
int getRowTotal(int arr[ROWS][COLS], int row);
int getColTotal(int arr[ROWS][COLS], int col);
int getHighestInRow(int arr[ROWS][COLS], int row);
int getLowestInRow(int arr[ROWS][COLS], int row);
int main()
{
	srand(time(0));
	// Declaration of array

	int array[ROWS][COLS];
	int temp;
	temp = 0;

	// Initializing array randomly
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % 200;
		}
	}

	// Displaying array

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	
	// Taking inputs from user and displaying output

	printf("Sum of all entries = %d\n", getTotal(array));
	printf("Average of all enteries = %f\n", getAverage(array));
	do
	{
		printf("Enter number of Row to get sum : ");
		scanf("%d", &temp);
		if (temp < 1 || temp > ROWS)
			printf("Invalid Input ! ");
	} while (temp < 1 || temp > ROWS);
	printf("Sum of all enteries in row %d is = %d\n", temp, getRowTotal(array, temp));
	do
	{
		printf("Enter Number of column to get sum : ");
		scanf("%d", &temp);
		if (temp < 1 || temp > COLS)
			printf("Invalid Input ! ");
	} while (temp < 1 || temp > COLS);
	printf("Sum of all enteries in column %d is = %d\n", temp, getColTotal(array , temp));
	do
	{
		printf("Enter row to check highest number : ");
		scanf("%d", &temp);
		if (temp < 1 || temp > ROWS)
			printf("Invalid Input ! ");
	} while (temp < 1 || temp > ROWS);
	printf("Highest number in row %d is = %d\n", temp, getHighestInRow(array,temp));
	printf("Lowest number in row %d is = %d\n", temp, getLowestInRow(array,temp));

	return 0;
}
int getTotal(int arr[ROWS][COLS])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	return sum;
}
float getAverage(int arr[ROWS][COLS])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	return ((float)sum / (ROWS * COLS));

}
int getRowTotal(int arr[ROWS][COLS], int row)
{
	row--;
	int sum = 0;
	for (int j = 0; j < COLS; j++)
	{
		sum = sum + arr[row][j];
	}
	return sum;
}
int getColTotal(int arr[ROWS][COLS], int col)
{
	col--;
	int sum = 0;
	for (int j = 0; j < ROWS; j++)
	{
		sum = sum + arr[j][col];
	}
	return sum;
}
int getHighestInRow(int arr[ROWS][COLS], int row)
{
	row--;
	int temp = 0;
	temp = arr[row][0];
	for (int j = 0; j < COLS; j++)
	{
		if (arr[row][j] > temp)
		{
			temp = arr[row][j];
		}
	}
	return temp;
}
int getLowestInRow(int arr[ROWS][COLS], int row)
{
	row--;
	int temp = 0;
	temp = arr[row][0];
	for (int j = 0; j < COLS; j++)
	{
		if (arr[row][j] < temp)
		{
			temp = arr[row][j];
		}
	}
	return temp;
}