// Program find LCM of two given integers
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int num1, num2, product, lcm, temp;
	num1 = num2 = product = lcm = temp = 0;
	// num1 and num2 will be used to take two values from user
	// product will be used to store product of num1 and num2
	// lcm will store the number which is least common multiple of num1 and num2
	// temp will be used as starting value of loop and will be assign smaller value from num1 and num2

	// Taking inputs from user
	// These loops will iterate again and again untill the user enters the valid value

	do
	{
		printf("Enter first Number : ");
		scanf("%d", &num1);
		if (num1 <= 0)
			printf("Invaild Input ! ");
	} while (num1 <= 0);
	do
	{
		printf("Enter Second Number : ");
		scanf("%d", &num2);
		if (num2 <= 0)
			printf("Invaild Input ! ");
	} while (num2 <= 0);


	// Processing and Displaying Output

	product = num1 * num2;
	if (num1 < num2)
		temp = num1;
	else
		temp = num2;

	// We use temp variable to initilize counter of for loop to done our task in less iterations
	
	for (int i = temp; i <= product; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			printf("\nLCM is = %d\n", i);
			break;
		}
	}



	return 0;

}