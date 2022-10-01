// Program to calculate area of circle using functions
// Program should use four function to calculate area of cicle which are as follows
// 1 -->  int isValid(double num,double start,double end)
// 2 -->  int getRadius()
// 3 -->  void calculateArea(int radius, double *area);
// 4 -->  void displayArea(int area);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Functions Declaration

int isValid(double num, double start, double end);
double getRadius();
void calculateArea(double radius, double *area);
void displayArea(double* area);

// Global Variable
double PI = 3.141592654;

// main function

int main()
{
	double area = 0;
	//fucntion call by reference
	calculateArea(getRadius(), &area);
	displayArea(&area);
	return 0;
}

// Function Definitions

// this function will check if the given number is in the range of start and end
int isValid(double num, double start, double end)
{
	int res;
	if (num >= start && num <= end)
	{
		res = 0;
	}
	else
	{
		printf("Invalid Input ! ");
		res = 1;
	}
	return res;
}
// this function will get value for radius and check its validation and return it as double
double getRadius()
{
	double radius = 0;
	do
	{
		printf("Enter radius of circle in interger value between 10 and 50 : ");
		scanf("%lf", &radius);
	} while (isValid(radius, 10.0, 50.0));
	return radius;
}
// THis function will only get values and calculate area and return nothing this function will store the area in the area varibale of main function
void calculateArea(double radius, double *area)
{
	*area = PI * radius * radius;
}
// This function will take the value from address of area varibale and print it on screen
void displayArea(double* area)
{
	printf("Area of circle = %lf", *area);
}