// Program to display series of number with common difference
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int a, d, n;
	// Taking inputs from user
	printf("Enter Number of terms : ");
	scanf("%d", &n);
	printf("Enter first term of series : ");
	scanf("%d", &a);
	printf("Enter common differnece : ");
	scanf("%d", &d);

	// Processing and Displaying Output

	for (int i = 1; i <= n; i++)
	{
		printf("%d \t", a);
		a = a + d; 
	}

	return 0;

}