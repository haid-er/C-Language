// Program to creat a two dimentional Array and taking data for it from user and then printing that data over screen
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 4
#define COLS 3
void getInput(int arr[][COLS]);
void displayArray(int arr[][COLS]);
int main()
{
	// Declaration of 2D Array

	int num[ROWS][COLS];

	// Taking inputs from user

	getInput(num);


	// Displaying Output
	
	displayArray(num);

	return 0;

}
void getInput(int arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("Enter element (%d , %d) : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}
void displayArray(int arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}