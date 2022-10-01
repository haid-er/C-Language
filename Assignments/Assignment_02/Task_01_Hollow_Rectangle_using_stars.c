// Program to display hollow rectangle using star according to the given input of the height and width
// Hegith should be atLeast 4 and width should be at least 6
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Functions declaration 

int getHeight();
int getWidth();
int isValid(int num, int range);
void display(int h, int w);

// Main Function

int main()
{

	// Variable declaration

	int width, height;
	width = height = 0;

	// Function calls

	width = getWidth();
	height = getHeight();
	display(width, height);
	return 0;

}

// Functions Definition


// This function will get height from user check its validation and return the value as integer
int getHeight()
{
	int h;
	printf("Enter height (>=4) : ");
	scanf("%d", &h);
	h = isValid(h, 4);
	return h;
}

// This function will get height from user and check its validation and return the value as integer
int getWidth()
{
	int w;
	printf("Enter width (>=6) : ");
	scanf("%d", &w);
	w = isValid(w, 6);
	return w;
}

// This function have two parameters and it will check if the passed first parameter is in range of 2nd parameter
int isValid(int num , int range)
{
	if (num >= range)
		return num;
	else
	{
		while (!(num >= range))
		{
			printf("Invalid Input ! Enter any other Number : ");
			scanf("%d", &num);
		}
		return num;
	}
}

// This display function have two parameters and it will print hollow rectangle pattern according to passed height and width
void display(int w, int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			if (i == 1 || i == h || j == 1 || j == w)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}