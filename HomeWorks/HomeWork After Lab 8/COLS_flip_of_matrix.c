// Program to FLIP colmns of Matrix
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 3
#define COLS 3
void flipCols(int a[][COLS]);
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

	flipCols(matrix);

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
void flipCols(int a[][COLS])
{
	int temp = 0;
	//int temp1[COLS], temp2[COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS/2; j++)
		{
			temp = a[i][j];
			a[i][j] = a[i][COLS - j - 1];
			a[i][COLS - j - 1] = temp;
		}
	}
}