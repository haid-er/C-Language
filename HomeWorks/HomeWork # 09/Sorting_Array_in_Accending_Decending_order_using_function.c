// Program to sort array in acending and decending order using function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
void sortArrayAcending(int[], int s);
void sortArrayDecending(int[], int s);
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
		// rand() function generates some random number between 0 and 37767
		numArray[i] = rand();
	}

	// Displaying Array
	
	printf("Array\n");
	displayArray(numArray, SIZE);

	// Processing

	sortArrayAcending(numArray, SIZE);

	// Displaying Output Ascending
	
	printf("\nArray in Ascending Order\n");
	displayArray(numArray, SIZE);

	// Processing

	sortArrayDecending(numArray, SIZE);

	// Displaying Output Decending
	
	printf("\nArray in Decending Order\n");
	displayArray(numArray, SIZE);

	return 0;

}
void sortArrayAcending(int a[], int s)
{
	int temp = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = i + 1; j < s; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void sortArrayDecending(int a[], int s)
{
	int temp = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = i + 1; j < s; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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