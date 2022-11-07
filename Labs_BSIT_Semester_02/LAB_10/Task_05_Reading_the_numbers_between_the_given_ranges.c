/*
Task5: Define a int array called t[] of size 20 and initialize it randomly.Send the address of the
first element of the array to a function called ReadThemAll().Also pass 2 integers to
ReadThemAll().The function will assign the array address to a pointer called p and read int
numbers in all the slots between these two numbers.The ReadThemAll() function should not
use brackets, [] but only the asterisk operator,* .When the function is done, have main() print
out the entire array.
if the given array is a = { 1, 2, 3, 4, 5, 6, 7} and given numbers are 2 and 5 then output should be 3, 4, 5.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
void randInput(int* p);
void readThemAll(int* p,int a,int b);
void display(const int* p);
int numberExistence(int* arr, int num, int* index);
int main()
{
	// Declaration of array

	int tArray[SIZE];
	int num1, num2;
	int numberExistenceFlag = 0;
	int indexStart, indexEnd;
	num1 = num2 = indexStart = indexEnd = 0;

	// Initializing array with random number and printing it

	randInput(tArray);
	printf("Initialized Array : \n\n");
	display(tArray);
	printf("\n\n");

	// Taking inputs from user
	
	do
	{
		do
		{
			printf("Enter starting number : ");
			scanf("%d", &num1);
			numberExistenceFlag = numberExistence(tArray, num1, &indexStart);
			if (numberExistenceFlag == 0)
				printf("Number does not exist in Array ! ");
		} while (numberExistenceFlag == 0);
		numberExistenceFlag = 0;
		do
		{
			printf("Enter Ending number : ");
			scanf("%d", &num2);
			numberExistenceFlag = numberExistence(tArray, num2, &indexEnd);
			if (numberExistenceFlag == 0)
				printf("Number does not exist in Array ! ");
		} while (numberExistenceFlag == 0);
		if (indexStart > indexEnd)
			printf("Starting and Ending number are not given correctly and may be start number is after the ending number ! Please enter any other input .\n");
	} while (indexStart > indexEnd);

	

	// Processing

	printf("Numbers between the Given range : \n");
	readThemAll(tArray, indexStart + 1, indexEnd); // added one in index start to not show the starting number


	// Displaying Output

	return 0;

}
void randInput(int* p)
{
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		*(p + i) = rand();
	}
	*(p + SIZE - 1) = '\0';
}
void display(const int* p)
{
	int i = 0;
	while (*(p + i) != 0)
	{
		printf("%d\t", *(p + i));
		i++;
	}
}
void readThemAll(int* p, int a, int b)
{
	for (int i = a; i < b; i++)
	{
		printf("%d\t", *(p + i));
	}
	printf("\n");
}
int numberExistence(int* arr, int num, int* index)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (*(arr + i) == num)
		{
			*index = i;
			return 1;
		}

	}
	return 0;
}
