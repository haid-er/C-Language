// Program to count all different grades of student given in the inputs
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	int a, b, c, d ,f,i;
	a = b = c = d = f = i = 0;
	char grade;
	
	do
	{
		printf("Enter Grade of Student %d : ", ++i);
		scanf("%c", &grade);
		getchar();
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
		case 'F':
		case 'f':
			f++;
			break;
		case 'x':
		case 'X':
			break;
		default:
			printf(" \nInvalid Input ! ");
			i = i - 1;
		}
	} while (grade != 'X' && grade != 'x');

	// Displaying Output

	printf("Number of A grade Students = %d \nNumber of B grade students = %d \nNumber of C grade students = %d \nNumber of D grade students = %d\nNumber of F grade Student = %d", a, b, c, d,f);

	return 0;

}