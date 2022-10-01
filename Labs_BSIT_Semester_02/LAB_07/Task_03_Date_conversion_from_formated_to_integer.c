// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long int convertDate(days, months, years);
int main()
{
	// Declaration of variables

	int day, month, year;
	long int date;
	day = month = year = date = 0;

	// Taking inputs from user

	do
	{
		printf("Enter day : ");
		scanf("%d", &day);
		if (day <= 0 || day>31)
			printf("Invalid Input ! ");
	} while (day <= 0 || day > 31);

	do
	{
		printf("Enter Month : ");
		scanf("%d", &month);
		if (month <= 0 || month > 12)
			printf("Invalid Input ! ");
	} while (month <= 0 || month > 12);
	do
	{
		printf("Enter year : ");
		scanf("%d", &year);
		if (year <= 0)
			printf("Invalid Input ! ");
	} while (year <= 0);

	// Processing

	date = convertDate(day,month,year);

	// Displaying Output
	printf("DATE = %ld", date);
	
	return 0;

}
long int convertDate(days, months, years)
{
	return years * 10000 + months * 100 + days;
}