// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define SIZE 20
void compareArray(char a[], char b[]);
void reverseCharacterArray(char arr[]);
void copyCharacterArrayToOther(char a[],char b[]);
int findCharacter(char a[], char x);
int main()
{
	// Declaration of arrays

	char arr1[SIZE], arr2[SIZE], arr3[SIZE], ch1;

	// Taking input by user
	printf("Enter any Text : ");
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = getchar();
		if (arr1[i] == 10)
		{
			arr1[i] = '\0';
			break;
		}
	}
	printf("Enter any other Text to compare with first : ");
	for (int i = 0; i < SIZE; i++)
	{
		arr3[i] = getchar();
		if (arr3[i] == 10)
		{
			arr3[i] = '\0';
			break;
		}
	}

	// Processing and displaying output

	copyCharacterArrayToOther(arr1, arr2);
	printf("Copy of Array : %s\n", arr2);
	compareArray(arr1, arr3);
	reverseCharacterArray(arr1);
	printf("Reversed Character Array : %s\n", arr1);
	printf("Enter any character you want to find in array : ");
	ch1 = getchar();
	if (findCharacter(arr1, ch1))
		printf("Character exists in Array1.\n");
	else
		printf("Character does not exist in Array1.\n");
	return 0;

}
void compareArray(char a[], char b[])
{
	int flag = 0;
	for (int i = 0; i < SIZE && a[i] !=0; i++)
	{
		if (a[i] != b[i])
			flag = 1;
	}
	if (flag == 0)
		printf("Arrays are Equal.\n");
	else
		printf("Arrays are not Equal.\n");

}
void reverseCharacterArray(char arr[])
{
	int counter = 0;
	char t;
	while (arr[counter] != 0)
		counter++;
	counter--;
	int temp = counter;
	for (int i = 0; i < counter / 2; i++)
	{
		t = arr[i];
		arr[i] = arr[temp];
		arr[temp] = t;
		temp--;

	}
	printf("\n");
}
void copyCharacterArrayToOther(char a[], char b[])
{
	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
		if (a[i] == 0)
		{
			b[i] == 0;
			break;
		}
	}
}
int findCharacter(char a[], char x)
{
	int flag = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] == x)
			flag = 1;
	}
	return flag;
}