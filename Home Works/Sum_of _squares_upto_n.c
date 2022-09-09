// Program to find the sum of squares from 1 to the given number using for loop
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//Initialization of variables
	int num, sum = 0;
	printf("Enter the number upto which you want to calculate sum of squares : ");
	scanf("%d", &num);
	//Calculating Sum using for loop
	for (int i = 1; i <= num; i++)
	{
		sum = sum + (i * i);
	}
	// Displaying Output on screen
	printf("Sum of squares upto %d is = %d \n", num, sum);

	return 0;
}
