// Program to make square shape using stars
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int length = 0;
	printf("Please enter length of side of square : ");
	scanf("%d", &length);
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= length; j++)
			printf("*");
		printf("\n");
	}

	return 0;

}