// Program to generate random number and storing them in array

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	// THis function will randomize number each time of execution

	srand(time(0));
	
	// Declaration of variables

	int randomNumberArray[SIZE] = { 0 };

	// generating and storing random number in array

	for (int i = 0; i < SIZE; i++)
	{
		randomNumberArray[i] = rand();
	}
	// Displaying Output

	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0)
			printf("ARRAY   : ");
		
		printf("%d\t", randomNumberArray[i]);
	}

	return 0;

}