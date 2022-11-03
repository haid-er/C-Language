// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 10
#define COLS 10
void transpose(int a[][COLS], int rows, int cols);
void takeInput(int a[][COLS], int rows, int cols);
void display(int a[][COLS],int rows,int cols);
void swap(int* a, int* b);
int main()
{
	// Declaration of variables
	
	int rows, cols;
	int matrix[ROWS][COLS];
	rows = cols = 0;
	// Taking inputs from user

	do
	{
		printf("Enter number of Rows of Matrix ( 0 < Rows <= 10 ) : ");
		scanf("%d", &rows);
		if (rows <= 0 || rows > 10)
			printf("Invalid Input ! ");
	} while (rows <= 0 || rows > 10);
	do
	{
		printf("Enter number of Columns of Matrix ( 0 < Columns <= 10 ) : ");
		scanf("%d", &cols);
		if (cols <= 0 || cols > 10)
			printf("Invalid Input ! ");
	} while (cols <= 0 || cols > 10);
	takeInput(matrix, rows, cols);

	// Processing
	
	printf("Matrix Before Transpose : \n");
	display(matrix, rows, cols);
	transpose(matrix, rows, cols);

	// Displaying Output

	printf("Matrix After Transpose : \n");
	swap(&rows, &cols);
	display(matrix, rows, cols);

	return 0;

}
void swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
void transpose(int a[][COLS], int rows, int cols)
{	
	if(cols >= rows)
	{
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				if (i > j)
					swap(&a[i][j], &a[j][i]);
			}
		}
	}
	else
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i > j)
					swap(&a[i][j], &a[j][i]);
			}
		}
	}
}
void takeInput(int a[][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("Enter any number for index ( %d , %d ) : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void display(int a[][COLS],int rows,int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
