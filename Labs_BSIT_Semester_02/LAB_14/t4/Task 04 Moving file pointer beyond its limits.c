// Program to check what is printed if we move the pointer beyond the limits of file
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// opening a file

	FILE* fp1 = fopen("demo.txt", "r");
	if (fp1 == NULL)
	{
		printf("File does not exist ! \n");
		return;
	}

	// checking what is before and after the file

	fseek(fp1, -5, SEEK_SET);
	printf("Character before the file : %c\n", getc(fp1));
	fseek(fp1, 2, SEEK_END);
	printf("Character after the file : %c\n", getc(fp1));


	// closing the file

	fclose(fp1);

	return 0;

}