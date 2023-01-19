// Program to find corresponding character to the ASCII code
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int num;
	char ch;

	// Taking inputs from user
	do
	{
		printf("Enter any Number : ");
		scanf("%d", &num);
		if (num > 255 || num < 0)
			printf("Not a ASCII code ! ");
	} while (num > 255 || num < 0);

	// Processing

	ch = num;

	// Displaying Output

	printf("Character for %d  :  %c", num, ch);

	return 0;

}