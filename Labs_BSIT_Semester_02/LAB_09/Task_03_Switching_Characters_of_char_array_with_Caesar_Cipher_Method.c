// Program to switch the character of array using Caesar Cipher method in which characters in a string are switched with character after it in alphabet in given key
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void switchCharacters(char arr[], int key);
int main()
{
	// Declaration of Array
	
	char str[SIZE];
	int key;

	// Taking inputs from user

	printf("Enter any Text : ");
	for (int i = 0; i < SIZE; i++)
	{
		str[i] = getchar();
		if (str[i] == 10)
		{
			str[i] = '\0';
			break;
		}
	}
	printf("Enter any number for key : ");
	scanf("%d", &key);

	// Processing
	
	printf("Before Switching : %s\n", str);
	switchCharacters(str, key);

	// Displaying Output

	printf("After Switching : %s\n", str);

	return 0;

}
void switchCharacters(char arr[], int key)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == '\0')
			break;
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = arr[i] + key;
			if (arr[i] > 'z')
				arr[i] = arr[i] - 26;
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] = arr[i] + key;
			if (arr[i] > 'Z')
				arr[i] = arr[i] - 26;
		}
		else
			continue;
	}
}