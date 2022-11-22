// Program to convert a string of numbers to integer and floating point number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 11
int checkIfNumber(char* arr);
int convertToInt(char* arr);
float convertToFloat(const char* nptr);
int main()
{
	// Declaration of arr

	char arr[20];
	int number;
	float num;
	// Taking inputs from user
	do
	{
		printf("Enter any string containing 10 digit Number with or without period : ");
		scanf("%10s", arr);
		if (checkIfNumber(arr))
			printf("Invalid Input ! ");
	} while (checkIfNumber(arr));

	// Processing

	number = convertToInt(arr);
	num = convertToFloat(arr);

	// Displaying Output

	printf("Given Array : %s\n", arr);
	printf("Integer Number = %d\n", number);
	printf("Floating Point number = %f\n", num);
	
	return 0;

}
int checkIfNumber(char* arr)
{
	int i = 0;
	int count = 0, flag = 0;
	while (*(arr + i) != 0)
	{
		if (*(arr + i) < '0' || *(arr + i) > '9')
		{
			flag = 1;
			if (*(arr + i) == '.')
			{
				flag = 0;
				count++;
			}
		}
		i++;
	}
	if (flag == 1 || count > 1)
		return 1;
	else
		return 0;
}
int convertToInt(char* arr)
{
	int i = 0, num = 0;
	while (*(arr + i) != 0)
	{
		num = num*10 + (*(arr + i) - '0');
		i++;
		if (*(arr + i) == '.')
			break;
	}
	return num;
}
float convertToFloat(const char* nptr)
{
	int i = 0, flag = 0;
	long int  num = 0, multiplier = 1, decimal = 0;
	float result = 0, deci = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		i++;
		int count = 0;
		while (*(nptr + i) != 0 && count < 7)
		{
			count++;
			multiplier = multiplier * 10;
			decimal = decimal * 10 + (*(nptr + i) - '0');
			i++;
		}
		deci = (float)decimal / multiplier;
		result = num + deci;
	}
	else
	{
		result = num;
	}
	return result;
}
