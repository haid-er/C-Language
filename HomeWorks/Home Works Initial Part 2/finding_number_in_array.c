// Program to find number exist in array or not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
int main()
{
	int numArray[SIZE] = { 0 };
	int flag = 0, findNum = 11;
	for (int i = 0; i < SIZE; i++)
	{
		numArray[i] = i;
	}
	printf("Enter any Number : ");
	scanf("%d", &findNum);
	for (int i = 0; i < SIZE; i++)
	{
		if (numArray[i] == findNum)
			flag = 1;
	}
	if (flag == 1)
		printf("Number exist in Array.");
	else
		printf("Number does not exist in Array.");
	return 0;
}