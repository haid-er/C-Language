//Task 2 Reverse Integer
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//VARIABLE DECLARATION
	int number, digit1, digit2, digit3, reverse;
	printf("Pleasre Enter 3 Digit number : ");
	scanf("%d", &number);
	digit1 = number % 10;
	number = number / 10;
	digit2 = number % 10;
	number = number / 10;
	digit3 = number % 10;
	number = number / 10;
	printf("Digits : %d ,%d ,%d\n", digit1, digit2, digit3);
	reverse = digit3;
	reverse = (digit2 * 10) + reverse;
	reverse = (digit1 * 100) + reverse;
	//PRINTING OUTPUT
	printf("The Reverse Number is : %d", reverse);


	return 0;

}