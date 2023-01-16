//Task 3 Prgram to convert Minutes to seconds
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//VARIABLE INITIALIZATION
	int min, sec;
	printf("Enter secounds : ");
	scanf("%d", &sec);
	min = sec / 60;
	sec = sec % 60;
	//PRINTING OUTPUT
	printf("Its evaluate to:\nMiutes : %d\nSecond : %d", min, sec);

	return 0;

}