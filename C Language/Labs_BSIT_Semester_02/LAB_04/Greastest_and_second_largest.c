// Program to take number of  inputs from user and display largest and second largest number of them
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int num1,num2,num , max , secondMax , terms = 0; 
	// Taking inputs from user
	
	do {
		printf("Enter number of Inputs (>=2) : ");
		scanf("%d", &terms);
	} while (terms < 2);
	printf("Enter num 1 : ");
	scanf("%d", &num1);
	printf("Enter num 2 : ");
	scanf("%d", &num2);
	if (num1 < num2)
	{
		max = num2;
		secondMax = num1;
	}
	else
	{
		max = num1;
		secondMax = num2;
	}
	for (int i = 3; i <= terms; i++)
	{
		printf("Enter num %d : ", i);
		scanf("%d", &num);
		
		if (num > max)
		{
			secondMax = max;
			max = num;
		}
		

	}
	printf("Largest Number is = %d \n", max);
	printf("Second Largest Number is = %d", secondMax);

	return 0;

}


