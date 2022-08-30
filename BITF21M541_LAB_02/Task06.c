//Task 6 SWAPING NUMBERS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//VARIBALE DECLARATION
	int num1,num2,temp;
	//TAKING OUTPUT
	printf("Pleasre Enter First Integer : ");
	scanf("%d", &num1);
	printf("Pleasre Enter second Integer : ");
	scanf("%d", &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	//PRINTING OUTPUT
	printf("After Swap\n");
	printf("First Integer : %d\n", num1);
	printf("Second Integer : %d", num2);

	return 0;

}