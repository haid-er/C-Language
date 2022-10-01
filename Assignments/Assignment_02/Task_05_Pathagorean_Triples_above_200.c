// Program that display pathagorean Triples below 200 using nested loop

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Function Declaration

void checkRightTriangle(int a, int b, int c);

// Main function

int main()
{
	// This loop will iterate for 200 times
	for (int i = 1; i <= 200 ; i++)
	{
		// This loop will iterate for 200 times for each iteration of outer loop means total 40000 times
		for (int j = i+1; j <= 200 ; j++)
		{
			// This loop will iterate for 200 times for each iteration of middle loop and 40000 times for each iteration of outer loop means 8000000 times total
			for (int k = j+1; k <= 200; k++)
			{
				checkRightTriangle(i, j, k);
			}
		}
	}
	return 0;

}
// this function will check if the passed three parameters are sides of right triangle
// it will print if the sides are pathagorean triple otherwise it will do nothing
void checkRightTriangle(int a, int b, int c)
{
	
		
		if (a * a == b * b + c * c)
			printf("Hypotenuse = %3d   Sides = %3d , %3d\n", a, b, c);
		if (b * b == a * a + c * c)
			printf("Hypotenuse = %3d   Sides = %3d , %3d\n", b, a, c);
		if (c * c == a * a + b * b)
			printf("Hypotenuse = %3d   Sides = %3d , %3d\n", c, a, b);
		
		
}