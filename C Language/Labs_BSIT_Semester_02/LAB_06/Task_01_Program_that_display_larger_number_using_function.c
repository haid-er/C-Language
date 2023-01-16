// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int maximum(int a, int b);

int main()
{
	// Declaration of variables

	int num1, num2, res;
	num1 = num2 = res = 0;

	// Taking inputs from user
	do
	{

		printf("Enter any Number : ");
		scanf("%d", &num1);
		printf("Enter any Number : ");
		scanf("%d", &num2);
		if(num1==num2)
			printf("Both Numbers are Equal !\n");
	} while (num1 == num2);
	// Processing the output

	res = maximum(num1, num2);

	// Displaying Output

	printf("%d is Larger.", res);

	return 0;

}
int maximum(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}