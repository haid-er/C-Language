// Program to merge two character arrays into a single array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE1 100
#define SIZE2 200
void mergeArrays(char arr1[], char arr2[], char merged[]);
int main()
{
	// Declaration of arrays
	
	char arr1[SIZE1] = "Hello This is Haider Ali .";
	char arr2[SIZE1] = "I'm an IT Student in PUCIT .";
	char merged[SIZE2];

	// Processing
	
	mergeArrays(arr1, arr2, merged);

	// Displaying Output

	printf("\nMerged Arrays = %s", merged);

	return 0;

}
void mergeArrays(char arr1[], char arr2[], char merged[])
{
	int counter1 = 0,counter2 = 0,counter = 0;
	while (arr1[counter1] != 0)
	{
		merged[counter1] = arr1[counter1];
		counter1++;
	}
	while (arr2[counter2] != 0)
	{
		merged[counter1 + counter2] = arr2[counter2];
		counter2++;
	}
	merged[counter1 + counter2] = '\0';
	
}