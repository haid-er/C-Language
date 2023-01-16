//Task 4 SERIES OF NUMBERS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//variable declaration
	int num, difference,s1,s2,s3,s4,s5;
	//Taking input from user
	printf("Enter the first number of series : ");
	scanf("%d", &num);
	printf("The difference of consective number : ");
	scanf("%d", &difference);
	s1 = num;
	s2 = num + difference;
	s3 = s2 + difference;
	s4 = s3 + difference;
	s5 = s4 + difference;
	//PRINTING OUTPUT
	printf("The first five numbers of series are : %d,%d,%d,%d,%d",s1,s2,s3,s4,s5);
	return 0;

}