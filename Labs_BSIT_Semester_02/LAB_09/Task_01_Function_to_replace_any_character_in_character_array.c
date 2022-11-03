// Program to replace any character of array with the given character
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void replace(char arr[], char a, char b);
int main()
{
	// Declaration of array

	char array[SIZE];
	char x, y;
	
	// Taking inputs from user

	printf("Enter any text : ");
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = getchar();
		if (array[i] == 10)
		{
			array[i] = '\0';
			break;
		}
	} 
	printf("Enter any Character which you want to replace : ");
	scanf("%c", &x);
	getchar();
	printf("Enter new character with which the old character will be replaced : ");
	scanf("%c", &y);
	getchar();

	printf("Array without replaced Character : %s\n",array);
	// Processing

	replace(array, x, y);

	// Displaying Output

	printf("Array with replaced Character : %s\n", array);

	return 0;

}
void replace(char arr[], char a, char b)
{
	for (int i = 0; i < SIZE && arr[i - 1] != 0; i++)
	{
		if (arr[i] == a)
			arr[i] = b;
	}
}
