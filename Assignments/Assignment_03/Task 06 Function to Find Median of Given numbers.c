// Program to find median of array of given number
/*
	Firstly the numbers in array should be sorted
	Now if the array size is odd number then the median will be equal to the middle value of array
	and if the array size is even number then the median will be equal to the average of both values of array
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void getInput(int a[], int s);
void displayArray(int a[], int s);
double findMedian(int* a, int s);
int main()
{
	// Declaration of array

	int arr[SIZE];
	int sor;
	double median = 0.0;
	// Taking inputs from user

	printf("Enter size of array : ");
	scanf("%d", &sor);
	getInput(arr, sor);

	// Processing and Displaying Output

	median = findMedian(arr, sor);
	displayArray(arr, sor);
	printf("Median of Numbers = %lf\n", median);

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
		printf("Enter Number %d : ", i + 1);
		scanf("%d", &a[i]);
	}
}
double findMedian(int* a, int s)
{
	double med = 10;
	int temp;
	// first we have to sort the array
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (*(a + i) < *(a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	if (s % 2 == 0)
	{
		med = *(a + s / 2 - 1) + *(a + s / 2);
		med = med / 2.0;
	}
	else
	{
		med = *(a + s / 2);
	}
	return med;
}
