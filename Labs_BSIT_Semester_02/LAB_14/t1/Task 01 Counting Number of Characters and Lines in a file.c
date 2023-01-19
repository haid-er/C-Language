// Program to count number of lines and number of characters in a file
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 200
int main()
{
	// Creation and open a file to write

	FILE* fp = NULL;
	fp = fopen("demo.txt", "r");

	// Variable declarations

	int choice;
	char str[SIZE];
	int numberOfLines, numberOfCharacters;
	char temp = 'a';
	choice = 1;
	numberOfLines = numberOfCharacters = 0;


	// process to count number of lines and characters by judging every character using loop

	do
	{
		numberOfCharacters++;
		temp = getc(fp);
		if (temp == '\n')
			numberOfLines++;
	} while (temp != EOF);

	// Displaying Output

	printf("Number of Charaters of file : %d\n", numberOfCharacters);
	printf("Number of Lines in File : %d\n", numberOfLines + 1);

	// closing the opened file

	fclose(fp);

	return 0;

}

