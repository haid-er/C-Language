// program to calculate minutes(time) a student meet to other and then calculate total time for meeting
// The student is shown with > and < symbol
// and >>~~~~< has two student who meet with < student each students 1 minute so the output of total minutes will be 4
// similarly <>><<< should have the output of 12 because first student will not meet any one 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
	int n = 0;
	printf("Enter number of inputs : ");
	do
	{
		scanf("%d", &n);
	} while (n <= 0);
	int length = 0;
	int count = 0, times = 0;
	int* num = (int*)malloc(sizeof(int) * n);
	char str[100] = { NULL };
	printf("Enter Inputs : ");
	for (int k = 0; k < n; k++)
	{
		times = 0;
		scanf("%s", str);
		length = strlen(str);
		for (int i = 0; i < length; i++)
		{
			count = 0;
			if (str[i] == '>')
			{
				for (int j = i; j < length; j++)
				{
					if (str[j] == '<')
					{
						count++;
					}
				}
				times = times + (count * 2);
			}
		}
		num[k] = times;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}