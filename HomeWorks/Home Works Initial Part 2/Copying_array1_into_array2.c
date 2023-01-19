// Program to copy array 1 into array 2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of arrays

	int array1[50];
	int array2[50];

	// storing even numbers inside array1

	int counter = 2;
	for (int i = 0; i < 50; i++)
	{
		array1[i] = counter;
		counter += 2;
	}
	
	// Copying array1 inside array2
	
	for (int i = 0; i < 50; i++)
	{
		array2[i] = array1[i];
	}

	// Displaying Output

	printf("Array 1 = ");
	for (int i = 0; i < 50; i++)
	{
		printf("%d ,", array1[i]);

	}
	printf("\nArray 2 = ");
	for (int i = 0; i < 50; i++)
	{
		printf("%d ,", array2[i]);

	}

	return 0;

}