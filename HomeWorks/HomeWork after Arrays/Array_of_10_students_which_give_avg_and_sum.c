// Program to make array of 10 students which give average and sum

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int age[10], sum = 0;
	float avg = 0;

	// Taking inputs from user

	for (int i = 0; i <= 9; i++)
	{
		do
		{
			printf("Enter age of student %d : ", i + 1);
			scanf("%d", &age[i]);
			if (age[i] <= 0)
				printf("Invalid Input ! ");
		} while (age[i] <= 0);
		sum = sum + age[i];
	}

	// Processing

	avg = sum / 10;

	// Displaying Output

	printf("Sum of Ages = %d\n", sum);
	printf("Average of Ages = %.2f", avg);

	return 0;

}