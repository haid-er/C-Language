// Program to separate odd and even numbers from one array to some other arrays
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
void initializeRandomly(int* arr);
void displayArray(int* arr);
int isEven(int a);
int main()
{
	
	srand(time(0));
	// Declaration of Array

	int arr[SIZE];
	int even[SIZE], odd[SIZE];
	int* arrPtr = arr;
	int* evenPtr = even;
	int* oddPtr = odd;

	// Initializing randomly

	initializeRandomly(arr);
	
	// Processing and Displaying Output

	printf("Array of Random numbers : \n");
	displayArray(arr);
	for (int i = 0; i < SIZE; i++)
	{
		if (isEven(*(arrPtr + i)))
		{
			*evenPtr = *(arrPtr + i);
			evenPtr++;
		}
		else
		{
			*oddPtr = *(arrPtr + i);
			oddPtr++;
		}
	}
	*evenPtr = '\0';
	*oddPtr = '\0';

	// Displaying Output

	printf("\nArray with even Numbers : \n");
	displayArray(even);
	printf("\nArray with odd Numbers : \n");
	displayArray(odd);

	return 0;

}
void initializeRandomly(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		*(arr + i) = rand() % 200;
	}
	*(arr + SIZE - 1) = '\0';
}
void displayArray(int* arr)
{
	int i = 0;
	while (*(arr + i) != 0 && i < SIZE)
	{
		printf("%d\t", *(arr + i));
		i++;
	}
	printf("\n");
}
int isEven(int a)
{
	if (a % 2 == 0)
		return 1;
	else
		return 0;
}



