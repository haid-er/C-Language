// Program to store or merge two character arrays in a single array consectively
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE1 50
#define SIZE2 100
void userInput(char arr[]);
void merge(char arr1[], char arr2[], char merged[]);
int main()
{
	// Declaration of Arrays

	char arr1[SIZE1], arr2[SIZE1], merged[SIZE2];

	// Taking inputs from user

	userInput(arr1);
	userInput(arr2);
	// Processing

	merge(arr1, arr2, merged);

	// Displaying Output

	printf("Merged Array = %s", merged);

	return 0;

}
void merge(char arr1[], char arr2[], char merged[])
{
	int counter1 = 0, counter2 = 0,counter3 = 0;
	int tempCounter1 = 0, tempCounter2 = 1;
	int c1 = 0, c2 = 0;
	while (arr1[counter1] != 0)
		counter1++;
	while (arr2[counter2] != 0)
		counter2++;
	while (arr1[c1] != 0)
	{
		merged[tempCounter1] = arr1[c1];
		c1++;
		tempCounter1 = tempCounter1 + 2;
	}
	while (arr2[c2] != 0)
	{
		merged[tempCounter2] = arr2[c2];
		c2++;
		tempCounter2 = tempCounter2 + 2;
	}
	merged[c1 + c2] = '\0';
}
void userInput(char arr[])
{
	int counter = 0;
	printf("\nEnter any Text : ");
	while (arr[counter-1] != 10)
	{
		arr[counter] = getchar();
		counter++;
	}
	arr[counter] = '\0';
}
