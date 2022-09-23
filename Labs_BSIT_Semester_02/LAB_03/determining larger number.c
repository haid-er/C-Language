// Determining larger number from two numbers

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//Declaration of variables

	int num1, num2;
	num1 = num2 = 0;

	//Taking Input from user

	printf("Enter first Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);

	//Processing and Displaying Output

	if (num1>num2)
	{
		printf("The first number %d is larger than the second number",num1);
	}
	else if (num2>num1)
	{
		printf("The second number %d is larger than the first number", num2);
	}
	else if (num1==num2)
	{
		printf("The first number %d is equal to the second number %d", num1,num2);
	}
	else
	{
		printf("Invalid Input.");
	}


	return 0;
}