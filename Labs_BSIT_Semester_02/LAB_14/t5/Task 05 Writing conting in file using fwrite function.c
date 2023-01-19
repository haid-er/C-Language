// Program to save counting in the file using fwrite function

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Opening the file

	FILE* fp1 = fopen("demo.dat", "w");

	// Storing counting

	for (int i = 0; i < 100; i++)
	{
		fwrite(&i, sizeof(i), 1, fp1);
	}

	// Displaying Output

	printf("Check the demo file in root directory.\n");
	
	return 0;

}