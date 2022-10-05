// Program to store square of all numbers of array using function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void squareArray(int[], int s);
void getInput(int[], int s);
void printArray(int[], int s);
int main()
{
	// Declaration of array

	int numArray[SIZE] = { 0 };

	// Taking inputs from user

	getInput(numArray, SIZE);

	// Processing

	squareArray(numArray, SIZE);

	// Displaying Output

	printArray(numArray, SIZE);

	return 0;

}

void getInput(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("Enter any Number : ");
		scanf("%d", &a[i]);
	}
}
void squareArray(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		a[i] = a[i] * a[i];
	}
}
void printArray(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("%d  ,  ", a[i]);
	}
}