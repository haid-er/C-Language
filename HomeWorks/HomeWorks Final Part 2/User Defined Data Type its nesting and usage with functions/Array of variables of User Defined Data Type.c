// Program to make intialize and then display an array of user variables of user defined datatype
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 3
struct Student
{
	char name[30];
	char rollNumber[15];
	int age;
	float cgpa;
};
int main()
{
	// Declaration of variables

	struct Student std[SIZE];

	// Taking inputs from user
	for(int i = 0 ; i < SIZE ; i++)
	{
		printf("Enter your name : ");
		gets(std[i].name);
		printf("Enter your roll number : ");
		gets(std[i].rollNumber);
		printf("Enter your age : ");
		scanf("%d", &std[i].age);
		printf("Enter your cpga : ");
		scanf("%f", &std[i].cgpa);
		getchar();
	}

	// Displaying Output
	for (int i = 0; i < SIZE; i++)
	{
		printf("\n\n\t\tStudent %d\n\n", i + 1);
		printf("Name : %s\n", (std + i)->name);				// We may use arrow and dot notation for accessing any variable
		printf("Roll Number : %s\n", (std + i)->rollNumber);	//  But when we use pointer notation  then we must user arrow notation so that there are less chances of error due to operator precedence
		printf("Age of Student : %d\n", std[i].age);			
		printf("CGPA of Student : %.2f\n", std[i].cgpa);
	}

	return 0;

}