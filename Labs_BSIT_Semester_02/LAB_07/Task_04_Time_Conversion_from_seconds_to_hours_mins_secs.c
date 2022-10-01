// Program to convert time given in second to hours minute and second using call by reference
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void convertTime(int a, int *sec, int *min, int *hour);
int main()
{
	// Declaration of variables
	int sec, min, hour;
	long int seconds;
	seconds = 0;
	// Taking inputs from user
	do
	{
		printf("Enter time in seconds : ");
		scanf("%ld", &seconds);
		if (seconds <= 0)
			printf("Invalid Input ! ");
	} while (seconds <= 0);
	// Processing
	
	convertTime(seconds, &sec, &min, &hour);
	
	// Displaying Output
	printf("Hours = %d\n", hour);
	printf("Minutes = %d\n", min);
	printf("Seconds = %d\n", sec);

	return 0;

}
void convertTime(int a, int *sec, int *min, int *hour)
{
	*hour = a / 3600;
	a = a % 3600;
	*min = a / 60;
	a = a % 60;
	*sec = a;
}

