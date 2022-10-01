#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void FibonacciSeries(long long int num);
int main()
{
	long long int number;
	printf("Enter number to print number of terms : ");
	scanf("%lld", &number);
	FibonacciSeries(number);

	return 0;
}
void FibonacciSeries(long long int num)
{
	long long int n1 = 0, n2 = 1, n3 = 0;
	printf("%lld\t%lld\t", n1, n2);

	for (int i = 2; i <= num; i++)
	{
		n3 = n1 + n2;
		printf("%lld\t", n3);
		n1 = n2;
		n2 = n3;
	}
}