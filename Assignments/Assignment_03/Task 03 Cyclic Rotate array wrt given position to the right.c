//Define a C function :
//void cyclicRotate(int arr[], int n, int k);
//This function takes an array(arr) and its size(n) as its first two parameters.Third parameter is
//an integer value k.This function should cyclically rotate all the elements of the array arr, by k
//positions to the right.
//For example,
//if arr contains these 8 elements{ 3, 4, 5, 8, 7, 2, 9, 1 },
//then, after the function call cyclicRotate(arr, 8, 3)
//the arr should contain these 8 elements{ 2, 9, 1, 3, 4, 5, 8, 7 }.
//In your function :
//	You can assume that k is greater than 0 and less than n
//	You are NOT allowed to declare or use any other array// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 200
void displayArray(int a[], int s);
void getInput(int a[], int s);
void cyclicRotate(int arr[], int n, int k);
int main()
{
	// Declaration of array

	int arr[SIZE], n, k;
	n = k = 0;

	// Taking inputs from user

	do
	{
		printf("Enter size of Array : ");
		scanf("%d", &n);
		if (n <= 0 || n > 200)
			printf("Invalid Input ! ");
	} while (n <= 0 || n > 200);
	getInput(arr, n);
	displayArray(arr, n);
	do
	{
		printf("Enter number of elements for cyclic rotation ( 0 < size < %d ) : ", n);
		scanf("%d", &k);
		if (k <= 0 || k > n)
			printf("Invalid Input ! ");
	} while (k <= 0 || k > n);
	
	// Processing and Displaying Output

	cyclicRotate(arr, n, k);
	displayArray(arr, n);

	return 0;

}
/// <summary>
/// This function will display the given parameter
/// </summary>
/// <param name="a">Array to print</param>
/// <param name="s">Size of that array</param>
void displayArray(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("%d  ,  ", a[i]);
	}
	printf("\n");
}
/// <summary>
/// This function will get input from user
/// </summary>
/// <param name="a">the array to store the user input</param>
/// <param name="s">size of that array</param>
void getInput(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("Enter Number %d : ", i + 1);
		scanf("%d", &a[i]);
	}
}
/// <summary>
/// This function will rotate items according to given params
/// </summary>
/// <param name="arr">Array in which items will rotate</param>
/// <param name="n">Size of given array</param>
/// <param name="k">the order given according to which items will rotate</param>
void cyclicRotate(int arr[], int n, int k)
{
	int temp = 0;
	for (int i = n-1; i >= k ; i--)
	{
		temp = arr[i];
		arr[i] = arr[i - k];
		arr[i - k] = temp;

	}
}