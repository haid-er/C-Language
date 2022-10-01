// Program to display windows pattern using plus sign according to given width and height

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Functions declaration 

int getHeight();
int getWidth();
int isValid(int num, int range);
void displayWindow(int w, int h);

// Main function

int main()
{
	// Variable declaration

	int width, height;
	
	// Assigning values to varibale using function

	width = getWidth();
	height = getHeight();

	// Passing these values to display function

	displayWindow(width, height);
	return 0;

}

// This function will get height from the user and then check its value validation using isValid function

int getHeight()
{
	int h;
	printf("Enter height in odd number (>=3) : ");
	scanf("%d", &h);
	h = isValid(h, 3);
	return h;
}

// This function will get width from the user and then check its value validation using isValid function

int getWidth()
{
	int w;
	printf("Enter width in odd number (>=5) : ");
	scanf("%d", &w);
	w = isValid(w, 5);
	return w;
}

// This funtion will two values as parameter and it check the value validation according to the given parameter

int isValid(int num, int range)
{
	if (num >= range && num % 2 != 0)
		return num;
	else
	{
		while (!(num >= range && num % 2 != 0))
		{
			printf("Invalid Input ! Enter any other Number : ");
			scanf("%d", &num);
		}
		return num;
	}
}

// DisplayWindow funtion basically get two value means height and width as perameter and then print window pattern according to the width and height

void displayWindow(int w, int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			if (!(i % 2 == 0))
			{
				printf("+");
			}
			else
			{
				printf("+ ");
				j++;
			}
		}
		printf("\n");
	}
}
