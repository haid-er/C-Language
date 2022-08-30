//Task 1 Sum of Digits
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int number,digit1,digit2,digit3, sum;
	printf("Pleasre Enter 3 Digit number : ");
	scanf("%d", &number);
	digit1 = number % 10;
	number = number / 10;
	digit2 = number % 10;
	number = number / 10;
	digit3 = number % 10;
	number = number / 10;
	sum = digit1 + digit2 + digit3;
	printf("Digits : %d ,%d ,%d\nThe Sum of digits : %d", digit1, digit2, digit3,sum);

	
	return 0;

}