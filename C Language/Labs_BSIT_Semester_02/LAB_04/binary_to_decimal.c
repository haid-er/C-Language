// Program to convert binary to decimal
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int binary, temp, decimal = 0, counter = 1, rem;
	// Taking inputs from user
	printf("Enter binary : ");
	scanf("%d", &binary);
	temp = binary;
	// Processing
	while (binary > 0)
	{
		rem = binary % 10;
		decimal = decimal + (rem * counter);
		binary = binary / 10;
		counter = counter * 2;
	}
	printf("The binary number is = %d \n", temp);
	printf("The decimal number is = %d ", decimal);

	return 0;

}