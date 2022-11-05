/*
Task5: Define a int array called t[] of size 20 and initialize it randomly.Send the address of the
first element of the array to a function called ReadThemAll().Also pass 2 integers to
ReadThemAll().The function will assign the array address to a pointer called p and read int
numbers in all the slots between these two numbers.The ReadThemAll() function should not
use brackets, [] but only the asterisk operator,* .When the function is done, have main() print
out the entire array.
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
int main()
{
	srand(time(0));

	// Declaration of array

	int tArray[SIZE];
	int num1, num2;
	num1 = num2 = 0;

	// Taking inputs from user

	randInput(tArray);
	printf("Enter starting number : ");
	scanf("%d", &num1);
	printf("Enter Ending Number : ");
	scanf("%d", &num2);

	// Processing

	printf("Numbers between the Given range : \n");
	readThemAll(tArray, num1, num2);


	// Displaying Output

	printf("Whole Array : \n");
	display(tArray);

	return 0;

}
void randInput(int* p)
{
	for (int i = 0; i < SIZE; i++)
	{
		*(p + i) = rand() % 100;
	}
	*(p + SIZE) = '\0';
}
void display(const int* p)
{
	int i = 0;
	while(*(p+i) != 0)
	{
		printf("%d\t", *(p + i));
		i++;
	}
}
void readThemAll(int* p, int a, int b)
{
	for (int i = 0; *(p + i - 1) != 0; i++)
	{
		if (*(p + i) >= a && *(p + i) <= b)
			printf("%d\t", *(p + i));
	}
	printf("\n");
}