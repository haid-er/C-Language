// Program to sort array in acending and decending order using function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int checkAscendingFlag = 0;
int checkDecendingFlag = 0;
void sortCheckAcending(int[], int s);
void sortCheckDecending(int[], int s);
void displayArray(int[], int s);
int main()
{

	// This function will randamize numbers each time of execution

	srand(time(0));

	// Declaration of array

	int numArray[SIZE] = { 0 };

	// Storing some random number in array

	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter any Number : ");
		scanf("%d", &numArray[i]);
	}

	// Displaying Array

	printf("Array\n");
	displayArray(numArray, SIZE);

	sortCheckAcending(numArray, SIZE);
	sortCheckDecending(numArray, SIZE);
	// Giving output after checking

	printf("\n");
	if (checkAscendingFlag == 0)
		printf("Array is Sorted in Ascending Order.");
	else if (checkDecendingFlag == 0)
		printf("Array is Sorted in Decending Order.");
	else
		printf("Array is Not Sorted.");

	return 0;

}
void sortCheckAcending(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = i + 1; j < s; j++)
		{
			if (a[i] > a[j])
			{
				checkAscendingFlag = 1;
			}
		}
	}
}
void sortCheckDecending(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = i + 1; j < s; j++)
		{
			if (a[i] < a[j])
			{
				checkDecendingFlag = 1;
			}
		}
	}
}
void displayArray(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("%d  ,  ", a[i]);
	}
}