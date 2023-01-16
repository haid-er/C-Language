// Program to insert a matrix into the other matrix
// such that Given a matrix A of order MxN of maximum size 10x10 and strictly no more. And
//another matrix B of order PxQ.And two integers Iand J.Where P + I should be
//strictly less than M and Q + J should be strictly less than N.If the conditions are
//not satisfied display an error message and return.
//You are required to insert matrix B into matrix A starting at index I and J.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 10
#define COLS 10
void takeInput(int a[][COLS], int rows, int cols);
void display(int a[][COLS], int rows, int cols);
void insert(int mainMatrix[][COLS], int subMatrix[][COLS], int rowsMain, int colsMain, int rowsSub, int colsSub, int indexX, int indexY);
int main()
{
	// Declaration of variables

	int rowsMain, colsMain, rowsSub, colsSub, indexX, indexY;
	int matrix[ROWS][COLS];
	int subMatrix[ROWS][COLS];
	rowsMain = colsMain = rowsSub = colsSub = indexX = indexY = 0;
	// Taking inputs from user for main matrix

	do
	{
		printf("Enter number of Rows of Matrix ( 0 < Rows <= 10 ) : ");
		scanf("%d", &rowsMain);
		if (rowsMain <= 0 || rowsMain > 10)
			printf("Invalid Input ! ");
	} while (rowsMain <= 0 || rowsMain > 10);
	do
	{
		printf("Enter number of Columns of Matrix ( 0 < Columns <= 10 ) : ");
		scanf("%d", &colsMain);
		if (colsMain <= 0 || colsMain > 10)
			printf("Invalid Input ! ");
	} while (colsMain <= 0 || colsMain > 10);
	takeInput(matrix, rowsMain, colsMain);
	
	// Taking inputs form user for Sub-Matrix
	do
	{
		printf("Enter number of Rows of Sub-Matrix ( 0 < Rows <= %d ) : ", rowsMain);
		scanf("%d", &rowsSub);
		if (rowsSub <= 0 || rowsSub > rowsMain)
			printf("Invalid Input ! ");
	} while (rowsSub <= 0 || rowsSub > rowsMain);
	do
	{
		printf("Enter number of Columns of Sub-Matrix ( 0 < Columns <= %d ) : ", colsMain);
		scanf("%d", &colsSub);
		if (colsSub <= 0 || colsSub > colsMain)
			printf("Invalid Input ! ");
	} while (colsSub <= 0 || colsSub > colsMain);
	takeInput(subMatrix, rowsSub, colsSub);
	printf("Main Matrix Before Insertion : \n");
	display(matrix, rowsMain, colsMain);
	printf("\nSub-Matrix to Insert : \n");
	display(subMatrix, rowsSub, colsSub);
	printf("\n\n");
	do
	{
		printf("Enter index of row from which the sub-Matrix will be inserted (0 <=  index <= %d) : ", rowsMain - rowsSub);
		scanf("%d", &indexX);
		if (indexX<0 || indexX + rowsSub > rowsMain)
			printf("Invalid Input ! ");
	} while (indexX<0 || indexX + rowsSub > rowsMain);
	do
	{
		printf("Enter index of column from which the sub-Matrix will be inserted (0 <= index <= %d): ", colsMain - colsSub);
		scanf("%d", &indexY);
		if (indexY<0 || indexY + colsSub > colsMain)
			printf("Invalid Input ! ");
	} while (indexY<0 || indexY + colsSub > colsMain);

	// Processing

	insert(matrix, subMatrix, rowsMain, colsMain, rowsSub, colsSub, indexX, indexY);

	// Displaying Output

	display(matrix, rowsMain, colsMain);
	

	return 0;

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
void display(int a[][COLS], int rows, int cols)
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
void insert(int mainMatrix[][COLS], int subMatrix[][COLS], int rowsMain, int colsMain, int rowsSub, int colsSub, int indexX, int indexY)
{
	printf("rowsMain = %d\ncolsMain = %d\nrowsSub = %d\ncolsSub = %d\nindexX = %d\nindexY = %d\n",rowsMain,colsMain,rowsSub,colsSub,indexX,indexY );
	int countX = 0, countY = 0;
	for (int i = 0; i < rowsMain; i++)
	{
		if (indexX <= i && countX < rowsSub)
		{
			for (int j = 0; j < colsMain; j++)
			{
				if (indexY <= j && countY < colsSub)
				{
					mainMatrix[i][j] = subMatrix[countX][countY];
					countY++;
				}
			}
			countY = 0;
			countX++;
		}
	}
}