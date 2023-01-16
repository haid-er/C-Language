// Program to display Pass and Fail according to the marks if marks are greater than or equal to 50 display pass otherwise display fail

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//Variabe declaration

	int marks;
	
	//Taking input from user

	printf("Enter your marks : ");
	scanf("%d", &marks);

	// Processing and displaying output

	if (marks >= 0 && marks <= 100)
	{
		if (marks >= 50)
		{
			printf("PASS");
		}
		else
		{
			printf("FAIL");
		}
	}
	else
	{
		printf("Invalid Input");
	}
	
	return 0;
}