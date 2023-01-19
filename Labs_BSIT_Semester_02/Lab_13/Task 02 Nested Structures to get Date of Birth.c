// Program to take data of student and display it using nested structures
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct DateOfBirth
{
	int date;
	int month;
	int year;
};
struct Student
{
	int age;
	char name[30];
	struct DateOfBirth datebrth;
	float gpa;
};
void getStudentData(struct Student* s);
struct DateOfBirth getGetDateOfBirth();
void displayStdData(struct Student s);
int main()
{
	// Declaration of variables

	struct Student s1;
		 
	// Taking inputs from user

	getStudentData(&s1);

	// Displaying Output

	displayStdData(s1);

	return 0;

}
void getStudentData(struct Student* s)
{
	printf("Enter Student Name : ");
	gets(s->name);
	printf("Enter Student age : ");
	scanf("%d", &s->age);
	printf("Enter CGPA of Student : ");
	scanf("%f", &s->gpa);
	s->datebrth = getGetDateOfBirth();
}
struct DateOfBirth getGetDateOfBirth()
{
	struct DateOfBirth d;
	printf("Date of Birth Section\n");
	printf("Enter Date : ");
	scanf("%d", &d.date);
	printf("Enter Month : ");
	scanf("%d", &d.month);
	printf("Enter Year : ");
	scanf("%d", &d.year);
	return d;
}
void displayStdData(const struct Student s1)
{
	printf("\n\n\t Student Data\n\n");
	printf("Name : %s\n", s1.name);
	printf("Age : %d\n", s1.age);
	printf("GPA : %.2f\n", s1.gpa);
	printf("Date of Birth : %d / %d / %d\n", s1.datebrth.date, s1.datebrth.month, s1.datebrth.year);
}