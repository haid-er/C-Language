// Program to take a charater array and calculating vowels in array and capitalizing vowels

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void diplayCapitalized(char* arr);
void displayIntergers(int* arr);
int recognizeCharacter(char ch);
void display(char *ch);
int main()
{
	// Declaration of array

	char arr[SIZE];
	char alpha[SIZE];
	int digits[SIZE];
	char symbols[SIZE];
	int numberOfAlphabets, numberOfDigits, numberOfSymbols, numberOfSpaces;
	numberOfAlphabets = numberOfDigits = numberOfSymbols = numberOfSpaces = 0;

	// Taking inputs from user

	printf("Enter any text : ");
	for (int i = 0; i < SIZE; i++)
	{
		*(arr + i) = getchar();
		if (*(arr + i) == 10)
		{
			*(arr + i) = '\0';
			break;
		}
	}
	*(arr + SIZE - 1) = '\0';

	// Processing and Displaying Output

	for (int i = 0; i < SIZE; i++)
	{
		if (*(arr + i) == '\0')
			break;
		switch (recognizeCharacter(*(arr + i)))
		{
		case 1:
			digits[numberOfDigits] = (int)(*(arr + i)) - 48;
			numberOfDigits++;
			break;
		case 2:
			alpha[numberOfAlphabets] = *(arr + i);
			numberOfAlphabets++;
			break;
		case 3:
			alpha[numberOfAlphabets] = *(arr + i);
			numberOfAlphabets++;
			numberOfSpaces++;
			break;
		case 4:
			symbols[numberOfSymbols] = *(arr + i);
			numberOfSymbols++;
			break;
		}
	}
	symbols[numberOfSymbols] = '\0';
	alpha[numberOfAlphabets] = '\0';
	digits[numberOfDigits] = '\0';
	printf("Entered Alphabets in Capitalized form : ");
	diplayCapitalized(alpha);
	printf("\nEnterd Digits of Text :");
	displayIntergers(digits);
	printf("\nEnterd Symbols of Text : ");
	display(symbols);
	printf("\nNumber of Alphabets in Entered text : %d\n", numberOfAlphabets - numberOfSpaces);
	printf("\nNumber of Spaces in Entered text : %d\n", numberOfSpaces);
	printf("\nNumber of Digits in Entered text : %d\n", numberOfDigits);
	printf("\nNumber of Symbols in Entered text : %d\n", numberOfSymbols);
	return 0;
}
void diplayCapitalized(char* arr)
{
	int i = 0;
	while (*(arr + i) != 0)
	{
		if (*(arr + i) >= 'a' && *(arr + i) <= 'z')
			printf("%c", *(arr + i) - 32);
		else
			printf("%c", *(arr + i));
		i++;
	}
}
void displayIntergers(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (*arr == '\0')
			break;
		printf("%d\t", *arr++);
	}
}
/// <summary>
/// This function will recognize the given character
/// </summary>
/// <param name="ch">will recieve a character to recognize it</param>
/// <returns>
///		If character is digit will return 1
///		if character is alphabet will return 2
///		if character is space it will return 3
///		if character is some symbol it will return 4 
/// </returns>
int recognizeCharacter(char ch)
{
	if (ch >= '0' && ch <= '9')
		return 1;
	else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return 2;
	else if (ch == 32)
		return 3;
	else
		return 4;
}
void display(char* ch)
{
	int i = 0;
	while (*(ch + i) != 0)
	{
		printf("%c", *(ch + i));
		i++;
	}
}
