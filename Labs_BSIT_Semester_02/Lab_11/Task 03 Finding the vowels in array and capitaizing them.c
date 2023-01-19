// Program to take a charater array and calculating vowels in array and capitalizing vowels

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
int isVowel(char ch);
void diplayCapitalized(char* arr);
int main()
{
	// Declaration of array

	char arr[SIZE];
	char vowel[SIZE];
	int counter = 0, numberOfVowels = 0;

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

	// Processing and Displaying Output

	while (*(arr + counter) != '\0')
	{
		if (isVowel(*(arr + counter)))
		{
			*(vowel + numberOfVowels) = *(arr + counter);
			numberOfVowels++;
		}
		*(vowel + numberOfVowels) = '\0';
		counter++;
	}
	printf("Vowels in Text : ");
	diplayCapitalized(vowel);
	printf("\nNumber of Vowels in given text : %d\n", numberOfVowels);
	return 0;
}
int isVowel(char ch)
{
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
		return 1;
	else
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