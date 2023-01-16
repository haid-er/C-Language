//Car mileage in KMPL
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float km, liters, mileage;
	printf("Please Enter number of kilmeters driven : ");
	scanf("%f", &km);
	printf("Please Enter liters of petrol used : ");
	scanf("%f", &liters);
	mileage = km / liters;
	printf("KMPL of car = %.3f", mileage);

	return 0;
}