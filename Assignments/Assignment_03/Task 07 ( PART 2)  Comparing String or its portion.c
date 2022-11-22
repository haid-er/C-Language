// Functions to compare two strings if both are equal or which one is greater or to compare a string portion
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 30
/// <summary>
///		This function will compare two strigs
/// </summary>
/// <param name="str1">will take first string</param>
/// <param name="str2">will take second string</param>
/// <returns>
///		will return 1 if both strings are equal 
///		will return 2 if both strings are unequal and 1st string is greater than second string
///		will return 3 if both strings are unequal and 1st string is smaller than 2nd string
///		will return 4 if both strings are equal in length but unequal in content
/// </returns>
int strCompare(char const* str1, char const* str2);
/// <summary>
///		This function can compare a string with some piece of string
/// </summary>
/// <param name="str1">Takes main string</param>
/// <param name="str2">takes string part to compare</param>
/// <param name="length">takes length of second string to compare with the first</param>
/// <returns>
///		0 if string portion is equal to the 1st string
///		positive number not equal to the 1st string
///		negative number if string portion is less than the given length or not equal to the 1st string
///	</returns>
int strComparePortion(char const* str1, char const* str2, int size);
int main()
{
	// Declaration of arrays

	char string1[SIZE];
	char string2[SIZE];
	char string3[SIZE];
	int strcomp = 0, strPortion = 0;
	// Taking inputs from user

	printf("Enter any String to compare : ");
	gets(string1);
	printf("Enter any other string to compare : ");
	gets(string2);

	// Processing


	strcomp = strCompare(string1, string2, 4);

	// Displaying Output
	printf("\n");
	if (strcomp == 1)
		printf("Both Strings are equal ! \n");
	else if (strcomp == 2)
		printf("Strings are unequal and 1st string is larger than 2nd string !\n");
	else if (strcomp == 3)
		printf("Strings are unequal and 1st string is smaller than 2nd string !\n");
	else
		printf("Strings are unequal !\n");

	printf("Enter any other string to compare with portion of 1st string : ");
	gets(string3);
	printf("Enter length to compare : ");
	scanf("%d", &strPortion);
	strcomp = strComparePortion(string1, string3, strPortion);
	printf("\n");
	if (strcomp > 0)
		printf("Strings are not equal ! 1st string is smaller than the given length !\n");
	else if (strcomp < 0)
		printf("Strings are not equal !	\n");
	else
		printf("Both string\'s portions are equal !\n");

	return 0;
}
int strCompare(char const* str1, char const* str2)
{
	int counter, length1, length2;
	counter = length1 = length2 = 0;
	while (*(str1 + counter) != 0)
		counter++;
	length1 = counter;
	counter = 0;
	while (*(str2 + counter) != 0)
		counter++;
	length2 = counter;
	counter = 0;
	if (length1 > length2)
		return 2;
	else if (length1 < length2)
		return 3;
	else
	{
		while (*(str1 + counter) != 0)
		{
			if (*(str1 + counter) != *(str2 + counter))
			{
				return 4;
			}
			counter++;
		}
		return 1;
	}
}
int strComparePortion(char const* str1, char const* str2, int size)
{
	int counter, length1, length2;
	counter = length1 = length2 = 0;
	while (*(str1 + counter) != 0)
		counter++;
	length1 = counter;
	counter = 0;
	while (*(str2 + counter) != 0)
		counter++;
	length2 = counter;
	counter = 0;
	if (length2 < size)
		return -1;
	else if (length1 < size)
		return 1;
	else
	{
		while (*(str1 + counter) != 0 && counter < size)
		{
			if (*(str1 + counter) != *(str2 + counter))
			{
				return -99;
			}
			counter++;
		}
		return 0;
	}
}

