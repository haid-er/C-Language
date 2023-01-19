// Program to find score of performer
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float takeInput(int n);
void calcScore(float a, float b, float c, float d, float e);
float findLowest(float a, float b, float c, float d, float e);
float findHighest(float a, float b, float c, float d, float e);
int main()
{
	// Declaration of variables

	float s1, s2, s3, s4, s5, a, b, c, d, e;
	s1 = s2 = s3 = s4 = s5 = 0.0;
	// Taking inputs from user
	a = takeInput(1);
	b = takeInput(2);
	c = takeInput(3);
	d = takeInput(4);
	e = takeInput(5);
	// Processing
	calcScore(a, b, c, d, e);
	// Displaying Output


	return 0;

}
float takeInput(int n)
{
	float a = 0;
	do
	{
		printf("Enter score from Judge %d : ", n);
		scanf("%f", &a);
		if (a < 0 || a > 10)
			printf("Invalid Input ! ");
	} while (a < 0 || a > 10);
	return a;
}
void calcScore(float a, float b, float c, float d, float e)
{
	float h = findHighest(a, b, c, d, e);
	float l = findLowest(a, b, c, d, e);
	float avg = a + b + c + d + e;
	avg = avg - h - l;
	printf("Average Score of contestent : %.3f", avg/3);
}
float findLowest(float a, float b, float c, float d, float e)
{
	if (a < b && a < c && a < d && a < e)
		return a;
	else if (b < a && b < c && b < d && b < e)
		return b;
	else if (c < a && c < b && c < d && c < e)
		return c;
	else if (d < b && d < e && d < c && d < a)
		return d;
	else
		return e;
}
float findHighest(float a, float b, float c, float d, float e)
{
	if (a > b && a > c && a > d && a > e)
		return a;
	else if (b > a && b > c && b > d && b > e)
		return b;
	else if (c > a && c > b && c > d && c > e)
		return c;
	else if (d > b && d > e && d > c && d > d)
		return d;
	else
		return e;
}