#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[30];
	int age;
	int st;
	double* marks;
};
int main()
{
	FILE* fp = fopen("demo.txt", "w");
	struct Student s1;
	
	
	
	printf("Enter student name : ");
	gets(s1.name);
	printf("Enter student Age : ");
	scanf("%d", &s1.age);
	
	do
	{
		printf("Enter size of marks : ");
		scanf("%d", &s1.st);
		if (s1.st > 100 || s1.st <= 0)
			printf("Invalid Input ! ");
	} while (s1.st > 100 || s1.st <= 0);
	
	s1.marks = (double*)malloc(s1.st * sizeof(double));
	for (int i = 0; i < s1.st; i++)
	{
		printf("Enter marks for st %d : ", i + 1);
		scanf("%lf", &s1.marks[i]);
	}
	printf("\n\n");
	for (int i = 0; i < s1.st; i++)
	{
		printf("Marks of Student %d : %lf\n", i + 1, s1.marks[i]);
	}
	
	// Writing data to file

	fprintf(fp, "Age : %d ", s1.age);
	fprintf(fp, "Name : %s \nMarks : ", s1.name);
	printf("Written\n");
	for (int i = 0; i < s1.st; i++)
	{
		fprintf(fp, "%lf ", s1.marks[i]);
		printf("Written\n");

	}

	free(s1.marks);
	s1.marks = NULL;
	fclose(fp);
	printf("End of Program !\n");
	return 0;

}