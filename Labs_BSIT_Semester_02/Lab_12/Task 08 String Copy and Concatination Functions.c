// Functions to copy a string to other or concatinate a string with other
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 200
void copyStr(char* ptr1, char const* ptr2);
void concatStr(char* ptr1, char const* ptr2);
int main()
{
	// Declaration of variables

	char str1[SIZE/2];
	char str2[SIZE] = { '\0' };

	// Taking Input From user

	printf("Enter any String : ");
	gets(str1);

	// Processing and Displaying Output
	
	printf("Before Copying\n");
	printf("String 1 = %s\n", str1);
	printf("String 2 = %s\n", str2);
	copyStr(str2, str1);
	printf("\nAfter Copying\n");
	printf("String 1 = %s\n", str1);
	printf("String 2 = %s\n", str2);
	printf("\nBefore Concatination\n");
	printf("String 1 = %s\n", str1);
	printf("String 2 = %s\n", str2);
	concatStr(str1, str2);
	printf("\nAfter Concatination\n");
	printf("String 1 = %s\n", str1);
	printf("String 2 = %s\n", str2);
	return 0;

}
void copyStr(char* ptr1, char const* ptr2)
{

	int i = 0;
	while (*(ptr2 + i) != 0)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
}
void concatStr(char* ptr1, char const* ptr2)
{
	int i = 0;
	int j = 0;
	while (*(ptr1 + i) != 0)
	{
		i++;
	}
	*(ptr1 + i) = ' ';
	i++;
	while (*(ptr2 + j) != 0)
	{
		*(ptr1 + i) = *(ptr2 + j);
		j++;
		i++;
	}
	*(ptr1 + i) = '\0';
}