// Program to take phone number as string then extracting its area code 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 14
int main()
{
	// Declaration of variables

	char phoneNo[SIZE];
	char areaCode[SIZE];
	char lastDigits[SIZE];
	char centerDigits[SIZE];
	int areaCodeInteger;
	// Taking inputs from user

	printf("Enter your Phone Number : ");
	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0)
		{
			phoneNo[i] = '(';
			continue;
		}
		if (i == 4)
		{
			phoneNo[i] = ')';
			continue;
		}
		if (i == 8)
		{
			phoneNo[i] = '-';
			continue;
		}
		if (i == 13)
		{
			phoneNo[i] = '.';
		}
		phoneNo[i] = getchar();
	}
	phoneNo[SIZE - 1] = '\0';
	printf("\nPhone Number : ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%c", phoneNo[i]);
	}
	// Processing

	strcpy(areaCode, strtok(phoneNo, ")"));
	strcpy(centerDigits, strtok(NULL, "-"));
	strcpy(lastDigits, strtok(NULL, "."));
	char temp;
	int i = 0;
	for (int i = 0; i < SIZE; i++)
	{
		areaCode[i] = areaCode[i + 1];
		if (areaCode == 0)
			break;
	}
	// Displaying Output
	
	printf("\nArea code = %s\n", areaCode);
	printf("Last Digits = %s\n", lastDigits);
	printf("Center Digits = %s\n", centerDigits);
	strcat(areaCode, lastDigits);
	printf("\nArea Code : %s", areaCode);
	areaCodeInteger = atoi(areaCode);
	printf("\nInteger value of Area Code : %d", areaCodeInteger);
	return 0;

}