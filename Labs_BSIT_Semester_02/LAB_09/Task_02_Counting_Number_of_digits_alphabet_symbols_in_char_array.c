// Program to count number of Digits Alphabets and Symbols in Character Array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void count(char str[]);
int main()
{
	// Declaration of array

	char str[SIZE];

	// Taking inputs from user

	printf("Enter any text : ");
	for (int i = 0; i < SIZE ; i++)
	{
		str[i] = getchar();
		if (str[i] == 10)
		{
			str[i] = '\0';
			break;
		}
	}

	// Processing and Displaying output

	count(str);

	return 0;

}
void count(char str[])
{
	int i, numberOfDigits, numberOfAlphabets, numberOfSymbols, numberOfSpaces;
	i = numberOfDigits = numberOfSpaces = numberOfAlphabets = numberOfSymbols = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z')
			numberOfAlphabets++;
		else if (str[i] >= '0' && str[i] <= '9')
			numberOfDigits++;
		else if (str[i] == 32)
			numberOfSpaces++;
		else
			numberOfSymbols++;

		i++;
	}
	printf("Total Number of Characters of array : %d\n", i);
	printf("Total Number of Alphabets in array : %d\n", numberOfAlphabets);
	printf("Total Number of Digits in array : %d\n", numberOfDigits);
	printf("Total Number of Spaces in array : %d\n", numberOfSpaces);
	printf("Total Number of Symbols in array : %d\n", numberOfSymbols);
}