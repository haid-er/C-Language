// Program to find total charges according to given plan
// Adult membership fee per month is 20$
// Child membership fee per month is 10$
// Senior membership fee per month is 30$

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int choice, months, charges;
	printf("\t Health Club Membership Menu \n");
	printf("1. Adult Membership \n");
	printf("2. Child Membership \n");
	printf("3. Senior Membership \n");
	printf("Enter your Choice : ");
	scanf("%d", &choice);
	printf("Enter how many Months : ");
	scanf("%d", &months);
	if (choice == 1)
	{
		charges = months * 20;
		printf("The total Charges are : $%d", charges);
	}
	else if (choice == 2)
	{
		charges = months * 10;
		printf("The total Charges are : $%d", charges);
	}
	else if (choice == 3)
	{
		charges = months * 30;
		printf("The total Charges are : $%d", charges);		
	}
	else
	{
		printf("Invalid Input.");
	}
	return 0;
}