// Points award according to the number of books purchased per month
// 0 books ---> 0 points
// 1 books ---> 5 points
// 2 books ---> 15 points
// 3 books ---> 30 points
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//Declaration of variables

	int books,points;
	books = points = 0;

	//Taking Input from user

	printf("Enter number of books purchased in this month : ");
	scanf("%d", &books);

	//Processing and Displaying Output

	if (books == 1)
	{
		points = 5;
		printf("Number of Points awarded are : %d", points);
	
	}
	else if (books == 2)
	{
		points = 15;
		printf("Number of Points awarded are : %d", points);

	}
	else if (books >= 3)
	{
		points = 30;
		printf("Number of Points awarded are : %d", points);
	}
	else
	{
		printf("Invalid Input.");
	}


	return 0;
}