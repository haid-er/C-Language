//Task 8 The area dia and circumference of circle
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//variable declaration
	float radius, diameter, area, circum;
	//Taking input from user
	printf("Please Enter radius of Circle : ");
	scanf("%f", &radius);
	diameter = radius * 2;
	area = 3.14 * radius * radius;
	circum = 2 * 3.14 * radius;
	//printing the output
	printf("The diameter of circle : %.1f\n", diameter);
	printf("The area of circle : %.1f\n", area);
	printf("The circumference of circle : %.1f\n", circum);

	return 0;

}