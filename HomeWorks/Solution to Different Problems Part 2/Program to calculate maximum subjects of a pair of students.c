// This program will calculate the max number of subjects of a pair of students using binary inputs and print the max subjects and their pair number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0, s = 0;
	printf("Enter number of students and then number of subjects : ");
	do
	{
		scanf("%d", &s);
	} while (s <= 0);
	do
	{
		scanf("%d", &a);
	} while (a <= 0);
	int arr[100][100] = { 0 };
	printf("Enter subjects in binary form : \n");
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	int sub = 0;
	int max = 0;
	int num = 0;
	int location = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			sub = 0;
			for (int k = 0; k < a; k++)
			{
				if (arr[i][k] == 1 || arr[j][k] == 1)
				{
					sub++;
				}
			}
			location++;
			if (sub > max)
			{
				max = sub;
				num = location;
			}
		}
	}
	printf("\nMaximum Subjects : %d\nPair Number : %d\n", max, num);

	return 0;
}