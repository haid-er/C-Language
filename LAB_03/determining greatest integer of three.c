// Determining the gratest number from three intergers

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//Declaration of variables

	int num1, num2, num3, max;
	num1 = num2 = num3 = max = 0;

	//Taking input from user

	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);
	printf("Enter third number : ");
	scanf("%d", &num3);

	//Processing and displaying output

	if (num1 > num2)
	{
		if(num1>num3)
		{
			max = num1;
		}
		else
		{
			max = num3;
		}
	}
	else
	{
		if (num2 > num3)
		{
			max = num2;
		}
		else
		{
			max = num3;
		}
	}
	if (num1 == num2 || num2 == num3 || num1 == num3)
	{
		printf("Two Numbers are equal and \n");
	}
	printf("The greatest number is : %d", max);



	return 0;
}