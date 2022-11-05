// Program to FLIP row of Matrix
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 7
#define COLS 2
void flipRows(int a[][COLS]);
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

	flipRows(matrix);

	// Displaying Output

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

	return 0;

}
void flipRows(int a[][COLS])
{
	int temp = 0;
	//int temp1[COLS], temp2[COLS];
	for (int i = 0; i < ROWS/2; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			temp = a[i][j];
			a[i][j] = a[ROWS - 1 - i][j];
			a[ROWS - i - 1][j] = temp;
		}
	}
}