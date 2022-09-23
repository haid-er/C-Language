// Program to calculate falling distance using Function

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float fallingDistance(int a, float g);

int main()
{
	// Variable declaration

	float g = 9.8;

	// for loop will call the function for 10 times and give value from 1 to 10 as perameter of function

	for (int t = 1; t <= 10; t++)
	{
		printf("Falling Distance for time %d : %.3f meters\n", t, fallingDistance(t,g));
	}
	return 0;

}

// This function will be used to calculate the falling distance of the object using time and value of g which is 9.8

float fallingDistance(int a, float g)
{
	float res = 0;
	res = 0.5 * g * (a * a);
	return res;
}