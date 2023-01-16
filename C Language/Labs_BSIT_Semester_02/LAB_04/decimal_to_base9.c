// Program to convert decimal to base-9

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int number = 0 , converted = 0;
	// Taking inputs from user
	printf("Enter any Number : ");
	scanf("%d", &number);
	for (int i = 1 , j =1; number != 0; i = i * 8 , j=j*10)
	{
		// printf("%d \n", number%9);
		converted = converted + ((number % 9)*j);
		number = number / 9;
	}
	printf("The equivalet number in Base-9 is = %d", converted);

	return 0;

}