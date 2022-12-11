// Program to change address of student in a file of given student number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 5
#define MAX 30
struct Address
{
	int houseNumber;
	char city[MAX];
};
struct Student
{
	int rollNumber;
	int name[MAX];
	struct Address ad;
};
int main()
{
	// Declaration of variables

	struct Student s1[SIZE];

	// Taking inputs from user

	for (int i = 0; i < SIZE; i++)
	{
		s1[i].rollNumber = i + 1;
		printf("Enter name for Student %d : ", s1[i].rollNumber);
		gets(s1[i].name);
		// Taking Address from the user
		printf("Enter his city name : ");
		gets(s1[i].ad.city);
		printf("Enter his house Number : ");
		scanf("%d", &s1[i].ad.houseNumber);
		getchar();
	}

	// File Creation

	FILE* fp = fopen("student.txt", "w");
	
	for (int i = 0; i < SIZE; i++)
	{
		fprintf(fp, "%d", s1[i].rollNumber);
		fprintf(fp, " %s", s1[i].name);
		fprintf(fp, " %s", s1[i].ad.city);
		fprintf(fp, " %d\n", s1[i].ad.houseNumber);
	}
	
	// closing the file

	fclose(fp);
	printf("\n\n\tEnd of Program!!!\n\n");
	return 0;

} 