// Program to practice different usage of Pointers
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define SIZE 50
int main()
{

	// Declaration of variables

	int a = 19;
	char ch = 'h';

	// Pointers initialization

	int* ptra = &a;
	char* ptrch = &ch;

	// Printing in different ways

		// both statement do the same work
	printf("Value at ptra = %d\n", *ptra);
	printf("Value of a = %d\n", a);
	//and these both statements also work in same way
	printf("Value at ptrch = %c\n", *ptrch);
	printf("Value of ch = %c\n", ch);

	// Inputs in different ways

	printf("Enter any new input for interger a : ");
	scanf("%d", &a);
	printf("Value of a = %d\n", *ptra);
	printf("Enter any other value for integer a : ");
	scanf("%d", ptra);
	printf("Value of a = %d\n", a);

	printf("\n\n\t\t 1D array Portion\n\n\n");
	// 1D Array Manipulation using pointers

	char arr[SIZE];
	char* ptrarr = arr;
	int counter = 0;
	// Different methods to take and display input

	getchar();
	printf("Enter any text : ");
	for (int i = 0; i < SIZE; i++)
	{
		*(ptrarr + i) = getchar();
		if (*(ptrarr + i) == 10)
		{
			*(ptrarr + i) = '\0';
			break;
		}
	}
	printf("\nPrintf Array : ");
	while (*(ptrarr + counter) != 0)
	{
		printf("%c", *(ptrarr + counter));
		counter++;
	}
	counter = 0;
	while (counter < SIZE)
	{
		*(ptrarr + counter) = "\0";
		counter++;
	}
	counter = 0;
	//Other method
	char arr1[10];
	ptrarr = arr1;
	printf("\nEnter any other text : ");
	while (counter < 10)
	{
		*ptrarr = getchar();
		if (*ptrarr == 10)
		{
			*ptrarr = '\0';
			ptrarr = ptrarr - counter;
			break;
		}
		ptrarr++;
		counter++;
	}
	counter = 0;
	printf("Array = ");
	while (*ptrarr != 0)
	{
		printf("%c", *ptrarr++);
	}
	printf("\n\n\n 2D array Section\n\n\n");
	// 2D array manipulation using pointers

	int arr2D[3][3] = { {1, 2, 3}, {2, 3, 1}, {3, 2, 1} };
	int* ptr = *arr2D;

	// Printing using the pointer notation

	for (int i = 0; i < 9; i++)
	{
		printf("%d\t", *ptr++);
		if (i == 2 || i == 5 || i == 8)
			printf("\n");
	}

	printf("\n\n");
	// Other method
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(arr2D + i) + j));
		}
		printf("\n");
	}
	// accessing last element
	printf("\n Last Element = %d", **arr2D);
	return 0;
}