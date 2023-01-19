// Guess Game using do while loop
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Initializing Variables
	int count = 5; 
	// You can chacnge number of tries by chaning count values
	char guess, check = 'A';
	// Using Loop to process the user guess

	do
	{
		printf("Enter your Guess : ");
		scanf("%c", &guess);
		getchar();
		count--;
		if (guess == check)
		{
			printf("Congratulation");
			break;
		}
		else
		{
			printf("Incorrect Guess try Again \n Remaining Tries : %d\n", count);
		}
	} while (count >= 1);

	// If user cant give the correct answer in all tries

	if (count == 0)
	{
		printf("You Lose .");
	}

	return 0;
}