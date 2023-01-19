// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void f1(int *n)
{
	scanf("%d",n);
}

int main()
{
	int a =0;
	f1(&a);
	printf("a  =  %d\n",a);

	return 0;

}