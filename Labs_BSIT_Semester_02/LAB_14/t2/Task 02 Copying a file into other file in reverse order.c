// Program to copy a file to other file in reverse order
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	// Opening files

	FILE* fp2 = fopen("output.txt", "w");
	FILE *fp1 = fopen("input.txt", "r");
	
	if (fp1 == NULL)
	{
		printf("File does not Exist !\n");
		exit(0);
	}

	// Variable initialization

	char temp = 'a';


	// copying input file to the output.txt

	fseek(fp1, 0, SEEK_END);
	do
	{
		fseek(fp1, -1, SEEK_CUR);
		temp = getc(fp1);
		if (temp == '\n')
		{
			fprintf(fp2, "%c", temp);
			fseek(fp1, -2, SEEK_CUR);
		}
		else
		{
			fprintf(fp2, "%c", temp);
			fseek(fp1, -1, SEEK_CUR);
		}
	} while (ftell(fp1) != 0);
	printf("Check the output file.\n");

	// closing the files

	fclose(fp1);
	fclose(fp2);

	return 0;

}