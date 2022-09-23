//Task 4 Integer is palindrome or not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//VARIABLE DECLARATION
	int number, temp,digit, reverse;
	number = temp = digit = 0;
	char choice;
	do
	{
		printf("\nPleasre Enter 5-Digit number : ");
		scanf("%d", &number);
		temp = number;
		reverse = 0;
		while (number != 0)
		{
			digit = number % 10;
			number = number / 10;
			reverse = reverse * 10 + digit;
		}
		printf("The Reverse Number is : %d", reverse);
		if (temp == reverse)
			printf("\nEntered Number is Palindrome.");
		else
			printf("\nEntered Number is Not Palindrome. ");
		
		printf("\nDo you want to continue (Y/N) : ");
		getchar();
		scanf("%c", &choice);
	} while (choice == 'Y' || choice == 'y');
	
	printf("BYE BYE");


	return 0;

}