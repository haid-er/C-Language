//Area of Rectangle
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,c;
	printf("Enter length : ");
	scanf("%d", &a);
	printf("Enter width : ");
	scanf("%d", &b);
	c = a * b;
	printf("Area of Rectangle : %d", c);
	return 0;
}