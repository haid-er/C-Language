// Program to concat two files data in a single file
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 34
int main()
{
	// Declaration of arrays and variables

	char inputFile1[SIZE];
	char inputFile2[SIZE];
	char temp = 'a';

	// Taking inputs from user and opening files
	
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	do
	{
		printf("Enter name of file 1 with extension : ");
		gets(inputFile1);
		fp1 = fopen(inputFile1, "r");
		if (fp1 == NULL)
			printf("Invalid File name ! ");
	} while (fp1 == NULL);
	do
	{

		printf("Enter name of file 2 with extension : ");
		gets(inputFile2);
		fp2 = fopen(inputFile2, "r");
		if (fp2 == NULL)
			printf("Invalid File Name ! ");
	} while (fp2 == NULL);

	
	FILE* fp3 = fopen("data.txt", "w");

	// Processing

	while (temp != EOF)
	{
		temp = getc(fp1);
		fprintf(fp3, "%c", temp);
	}
	fseek(fp3, -1, SEEK_CUR);
	fprintf(fp3, "%c", '\n');
	temp = 'a';
	while (temp != EOF)
	{
		temp = getc(fp2);
		if (temp == EOF)
		{
			fprintf(fp3, "%c", '\0');
			break;
		}
		fprintf(fp3, "%c", temp);
	}
	
	// Displaying Output

	printf("Check the file named data file in root directory.\n");

	// closing files

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;

}