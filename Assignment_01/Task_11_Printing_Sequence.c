// Program to print sequence of numbers as follow
// program should take input for starting and ending integer
// if starting integer is 11 and ending integer is 18 then output will be as follows
/*
(11,11) (11,12) (11,13) (11,14) (11,15) (11,16) (11,17) (11,18)
(12,12) (12,13) (12,14) (12,15) (12,16) (12,17)
(13,13) (13,14) (13,15) (13,16)
(14,14) (14,15)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int startingInteger, endingInteger;
	startingInteger = endingInteger = 0;

	// Taking inputs from user

	do
	{
		printf("Enter starting Integer : ");
		scanf("%d", &startingInteger);
		if (startingInteger <= 0)
			printf("Invalid Input ! ");
	} while (startingInteger <= 0);
	do
	{
		printf("Enter ending Integer : ");
		scanf("%d", &endingInteger);
		if (endingInteger <= 0 || endingInteger<startingInteger)
			printf("Invalid Input ! ");
	} while (endingInteger <= 0 || endingInteger < startingInteger);

	// Processing and displaying output

	for (int i = startingInteger; i <= endingInteger; i++)
	{
		for (int j = i; j <= endingInteger; j++)
		{
			printf("(%d , %d) ", i, j);
		}
		printf("\n");
		endingInteger--;
		startingInteger--;
	}



	return 0;

}