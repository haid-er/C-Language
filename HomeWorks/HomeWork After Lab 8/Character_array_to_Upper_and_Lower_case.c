// Program to convert any character array into upper and lower case
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 30
void toUpper(char arr[]);
void toLower(char arr[]);
int main()
{
	// Initialization of Character array

	char array1[SIZE] = "Say heLLo TO c prOGRammiNg";

	// Processing and Displaying Output
	
	toUpper(array1);
	printf("Upper Case Array : %s\n", array1);

	toLower(array1);
	printf("Lower Case Array : %s\n", array1);

	return 0;

}
void toUpper(char arr[])
{
	int counter = 0;
	while (arr[counter] != 0)
	{
		counter++;
	}
	for (int i = 0; i < counter; i++)
	{
		if(arr[i] > 'Z' && arr[i] != ' ')
			arr[i] = arr[i] - 32;
	}
}
void toLower(char arr[])
{
	int counter = 0;
	while (arr[counter] != 0)
	{
		counter++;
	}
	for (int i = 0; i < counter; i++)
	{
		if(arr[i] <= 'Z' && arr[i] != ' ')
			arr[i] = arr[i] + 32;
	}
}