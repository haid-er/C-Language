// Program to FLIP row and cols of Matrix
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 3
#define COLS 5
void fullFlip(int a[][COLS]);
int main()
{
	// Declaration of variables

	int matrix[ROWS][COLS];

	// Taking inputs from user

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("Enter any Number for index ( %d , %d ) : ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}

	// Processing

	fullFlip(matrix);

	// Displaying Output

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;

}
void fullFlip(int a[][COLS])
{
	int temp = 0;
	if (ROWS % 2 == 1)
	{
		for (int i = 0 ; i < COLS/2; i++)
		{
			temp = a[ROWS / 2][i];
			a[ROWS / 2][i] = a[ROWS / 2][COLS - i - 1];
			a[ROWS / 2][COLS - i - 1] = temp;

		}
	}
	for (int i = 0; i < ROWS/2; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			temp = a[i][j];
			a[i][j] = a[ROWS - 1 - i][COLS - 1 -j];
			a[ROWS - i - 1][COLS - 1 - j] = temp;
		}
	}
}