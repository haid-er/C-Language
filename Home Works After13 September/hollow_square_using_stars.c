// Program to display hollow square using stars
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int length = 0;
	// Taking inputs from user
	printf("Enter length of side of square  : ");
	scanf("%d", &length);
	// Displaying Output
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 || i == length)
				printf("*");
			else
				if (j == 1 || j == length)
					printf("*");
				else
					printf(" ");

		}
		printf("\n");
	}

	return 0;

}