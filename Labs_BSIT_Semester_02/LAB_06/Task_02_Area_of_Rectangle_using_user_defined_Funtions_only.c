// Program to calculate the area of Rectangle using below functions
/*
 bool isValid (int num, int start, int end);
	This function will return true if the value of the variable num is in the range from start to end (both
	inclusive), and it should return false otherwise. There should be NO input or output performed within this
	function.
 int getLength ();
	This function will prompt the user to enter the length of a rectangle in the range from 5 to 500 (both
	inclusive). In case of invalid input, this function should keep prompting the user again and again till the
	user provides valid input. This function MUST use the function isValid(�) (which you have
	implemented above) to validate the input. The valid input provided by user should be returned from this
	function.
 int getWidth ();
	This function will prompt the user to enter the width of a rectangle in the range from 8 to 200 (both
	inclusive). In case of invalid input, this function should keep prompting the user again and again till the
	user provides valid input. This function MUST use the function isValid(�) (which you have
	implemented above) to validate the input. The valid input provided by user should be returned from this
	function.
 int calculateArea (int length, int width);
	This function will receive the length and width of a rectangle (see the two parameters). It should calculate
	and return it to the calling program. There should be NO input or output performed within this function.
 void displayArea (int area);
	This function will display the area of the rectangle on screen. Use meaningful label(s) in output.

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int getLength();
int getWidth();
int calculateArea(int a , int b);
void displayArea(int c);
int isValid(int x, int y, int z);

int main()
{
	//Calling functions
	displayArea(calculateArea(getWidth(), getLength()));
	return 0;
}

// This function will be used to check if the input is valid and in between the given range

int isValid(int x, int y, int z)
{
	int valid;
	if (x >= y && x <= z)
	{
		valid = 0;
	}
	else
	{
		valid = 1;
	}
	return valid;
}

// This function will be used to get a valid length from user between 5 and 500

int getLength()
{
	int length;
	length = 0;
	do
	{

		printf("Enter any Length (5>length>500) : ");
		scanf("%d", &length);
	} while (isValid(length, 5,500));
	return length;
}

// This function will be used to get a valid width from user between 4 and 200

int getWidth()
{
	int width = 0;
	do
	{
		printf("Enter any Width (200>length>8) : ");
		scanf("%d", &width);
	} while (isValid(width, 8, 200));
	return width;

}

// This function will be used to calculate the area of rectangle

int calculateArea(int a, int b)
{
	return (a * b);
}

// This funtion will be used to Displaying Area

void displayArea(int c)
{
	printf("Area of Rectangle = %d", c);
}
