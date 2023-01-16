// Program to calculate size of array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	

	int array[100] = { 0,1,2,3,4,5,6,7,8,9 };
	unsigned long int ar[10];
	size_t n = sizeof(ar);
	
	printf("Size of Array = %d\n", sizeof(array));
	printf("Size of array 2 = %d", n);


	return 0;

}