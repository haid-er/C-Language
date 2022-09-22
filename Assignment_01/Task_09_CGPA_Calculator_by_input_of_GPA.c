// Program to calculate CGPA of the given semester
// Program should input the roll number and number of semesters by user
// And then take input for all given semester
// Program should calculate and display CGPA with given roll number

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int rollNumber, noOfSemesters, temp;
	float gpa, cgpa,sum;
	rollNumber = noOfSemesters = cgpa = gpa = temp = sum = 0;
	// rollNumber will be used to take roll number from the user
	// noOfSemester will be used to take number of semester from the user
	// temp will be used if needed
	// gpa will be used to take gpa in each semester
	// sum is used to add the gpa of all semesters
	// cgpa will be used to store the CGPA of the degree

	// Taking inputs from user
	// these loops will iterate unless user enter the valid value

	do
	{
		printf("Enter your Roll number : ");
		scanf("%d", &rollNumber);
		if (rollNumber <= 0 )
			printf("Invalid Input ! ");
	} while (rollNumber <= 0);
	do
	{
		printf("Enter Number of Semesters : ");
		scanf("%d", &noOfSemesters);
		if (noOfSemesters <= 0 || noOfSemesters > 8)
			printf("Invalid Input ! ");
	} while (noOfSemesters <= 0 || noOfSemesters > 8);

	// Processing and taking inputs of all semesters

	for (int i = 1; i <= noOfSemesters; i++)
	{
		do
		{
			printf("Enter GPA of semester %d : ", i);
			scanf("%f", &gpa);
			if (gpa < 0 || gpa>4)
				printf("Invalid Input ! ");
		} while (gpa < 0 || gpa>4);
			sum = sum + gpa;
	}
	cgpa = sum / noOfSemesters;

	// Displaying Output

	printf("\n***************** Result Card ********************");
	printf("\nRoll Number : %d", rollNumber);
	printf("\nCGPA = %.2f", cgpa);

	return 0;

}