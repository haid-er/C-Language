// Determining right triangle using pathagorous theorem

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	float side1, side2, side3;
	side1 = side2 = side3 = 0;

	//Taking input from user 

	printf("Enter first side : ");
	scanf("%f", &side1);
	printf("Enter second side : ");
	scanf("%f", &side2);
	printf("Enter third side : ");
	scanf("%f", &side3);

	//Processing and displaying

	side1 = side1 * side1;
	side2 = side2 * side2;
	side3 = side3 * side3;
	if (side1 == side2 + side3)
	{
		printf("Right Triangle");
	}
	else if (side2 == side3 + side1)
	{
		printf("Right Triangle");

	}
	else if (side3 == side1 + side2)
	{
		printf("Right Triangle");
	}
	else
	{
		printf("Not a right triangle .");
	}
	return 0;

}