// Program to count all different grades of student given in the inputs
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int students, a, b, c, d;
	students = a = b = c = d = 0;
	char grade;
	// Taking inputs from user
	printf("Enter number of students : ");
	scanf("%d", &students);
	// Processing
	for (int i = 0; i < students; i++)
	{
		printf("Enter Grade of Student %d : ", i + 1);
		getchar();
		scanf("%c", &grade);
		switch (grade)
		{
		case 'A':
		case 'a':
			a++;
			break;
		case 'B':
		case 'b':
			b++;
			break;
		case 'C':
		case 'c':
			c++;
			break;
		case 'D':
		case 'd':
			d++;
			break;
		default:
			printf("Invalid Input\n");
			i = i - 1;
		}
	}
	// Displaying Output
	printf("Number of A grade Students = %d \nNumber of B grade students = %d \nNumber of C grade students = %d \nNumber of D grade students = %d\n", a, b, c, d);

	return 0;

}