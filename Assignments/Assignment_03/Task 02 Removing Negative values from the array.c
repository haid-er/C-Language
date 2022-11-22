/*
Define a C function that should remove all NEGATIVE values from an unsorted array of
integers. Your function should also preserve the order of remaining elements in the array. In the
end, this function should also return the count of the NEGATIVE values that were removed from
the array. The prototype of your function should be:
int removeNegatives (int arr[], int size, int *newSize)
Note that the third reference parameter is used to send the updated size of the array back to the
calling function.
For example, if arr contains these 7 elements { 11, -15, -2, 7, 11, 6, -8 }, then, after
the function call to removeNegatives the arr should now contain { 11, 7, 11, 6 } in its
first four indices. The variable newSize (see the 3rd parameter) should contain 4 (since the
partially filled array arr now contains 4 valid elements) and the function should return 3 (because
3 negative values were removed from the array).
Important Note:
	 In your function, you are NOT allowed to declare or use any other array.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 200
int removeNegatives(int arr[], int size, int* newSize);
void getInput(int a[], int s);
void displayArray(int a[], int s);

int main()
{
	// Declaration of array

	int arr[SIZE];
	int sor, negatives, newSor;
	sor = negatives = newSor = 0;
	
	// Taking inputs from user

	do
	{
		printf("Enter size of Array : ");
		scanf("%d", &sor);
		if (sor <= 0 || sor > 200)
			printf("Invalid Input ! ");
	} while (sor <= 0 || sor > 200);
	getInput(arr, sor);

	// Processing AND Displaying Output

	printf("You Entered this Array : ");
	displayArray(arr, sor);
	newSor = sor;
	negatives = removeNegatives(arr, sor, &newSor);


	printf("New array is : ");
	displayArray(arr, newSor);
	printf("New size of array : %d\n", newSor);
	printf("Number of negative numbers in Array = %d", negatives);

	return 0;

}
int removeNegatives(int arr[], int size, int* newSize)
{
	int negativesCount = 0,tempCount = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			tempCount = i;
			while(arr[tempCount] != '\0')
			{
				arr[tempCount] = arr[tempCount + 1];
				tempCount++;
			}
			*newSize = *newSize - 1;
			negativesCount++;
			i = i - 1;
		}
	}
	return negativesCount;
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
	a[s] = '\0';
}