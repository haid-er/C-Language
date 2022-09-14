// Program for salary management using switch statement
// Deduction rule 
// If salary is less than 10000 then no decduction 
// If salary is greater than 10000 and less than 20000 then deduction is 1000
// If salary is greater is greater than 20000 then deduction is 7%
// If

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	
	// Declaration of variables
	
	int salary = 0, a;
	
	// Taking inputs from user
	
	printf("Please enter the salary : ");
	scanf("%d", &salary);
	
	// Processing

	if (salary <= 10000)
		a = 1;
	else if (salary <= 20000)
		a = 2;
	else
		a = 3;
	// Displaying Output
	switch (a)
	{
		case 1:
			printf("Net Payable ( Salary - Deduction ) = %d - %d = %d", salary, 0, salary);
			break;
		case 2:
			printf("Net Payable ( Salary - Deduction ) = %d - %d = %d", salary, 1000, salary-1000);
			break;
		case 3:
			printf("Net Payable ( Salary - Deduction ) = %d - %.0f = %.0f", salary, salary * 0.07, salary - salary*0.07);
			break;
	}
	return 0;
}
