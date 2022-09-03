// Area comparsion of two rectangles
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//Declaration of variables
	
	float width1, length1, width2, length2, area1, area2;
	width1 = width2 = length1 = length2 = area1 = area2 = 0;
	
	//Taking Input from user

	printf("Enter the length of first rectangle : ");
	scanf("%f", &length1);
	printf("Enter the width of first rectangle : ");
	scanf("%f", &width1);
	printf("Enter the length of second rectangle : ");
	scanf("%f", &length2);
	printf("Enter the width of second rectangle : ");
	scanf("%f", &width2);

	//Processing Output

	area1 = width1 * length1;
	area2 = width2 * length2;
	
	//Displaying Output

	if (area1 > area2)
	{
		printf("The Area of first rectangle is larger than the area of second rectangle.");
	}
	else if (area1 < area2)
	{
		printf("The Area of second rectangle is larger than the area of first rectangle.");
	}
	else
	{
		printf("The Area of first rectangle is equal to the area of second rectangle.");
	}
		


	return 0;
}