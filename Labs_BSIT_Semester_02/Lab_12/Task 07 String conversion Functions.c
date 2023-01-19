// User defined function for string conversion
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 21
float arrtofloat(const char* nptr);							// convert the string nptr to double
int arrtoint(const char* nptr);								// convert the string nptr to int
long arrtolong(const char* nptr);							// convert the string nptr to long int
double strtodouble(const char* nptr);			// convert the string nptr to double
long strtolong(const char* nptr);
unsigned long strtoulong(const char* nptr);// convert the string nPtr to unsigned long
int checkIfNumber(char* arr);
int main()
{

	// Declaration of variables
	char str[SIZE];
	float num = 0.0;
	int numInt = 0;
	char *endPtr;
	long int numLong = 0;
	double numDouble = 0;
	unsigned long int numUnsigned = 0;
	long int numlong = 0;

	// Taking iNput from user
	
	do
	{
		printf("Enter any string containing 10 digit Number with or without period : ");
		scanf("%20s", str);
		if (checkIfNumber(str))
			printf("Invalid Input ! ");
	} while (checkIfNumber(str));
	
	// Processing and Displaying Output
	
	printf("String = %s\n\n", str);
	num = arrtofloat(str);
	printf("Float Number = %f\n", num);
	numInt = arrtoint(str);
	printf("Integer of Array : %d\n", numInt);
	numLong = arrtolong(str);
	printf("Long int of String : %d\n", numLong);
	numDouble = strtodouble(str);
	printf("Double of String = %lf\n", numDouble);
	numUnsigned = strtoulong(str);
	printf("Unsigned Long of String : %lu\n", numUnsigned);
	numlong = strtolong(str);
	printf("Long of String : %ld\n", numlong);
	return 0;

}
float arrtofloat(const char* nptr)
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
int arrtoint(const char* nptr)
{
	int i = 0, num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
}
long arrtolong(const char* nptr)
{
	int i = 0;
	long int num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
}
long strtolong(const char* nptr)
{

	int i = 0;
	long int num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
}
double strtodouble(const char* nptr)
{
	int i = 0, flag = 0;
	long int  num = 0, multiplier = 1, decimal = 0;
	double result = 0, deci = 0;
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
		deci = (double)decimal / multiplier;
		result = num + deci;
	}
	else
	{
		result = num;
	}
	return result;
}
unsigned long strtoulong(const char* nptr)
{
	int i = 0;
	unsigned long int num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
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