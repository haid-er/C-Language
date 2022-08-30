//Program for conversion of lower case letter to uppercase
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char letter;
	printf("Enter an alphabet (a-z) in lower-case : ");
	scanf("%c", &letter);
	letter = letter - 32;
	printf("In uper case it is : %c", letter);
	return 0;
}