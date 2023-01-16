// Program to make a data base of students of class which takes the input
// and then calculate the 
//		averager age
//		max age
//		average gpa
//		max gpa
//		average grade of class
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 4
struct Student
{
	char name[30];
	char rollNumber[20];
	int age;
	float gpa;
};
void getStudentData(char* str,int num , struct Student* s);
void displayStudentData(char* str,int num , struct Student* s);
int ageManipulation(struct Student* s, float* averageAge, int* maxAge);
int gpaManipulation(struct Student* s, float* averageGPA, float* maxGPA);
int main()
{
	// Declaration of array

	struct Student classIT[SIZE];
	float averageGPA, averageAge, maxGPA;
	int maxAge, indexAge, indexGPA;
	
	// Taking inputs from user

	for (int i = 0; i < SIZE; i++)
	{
		getStudentData("Student", i + 1, &classIT[i]);
		getchar(); 
	}


	// Processing and Displaying Output

	for (int i = 0; i < SIZE; i++)
	{
		displayStudentData("Student", i + 1, &classIT[i]);
	}
	printf("\n\n");
	indexAge = ageManipulation(&classIT, &averageAge, &maxAge);
	indexGPA = gpaManipulation(&classIT, &averageGPA, &maxGPA);
	
	printf("Average GPA of Class Students : %.3f\n",averageGPA);
	printf("Highest GPA in Class : %.2f\n", maxGPA);
	printf("%s has held Highest GPA in Class.\n", classIT[indexGPA].name);
	printf("Average Age of Class Students : %.3f\n", averageAge);
	printf("Largest Age of student in class : %d\n",maxAge);
	printf("%s is eldest in class.\n", classIT[indexAge].name);

	if (averageGPA == 4)
		printf("Class Grade : A+\n");
	else if (averageGPA > 3 && averageGPA < 4)
		printf("Class Grade : A\n");
	else if (averageGPA > 2.5 && averageGPA <= 3)
		printf("Class Grade : B\n");
	else if (averageGPA >= 1.5 && averageGPA <= 2.5)
		printf("Class Grade : C\n");
	else if (averageGPA < 1.5 && averageGPA>0)
		printf("Class Grade : F\n");
	else
		printf("Some Invalid Data is Given.\n");
	return 0;

}
void getStudentData(char* str,int num , struct Student* s)
{
	printf("\n\n\t\t%s  %d\n\n", str, num);
	printf("Enter name : ");
	gets(s->name);
	printf("Enter roll Number : ");
	gets(s->rollNumber);
	printf("Enter age : ");
	scanf("%d", &s->age);
	printf("Enter GPA : ");
	scanf("%f", &s->gpa);
}
void displayStudentData(char* str,int num , struct Student* s)
{
	printf("\n\n\t\t%s  %d\n\n", str, num);
	printf("Name : %s\n", s->name);
	printf("Roll Number : %s\n", s->rollNumber);
	printf("Age : %d\nGPA : %.2f\n", s->age, s->gpa);
}
int ageManipulation(struct Student* s, float* averageAge, int* maxAge)
{
	int sum, temp, index;
	*averageAge = *maxAge = sum = temp = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + s[i].age;
		if (temp < s[i].age)
		{
			temp = s[i].age;
			index = i;
		}
	}
	*averageAge = sum / SIZE;
	*maxAge = temp;
	return index;
}
int gpaManipulation(struct Student* s, float* averageGPA, float* maxGPA)
{
	int index;
	float sum, temp;
	*averageGPA = *maxGPA = sum = temp = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + s[i].gpa;
		if (temp < s[i].gpa)
		{
			temp = s[i].gpa;
			index = i;
		}
	}
	*averageGPA = sum / SIZE;
	*maxGPA = temp;
	return index;
}