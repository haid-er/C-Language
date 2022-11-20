// Program to read the series of strings and print only those ending with ed
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 200
int main()
{
	// Declaration of array

	char arr[SIZE];
	char* temp;
	// Taking inputs from user

	printf("Enter any string : ");
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = getchar();
		if (arr[i] == 10)
		{
			arr[i] = '\0';
			break;
		}
	}

	// Processing and Displaying Output

	printf("Strings ending with letters ed : ");

	// Printing the first token
	
	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0)
		{

			temp = strtok(arr, " ");
			counter = 0;
			while (temp[counter] != 0)
			{
				counter++;
			}
			if (temp[counter - 2] == 'e' && temp[counter - 1] == 'd')
				printf("%s, ", temp);
		}
		temp = strtok(NULL, " ");
		counter = 0;
		while (temp[counter] != 0)
		{
			counter++;
		}
		if (temp[counter - 2] == 'e' && temp[counter - 1] == 'd')
			printf("%s, ", temp);

		

	}




	return 0;
}