// Program to take input in character array from user and then print it in different methods
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define SIZE 30
int main()
{
	// Declaration of array

	char arr[SIZE] = {'H', 'A', 'I', 'D', 'E', 'R', '\0' };
	char arrInitialization[SIZE] = "HAIDER";
	char userInput1[SIZE];
	char userInput2[SIZE];

	// printing first and second initilized arrays

	printf("First Initialized array : %s \nSecond Initialized Array : %s\n", arr, arrInitialization);

	// Taking inputs from user
	printf("Enter your Name : ");
	int i = 0;
	while (i < SIZE - 1)
	{
		userInput1[i] = getchar();
		if (userInput1[i] == 10)
			break;
		i++;
	}
	userInput1[i + 1] = '\0';
	
	// Printing in the same method

	for (int k = 0; k < i; k++)
	{
		printf("%c", userInput1[k]);
	}
	printf("\n");

	// Getting input in simple method but with no space

	printf("Enter Your name with no spaces : ");
	scanf("%s", userInput2);

	// Printing in the same method

	printf("%s", userInput2);


	return 0;

}