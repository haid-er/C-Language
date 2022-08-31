// Program to Find odd and even numbers without using modulus operator
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	float temp;
	printf("Enter any number : ");
	scanf("%d", &num);
	temp = num / 2.0;
	if ((num / 2) == temp)
	{
		printf("Entered Number is Even");
	}
	else
	{
		printf("Entered Number is Odd");
	}
	return 0;
}