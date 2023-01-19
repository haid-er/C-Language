// Program to add two Binary Numbers like addition by hand
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int tempDigit, temp1, temp2, digit1, digit2, binary1, binary2, sum, rem , checkBinary1 , checkBinary2 , notBinary1, notBinary2;
	tempDigit = temp1 = temp2 = digit1 = digit2 = binary1 = binary2 = sum = rem = checkBinary1 = checkBinary2 = notBinary1 = notBinary2 = 0;
	int counter = 1;
	// Here tempDigit will be used to to store sum of digit of number 1 and number 2
	// temp1 will be used to store binary 1
	// temp2 will be used to store binary 2
	// digit1 will be used to take a digit from num1
	// digit2 will be used to take a digit from num2
	// binary1 and binary2 will be used to take two binary numbers from the user
	// rem will be used to store carry from the digits sum
	// checkBinary1 and checkBinary2 will be used to check if the given number is binary
	// notBinary1 and notBinary2 will be used to tell the loop to take input again for binary1 and binary2 respectively
	
	// Taking inputs from user
	// These loop iteate again and again unless user enter valid value


	do
	{
		notBinary1 = 0;
		printf("Enter first Number : ");
		scanf("%d", &binary1);
		temp1 = binary1;
		for (int i = 1; temp1!= 0; i++)
		{
			checkBinary1 = temp1 % 10; 
			temp1 = temp1 / 10;
			if (checkBinary1 > 1)
				notBinary1++;
		}
		temp1 = binary1;
		if (binary1 < 0 || notBinary1>0)
			printf("Invalid Input ! ");

	} while (binary1 < 0 || notBinary1>0);
	do
	{
		notBinary2 = 0;
		printf("Enter second Number : ");
		scanf("%d", &binary2);
		temp2 = binary2;
		for (int i = 1; temp2 != 0; i++)
		{
			checkBinary2 = temp2 % 10;
			temp2 = temp2 / 10;
			if (checkBinary2 > 1)
				notBinary2++;
		}
		temp2 = binary2;
		if (binary2 < 0 || notBinary2>0)
			printf("Invalid Input ! ");

	} while (binary2 < 0 || notBinary2>0);

	// Processing the output

	while (temp1 > 0 || temp2 > 0 || rem != 0)
	{
		digit1 = temp1 % 10;
		digit2 = temp2 % 10;
		temp1 = temp1 / 10;
		temp2 = temp2 / 10;
		tempDigit = digit1 + digit2 + rem;
		rem = 0;
		if (tempDigit > 1)
		{
			rem = tempDigit / 2;
			tempDigit = tempDigit % 2;
		}
		sum = (tempDigit * counter) + sum;
		counter = counter * 10;


	}
	// Displaying Output

	printf("\n\n");
	printf("\t  %9d\n\t+\n\t  %9d\n\t------------\n\t  %9d", binary1, binary2, sum);
	printf("\n\n");
	return 0;

}
