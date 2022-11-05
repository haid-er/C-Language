// Program to print a name using a loop and without using loop
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define SIZE 40
int main()
{
	// Declaration of array
	
	char name[SIZE];

	// Taking inputs from user
	//char ch;
	//ch = _getch();
	//printf("%d", ch);
	printf("Enter your name : ");
	for (int i = 0; i < SIZE; i++)
	{
		name[i] = getchar();
		if (name[i] == 10)
		{
			name[i] = '\0';
			break;
		}
		
	}
	// Displaying Output
	
	printf("Name Print without loop : %s\n", name);
	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (name[i] == 0)
			break;
		counter++;
	}
	printf("Name print with loop : ");
	for (int i = 0; i < counter; i++)
	{
		
		if (name[i] == 0)
			break;
		else
			printf("%c", name[i]);
	}

	return 0;

}