//Program to find square of number
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float n;
	printf("Please Enter any  Number : ");
	scanf("%f", &n);
	n = n * n;
	printf("The square of number = %.3f", n);

	return 0;
}