// Program to add two arrays and store their sum inside any third array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void addArrays(const int* a1, const int* a2, int* sum, int size);
void takeInput(int *p);
int main()
{
	// Declaration of variables

	int arr1[SIZE];
	int arr2[SIZE];
	int sum[SIZE];

	// Taking Input from User
	
	printf("Enter Elements of Array 1 \n");
	takeInput(arr1);
	printf("Enter Elements of Array 2\n");
	takeInput(arr2);

	// Processing

	addArrays(arr1, arr2, sum, SIZE);

	// Displaying Output
	
	printf("Array which have sum of both arrays : \n");
	for (int i = 0; i < SIZE; i++)
	{
		if (sum[i] == 0)
			break;
		printf("%d\t", sum[i]);
	}

	return 0;

}
void addArrays(const int* a1, const int* a2, int* sum, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(a1 + i) == 0)
		{
			*(sum + i) = *(a2 + i);
		}
		else if (*(a2 + i) == 0)
		{
			*(sum + i) = *(a1 + i);
		}
		else
		{
			*(sum + i) = *(a1 + i) + *(a2 + i);
		}
	}
}
void takeInput(int* p)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter Number %d : ", i + 1);
		scanf("%d", p++);
	}
}