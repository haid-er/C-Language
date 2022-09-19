// Program to add two numbers like addition by hand
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int tempDigit , temp1 ,temp2, digit1, digit2, num1, num2, sum , rem;
	tempDigit = temp1 = temp2 = digit1 = digit2 = num1 = num2 = sum = rem = 0;
	int counter = 1;
	// Here tempDigit will be used to to store sum of digit of number 1 and number 2
	// temp1 will be used to store number1
	// temp2 will be used to store number2
	// digit1 will be used to take a digit from num1
	// digit2 will be used to take a digit from num2
	// num1 and num2 will be used to take two numbers from the user
	// rem will be used to store carry from the digits sum
	
	// Taking inputs from user
	// These loop iteate again and again unless user enter valid value

	do
	{
		printf("Enter first Number : ");
		scanf("%d", &num1);
		temp1 = num1;
		if (num1 < 0)
			printf("Invalid Input ! ");

	} while (num1 < 0);
	do
	{
		printf("Enter second Number : ");
		scanf("%d", &num2);
		temp2 = num2;
		if (num2 < 0)
			printf("Invalid Input ! ");

	} while (num2 < 0);

	// Processing the output
	// Here this condition will be true unless all the temp1 temp2 and rem becomes zero

	while (temp1 > 0 || temp2 > 0 || rem!=0)
	{
		digit1 = temp1 % 10; // Take digit from number 1
		digit2 = temp2% 10;  // Take digit from number 2
		temp1 = temp1 / 10;  // remove one digit from temp1
		temp2 = temp2 / 10;  // Remover one digit from temp2
		tempDigit = digit1 + digit2 + rem;
		// We should always assign zero to remainder after using it so it will not add as carry in next iteration and become a logical error
		rem = 0;
		if (tempDigit > 9)
		{
			rem = tempDigit / 10;
			tempDigit = tempDigit % 10;
		}
		sum = (tempDigit * counter) + sum;
		counter = counter * 10;


	}
	// Displaying Output
	
	printf("\n\n");
	printf("\t  %07d\n\t+\n\t  %07d\n\t------------\n\t  %07d", num1, num2, sum);
	printf("\n\n");
	return 0;

}
