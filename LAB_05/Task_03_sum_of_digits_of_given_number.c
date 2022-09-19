// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int num, digit, sum ,count;
	num = digit = sum = count = 0;

	// Taking inputs from user

	printf("Enter any Number : ");
	scanf("%d", &num);

	// Processing and Displaying Output

	if (num < 0)
		num = num * -1;
	printf("Sum of digit : ");
	do
	{
		count++;
		digit = num % 10;
		printf("%d + ", digit);
		num = num / 10;
		sum = sum + digit;
	} while (num != 0);

	printf("= %d\n", sum);
	printf("Total Number of Digit : %d", count);

	return 0;

}