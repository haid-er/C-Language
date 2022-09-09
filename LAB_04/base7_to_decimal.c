// Program to convert Base-7  Number to decimal Number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int number = 0;
	int digit = '0';
	// Taking inputs from user
	for (int i = 1; digit != -1; i = i * 8)
	{
		printf("Enter Base-7 digit : ");
		scanf("%d", &digit);
		if ((digit < 0 || digit > 7) && digit != -1)
		{
			printf("Invalid Character Next \n");
			continue;
		}
		if(digit>=0 && digit <=7)
			number = number + (digit * i);

	}
	printf("Decimal of Given Number = %d", number);

	return 0;

}