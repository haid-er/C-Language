// Program to make a user defined data type and then taking its input and displaying its output using functions
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Student
{
	char name[20];
	char rollNo[10];
	int age;
	float cgpa;
};
struct Student getInputForStudent();
void displayStudent(struct Student);
int main()
{
	// Declaration of variables

	struct Student std1;
	struct Student std2;

	// Taking inputs from user

	printf("Enter Data of student 1 :-\n");
	std1 = getInputForStudent();
	printf("Enter Data of student 2 :-\n");
	std2 = getInputForStudent();

	// Displaying Output

	printf("Data of student 1 :-\n");
	displayStudent(std1);
	printf("Data of student 2 :-\n");
	displayStudent(std2);

	return 0;

}
struct Student getInputForStudent()
{
	struct Student s1;
	printf("Enter student Name : ");
	scanf("%19s", s1.name);
	printf("Enter student roll number : ");
	scanf("%9s", s1.rollNo);
	printf("Enter student age : ");
	scanf("%d", &s1.age);
	printf("Enter student cgpa : ");
	scanf("%f", &s1.cgpa);
	return s1;
}
void displayStudent(struct Student s1)
{
	printf("Name of Student : %s\n",s1.name);
	printf("Student roll number : %s\n",s1.rollNo);
	printf("Student age : %d\n",s1.age);
	printf("Student cgpa : %.3f\n",s1.cgpa);
}