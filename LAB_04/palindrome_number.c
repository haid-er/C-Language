//Task 4 Integer is palindrome or not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//VARIABLE DECLARATION
	int number, temp, digit1, digit2, digit3, digit4, digit5, reverse;
	char choice;
	do
	{
		printf("\nPleasre Enter 5-Digit number : ");
		scanf("%d", &number);
		temp = number;
		digit1 = number % 10;
		number = number / 10;
		digit2 = number % 10;
		number = number / 10;
		digit3 = number % 10;
		number = number / 10;
		digit4 = number % 10;
		number = number / 10;
		digit5 = number % 10;
		number = number / 10;
		reverse = digit5;
		reverse = (digit1 * 10000) + reverse;
		reverse = (digit2 * 1000) + reverse;
		reverse = (digit3 * 100) + reverse;
		reverse = (digit4 * 10) + reverse;
		printf("The Reverse Number is : %d", reverse);
		if (temp == reverse)
			printf("\nEntered Number is Palindrome.");
		else
			printf("\nEntered Number is Not Palindrome. ");
		
		printf("\nDo you want to continue (Y/N) : ");
		getchar();
		scanf("%c", &choice);
	} while (choice == 'Y' || choice == 'y');
	//PRINTING OUTPUT



	return 0;

}