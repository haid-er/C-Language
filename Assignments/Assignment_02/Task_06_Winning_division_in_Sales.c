// Program to which get sales of 4 different divisons with validation
// Then it should check the highest sales of division and tthen  print them

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Function Declaration

double getSales(int a);
void findHighest(double a, double b, double c, double d);
double isValid(double sale);

// main function

int main()
{
	// declaration of variables
	
	double salesDivision1, salesDivision2, salesDivision3, salesDivision4;
	
	// Assigning values to varibales given by user by using function

	salesDivision1 = getSales(1);
	salesDivision2 = getSales(2);
	salesDivision3 = getSales(3);
	salesDivision4 = getSales(4);

	// Passing all inputs to the function as parameter to check the largest sale

	findHighest(salesDivision1, salesDivision2, salesDivision3, salesDivision4);

	return 0;

}

// This function will get a value from user for the sales and then check its validation using isvalid funtion

double getSales(int a)
{
	double sales = 0.0;
		printf("Enter sales of Division %d : ", a);
		scanf("%lf", &sales);
		sales = isValid(sales);
}

// This function will get value and check if it is greater than 0.0$

double isValid(double sale)
{
	if (sale > 0.0)
		return sale;
	else
	{
		do
		{
			printf("Invalid Input ! Enter any other amount : ");
			scanf("%lf", &sale);
		} while (sale <= 0.0);
	return sale;
	}
}

// This function will take 4 values for the sales of division and then check them and print the highest value

void findHighest(double a, double b, double c, double d)
{
	if (a > b && a > c && a > d)
		printf("Sales of Division 1 are Highest = %.3lf$", a);
	else if (b > a && b > c && b > d)
		printf("Sales of Division 2 are Highest = %.3lf$", b);
	else if (c > a && c > b && c > d)
		printf("Sales of Division 3 are Highest = %.3lf$", c);
	else
		printf("Sales of Division 4 are Highest = %.3lf$", d);
}