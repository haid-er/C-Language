#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define maxSize 100
int main()
{
	// Decalaration of arrays

	char nameInputFile[30];
	char buffer[maxSize];
	
	// Taking Input From user

	printf("Please enter Name of File :");
	scanf("%s", nameInputFile);
	getchar();

	// Creation of file

	FILE* fP = fopen(nameInputFile, "w");
	
	// Taking data from user to save in file
	
	printf("Enter Data to which you want to add in file : ");
	gets(buffer);

	// Adding data to the file

	fprintf(fP, "%s", buffer);
	
	// We must close the file if we open and use it in program so closing the file
	
	fclose(fP);

	printf("\nCheck the file in the root folder the Data is successfully saved to file.\n\n");
	return 0;
}