// Program to multiply two numbers like multiplication by hand without multiply sign
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	long int num1, num2, product,tempnum1 ,mainsum;
	int digit1, digit2, remainder , sum ,sum1 ;
	long int counter , multiplier;
	num1 = num2 = product = digit1 = digit2 = remainder = tempnum1 = mainsum = sum = sum1 = 0;
	counter = multiplier = 1;
	
	// we will use num1 for first number and num2 for second number
	// product variable will be used for result of multiplication of num1 and num2
	// tempnum1 have same value of num1
	// mainsum have the value resulted in multiplication of num1 with digit of num2
	// digit1 and digit2 is used to take digit of num1 and num2 respectively
	// remainder variable will be used as the carry number
	// sum variable will be used to store the value resulted in the multiplication of digit of num1  and digit of num2
	// Counter and multiplier both are used as iteration variables
	// multiplier is multiplied by 10 in each iteration outer loop and used to determine the value of product
	// counter will be multiplied by 10 in each iteration of inner loop to determine the value of the sum/result of num1 with digit of second number
	
	// Taking inputs from user
	// These loops will take input from user unless the user enter a value greater than 0

	do
	{
		printf("Enter first Number : ");
		scanf("%ld", &num1);
		if (num1 <= 0)
			printf("Invalid Input ! ");

	} while (num1 <= 0);
	do
	{
		printf("Enter second Number : ");
		scanf("%ld", &num2);
		if (num2 <= 0)
			printf("Invalid Input ! ");

	} while (num2 <= 0);

	// Processing and Displaying output

	// Following statement will be used to print number 1 and number 2 and a line in same method like multiplication by hand

	printf("\t\t%9d\n\t    *\n\t\t%9d\n\t   ---------------\n", num1, num2);
	
	// Outer loop will repete again and again unless the value of num2 will be zero

	while (num2 != 0)
	{
		digit2 = num2 % 10;
		num2 = num2 / 10;
		tempnum1 = num1;
		mainsum = sum1 = remainder = 0;
		multiplier = 1;
		// This inner while loop will iteration unless tempnum1 becomes equal to zero and if the remainder is not zero it means the loop will iterate for it to add it in next step as carry
		// here is the logic that why we use num1 and tempnum1 both for same value because we have to assign the original num1 value to tempnum1 in each iteration and after each iteration of inner loop tempnum1 becomes equal zero

		while (tempnum1 != 0 || remainder != 0)
		{
			digit1 = tempnum1 % 10;
			tempnum1 = tempnum1 / 10;
			sum = 0;
			// This for loop will be used to multiply the digit1 and digit2 of num1 and num2 respectively without using multipy symbol
			for (int i = 1; i <= digit1; i++)
			{
				sum = sum + digit2;
			}
			if(remainder>0)
			{

				sum = sum + remainder;
				// we will assign zero to remainder after adding it to the sum because if we don't assign zero there may be the chance that remainder will add to the next iteration's sum  which results in logical error
				remainder = 0;
			}
			// we will calculate remainder from the term greater equal 10 as carry for next iteration
			if (sum >= 10)
			{
				sum1 = sum % 10;
				remainder = sum / 10;
			}
			else
				sum1 = sum;
			mainsum = mainsum + (sum1 * multiplier);
			multiplier = multiplier * 10;
		}
		// This statement will print each multiplication resut of num1 and digit of number 2
			printf("\t\t%9ld\n", mainsum*counter);
		product = product + (mainsum * counter);
		counter = counter * 10;
	}
	// this statement will print the total multiplication result of the number 1 and number 2
	printf("\t   ---------------\n\t\t%9ld", product);


	return 0;

}
