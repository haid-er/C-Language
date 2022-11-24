// Program to make a user defined data type and then assign some values to its variable
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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

	struct Student s1;

	// Taking inputs from user

	printf("Enter your name : ");
	gets(s1.name);
	printf("Enter your roll number : ");
	gets(s1.rollNumber);
	printf("Enter your age : ");
	scanf("%d", &s1.age);
	printf("Enter your cpga : ");
	scanf("%f", &s1.cgpa);

	// Displaying Output
	
	printf("Name : %s\n", s1.name);
	printf("Roll Number : %s\n", s1.rollNumber);
	printf("Age of Student : %d\n", s1.age);
	printf("CGPA of Student : %.2f\n", s1.cgpa);

	return 0;

}