// Program tp merge two arrays using function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
#define SIZE50 5
void assignRandomNumber(int[], int s);
void diplayArray(int[], int s);
void mergeTwoArray(int m[], int a[], int b[], int s1, int s2);
int main()
{
	int mergedArray[SIZE], array1[SIZE50], array2[SIZE50];
	srand(time(0));
	assignRandomNumber(array1, SIZE50);
	assignRandomNumber(array2, SIZE50);
	printf("Array 1 :\n");
	diplayArray(array1, SIZE50);
	printf("\nArray 2 :\n");
	diplayArray(array2, SIZE50);
	mergeTwoArray(mergedArray, array1, array2, SIZE50, SIZE50);
	printf("\nMerged Arrays :\n");
	diplayArray(mergedArray, SIZE);
	return 0;

}
void assignRandomNumber(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		a[i] = rand();
	}
}
void diplayArray(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("%d\t", a[i]);
	}
}
void mergeTwoArray(int m[], int a[], int b[], int s1, int s2)
{
	for (int i = 0; i < s1; i++)
	{
		m[i] = a[i];
	}
	for (int i = s1,j=0; i < (s1 + s2); i++,j++)
	{
		m[i] = b[j];
	}
}