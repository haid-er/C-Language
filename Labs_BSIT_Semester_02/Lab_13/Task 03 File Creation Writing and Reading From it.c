// Program to creat open write and read data from a file
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	// Declaration of variables

	char str[50];
	char str1[50];
	int age,rollNumber;
	int age1,rollNumber1;
	
	// File Open
	
	FILE* filePtr = NULL;
	filePtr = fopen("demo.txt", "w");
	
	// Taking inputs from user

	printf("Enter Your Name : ");
	gets(str);
	printf("Enter age : ");
	scanf("%d", &age);
	printf("Enter rollNumber : ");
	scanf("%d", &rollNumber);
	
	// Storing Text in file

	fprintf(filePtr, "%d %s %d", rollNumber, str, age);
	fclose(filePtr);

	// Displaying Output
	FILE* filePtr1;
	if ((filePtr1 = fopen("demo.txt", "r")) == NULL)
		printf("File Does Not Exist.\n");
	else
	{
		fscanf(filePtr1, "%d %s %d",&rollNumber1, str1, &age1);
		fclose(filePtr1);
		printf("Data Retrieved From File : \n\tRoll Number : %d\n\tName : %s\n\tAge : %d\n", rollNumber1, str1, age1);
	}
	fclose(filePtr1);
	return 0;

}