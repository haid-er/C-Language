// Program to check number is prime or Not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int num,temp;
	num = temp = 0;
	// number will be used to take a number from user and temp will be used to store the same number as num
	
	// Taking inputs from user
	// Thiw loop iteate again and again unless user enter valid value

	do
	{
		printf("Enter any Number : ");
		scanf("%d", &num);
		if (num < 0)
			printf("Invalid Input ! ");

	} while (num < 0);


	// Processing the input to output

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			temp++;
	}

	// Displaying Output

	if (temp == 2)
		printf("%d is Prime Number.", num);
	else
		printf("%d is NOT a Prime Number.", num);


	return 0;

}