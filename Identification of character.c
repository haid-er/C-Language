// Program to identify a character if it is in upper-case lower-case or symbol
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch1;
	printf("Enter any character : ");
	scanf("%c", &ch1);
	if (ch1 >= 'a' && ch1<='z')
	{
		printf("Entered Character is lower-case Alphabet . ");
	}
	else if (ch1 >= 'A' && ch1 <= 'Z')
	{
		printf("Entered Character is upper-case Alphabet .");
	}
	else if (ch1 >= '0' && ch1 <= '9')
	{
		printf("Entered Character is Number .");
	}
	else
	{
		printf("Entered Character is a special Symbol .");
	}


	return 0;
}