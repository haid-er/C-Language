// Program to display twin prime upto the given number N
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	int num , temp, prime1, prime2;
	temp = num = prime1 = prime2 = 0;
	// num will be used to take the ending limit of the twins
	// temp will be used to check if the number is prime
	// prime1 will store prime number while iteration and prime2 will store previous prime number


	// Taking inputs from user
	// this loop iterate again and again unless the user enter the valid value

	do
	{
		printf("Enter any number : ");
		scanf("%d", &num);
		if (num >= 2 && num <= 4)
			printf("No twin prime till the given number ! \n");
		if (num <= 1)
			printf("Invalid Input ! \n");
	} while (num <= 4);

	// Processing and Displaying Output

	printf("Twin prime between 2 and %d are : \n",num);
	for (int i = 3; i <= num; i++)
	{
		temp = 0;
		for (int j = 1; j <= i ; j++)
		{
			if (i % j == 0)
				temp++;
		}
		if (i == 3)
		{
			prime1 = prime2 = i;
		}
		prime2 = prime1;
		if (temp == 2)
		{
			prime1 = i;
		}
		
		if (prime2 + 2 == prime1)
			printf("(%d , %d)\n", prime2, prime1);


	}



	return 0;

}