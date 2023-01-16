// Program to make array of 10 students age array and then store it in reverse order

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int age[10];
	int ageReverse[10];

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
	}

	printf("Array : ");
	for (int k = 0; k <= 9; k++)
	{
		printf("%d ,", age[k]);
	}
	// Processing
	int i = 9;
	for (int j = 0; j <= 9; j++)
	{
		ageReverse[j] = age[i];
		i--;
	}

	// Displaying Output
	
	printf("\nArray Reverse : ");
	for (int k = 0; k <= 9; k++)
	{
		printf("%d ,", ageReverse[k]);
	}
	return 0;

}