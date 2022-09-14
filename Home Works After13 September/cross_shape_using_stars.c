// Program to display cross shape using stars

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int width = 0 , temp;
	// Taking inputs from user
	printf("Enter width : ");
	scanf("%d", &width);
	temp = width+1;
	// Displaying Output
	for (int i = 1; i <= width; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			if (i == 1 || i == width)
			{
				if (j == 1 || j == width)
					printf("*");
				else
					printf(" ");
			}
			else
			{
				if (j == i || j == (temp-i))
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;

}