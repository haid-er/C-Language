// Program to calculate following
// 3 parking hours = 2 dollars
// more than 3 adds 0.5dollar for each hour
// three customers only
// 24 hours parking maximum charges 10 dollar
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float calculateCharges(float time);
displayCharges(int a, float time);

int main()
{
	
	// Declaration of variables

	float t1, t2, t3 ;
	t1 = t2 = t3 = 0;
	
	// Here t1 t2 and t3 will be used to take 3 inputs for time of parking of three cars
	
	
	// Taking input from user
	// these loops will iterate again and again until user give the valid value

	do
	{
		printf("Enter time of 1st Car : ");
		scanf("%f", &t1);
		if (t1 <= 0 || t1 > 24)
			printf("Invalid Input ! ");
	} while (t1 <= 0 || t1 > 24);
	do
	{
		printf("Enter time of 2st Car : ");
		scanf("%f", &t2);
		if (t2 <= 0 || t2 > 24)
			printf("Invalid Input ! ");
	} while (t2 <= 0 || t2 > 24);
	do
	{
		printf("Enter time of 3st Car : ");
		scanf("%f", &t3);
		if (t3 <= 0 || t3 > 24)
			printf("Invalid Input ! ");
	} while (t3 <= 0 || t3 > 24);
	

	// Printing The output


	printf("%6s%12s%15s\n", "Car", "Hours", "charges");
	displayCharges(1, t1);
	displayCharges(2, t2);
	displayCharges(3, t3);

	return 0;

}

// This function will be used to take valid input from user



// This function will print the car serial number time parked and charges

displayCharges(int a, float time)
{
	printf("%6d%12.1f%14.2f$\n", a, time, calculateCharges(time));
}

// This function will be used to calculate the charges using value of t

float calculateCharges(float time)
{
	if (time <= 3)
	{
		return 2;
	}
	else if (time == 24)
	{
		return 10;
	}
	else
	{
		return 2 + ((time - 3) * 0.5);
	}
}