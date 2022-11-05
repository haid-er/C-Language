// Program to check a matrix is identity matrix or not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 3
int main()
{
	// Declaration of 2D array

	int matrix[SIZE][SIZE];
	int flag = 0;

	// Taking inputs from user

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("Enter number for index ( %d , %d ) : ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}

	// Processing

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i == j)
			{
				if (matrix[i][j] != 1)
					flag = 1;
			}
			else
			{
				if (matrix[i][j] != 0)
					flag = 1;
			}
		}
	}

	// Displaying Output

	if (flag == 1)
		printf("Given Matrix is NOT an Identity Matrix.\n");
	else
		printf("Given Matrix is an Identity Matrix.\n");

	return 0;

}