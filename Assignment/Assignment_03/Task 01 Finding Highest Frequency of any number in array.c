/*
	Program to find highest frequency of any number in array using a function which accept 4 perameters
	array name , array size , array first number , array secind argument
	the highest frequency(Repition) number will be returned from function
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 200
void displayArray(int a[], int s);
void getInput(int a[], int s);
int	findFrequentInArray(int* arr, int s, int a, int b, int* frequency);
int main()
{
	// Declaration of array

	int arr[SIZE];
	int frequentElement, frequency = 0, s;
	// Taking inputs from user

	do
	{
		printf("Enter Size of array : ");
		scanf("%d", &s);
		if (s <= 0 || s > 200)
			printf("Invalid Input ! ");
	} while (s <= 0 || s > 200);
	getInput(arr, s);

	// Processing and Displaying Output

	displayArray(arr, s);
	frequentElement = findFrequentInArray(arr, s, arr[0], arr[1], &frequency);
	printf("\nFrequent Element in array : %d\n", frequentElement);
	printf("Frequency of %d in array is %d.\n", frequentElement, frequency);
	return 0;
}
void displayArray(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("%d  ,  ", a[i]);
	}
	printf("\n");
}
void getInput(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("Enter any Number : ");
		scanf("%d", &a[i]);
	}
}
int findFrequentInArray(int* arr, int s, int a, int b, int* frequency)
{
	int count1 = 0, count2 = 0;
	int flag1 = 0, flag2 = 0;
	for (int i = 0; i < s; i++)
	{
		count1 = count2 = 0;
		for (int j = 0; j < s; j++)
		{
			if (a == arr[j])
				count1++;
		}
		for (int k = 0; k < s; k++)
		{
			if (b == arr[k])
				count2++;
		}
		if (count1 > count2)
			b = arr[i];
		else
			a = arr[i];
	}
	if (count1 > count2)
	{
		*frequency = count1;
		return a;
	}
	else
	{
		*frequency = count2;
		return b;
	}

}