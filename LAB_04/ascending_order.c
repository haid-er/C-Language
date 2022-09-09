// Program to take integers from user and arrange them in accending order

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num1, num2, num3, max = 0;
	printf("Enter any Number : ");
	scanf("%d", &num1);
	printf("Enter any Number : ");
	scanf("%d", &num2);
	printf("Enter any Number : ");
	scanf("%d", &num3);
	if (num1 > num2 && num1 > num3)
		max = num1;
	else if (num2 > num3 && num2 > num1)
		max = num2;
	else
		max = num3;
	if (max == num1 && num2 > num3)
		printf("%d \t %d \t %d \t", num3, num2, max);
	else if (max == num2 && num1 > num3)
		printf("%d \t %d \t %d \t", num3, num1, max);
	else if (max == num3 && num1 > num2)
		printf("%d \t %d \t %d \t", num2, num1, max);
	else if (max == num1 && num3 >= num2)
		printf("%d \t %d \t %d \t", num2, num3, max);
	else if (max == num2 && num3 >= num1)
		printf("%d \t %d \t %d \t", num1, num3, max);
	else if (max == num3 && num2 >= num1)
		printf("%d \t %d \t %d \t", num1, num2, max);
	else
		printf("Invalid Input");

	return 0;

}