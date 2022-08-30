//Area of Circle
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float r, a;
	printf("Enter radius of circle : ");
	scanf("%f", &r);
	a = 3.14 * r * r;
	printf("Area of Circle : %f", a);
	return 0;
}