// Program to calculate the average marks of given student in all quizes
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 3
#define COLS 3
float calculateAvg(int a[][COLS], int n);
int main()
{
	// Declaration of variables

	int matrix[ROWS][COLS];
	int studentNumber = 0;
	float quizAvg = 0;
	// Taking inputs from user

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("Enter Marks of student %d in Quiz %d : ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	do
	{
		printf("Enter Student Number ( <= %d ) : ", COLS);
		scanf("%d", &studentNumber);
		if (studentNumber > COLS || studentNumber <= 0)
			printf("Invalid Input ! ");
	} while (studentNumber > COLS || studentNumber <= 0);

	// Processing

	quizAvg = calculateAvg(matrix, studentNumber);

	// Displaying Output

	printf("Average Marks of Student %d : %.3f", studentNumber, quizAvg);

	return 0;

}
float calculateAvg(int a[][COLS], int n)
{
	int sum = 0;
	float avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == (n - 1))
				sum = sum + a[i][j];
		}
	}
	avg = sum / (ROWS);
	return avg;
}