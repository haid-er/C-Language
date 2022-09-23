//Addition using short data type
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short a, b, sum;
	printf("Enter First value : ");
	scanf("%d", &a);
	printf("Enter Second value : ");
	scanf("%d", &b);
	sum = a + b;
	printf("Sum of Numbers : %d",sum);

	return 0;

}