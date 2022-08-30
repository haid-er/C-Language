//Task 5 Series of Alphabet
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//variable declaration
	char alpha, s1, s2, s3, s4, s5;
	//Taking input from user
	printf("Enter the first ALPHABET of series : ");
	scanf("%c", &alpha);
	s1 = alpha+1;
	s2 = s1 + 1;
	s3 = s2 + 1;
	s4 = s3 + 1;
	s5 = s4 + 1;
	//PRINTING OUTPUT
	printf("The first five numbers of series are : %c,%c,%c,%c,%c", s1, s2, s3, s4, s5);
	return 0;

}