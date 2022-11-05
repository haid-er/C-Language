// Program to convert character array to uppercase using pointer notation
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 40
void uppercase(char*);
int main()
{
	// Array Initialization

	char arr[SIZE];

	// Taking Input from user

	printf("Enter any Text to convert in uppercase : ");
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = getchar();
		if (arr[i] == 10)
		{
			arr[i] = '\0';
			break;
		}
	}

	// Processing

	uppercase(arr);

	// Displaying Output
	printf("Array after coversion to uppercase : \n%s", arr);

	return 0;

}
void uppercase(char* ch)
{
	int i = 0;
	while (*(ch + i) != '\0')
	{
		if (*(ch + i) >= 'a' && *(ch + i) <= 'z')		
			*(ch + i) = *(ch + i) - 32;
		i++;
	}
}