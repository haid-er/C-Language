// Program to generate random sentences
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));

	// Declaration of arrays

	char* artical[] = { "the" , "a" , "one", "some" , "any" };
	char* noun[] = { "boy" ,"girl" , "dog" , "town" , "car" };
	char* verb[] = { "drove", "jumped", "ran", "walked" , "skipped" };
	char* preposition[] = { "to" , "from" , "over" , "under" , "on" };
	char* sentence[30];
	int numberOfSentences,x,j,k,l;
	numberOfSentences = x = j = k = l = 0;

	// Taking inputs from user
	
	do
	{
		printf("Enter number of sentences to generate : ");
		scanf("%d", &numberOfSentences);
		if (numberOfSentences < 1)
			printf("Invalid Input ! ");
	} while (numberOfSentences < 1);
	
	// Processing and Displaying Output

	for (int i = 0; i < numberOfSentences; i++)
	{
		// underlying code will store randomized number in variables to randomize sentences
		x = rand() % 5;
		j = rand() % 5;
		k = rand() % 5;
		l = rand() % 5;
		// These statements will copy the words to the sentence array
		strcpy(sentence, *(artical + x));
		strcat(sentence, " ");
		strcat(sentence, *(noun + j));
		strcat(sentence, " ");
		strcat(sentence, *(verb + k));
		strcat(sentence, " ");
		strcat(sentence, *(preposition + l));
		strcat(sentence, ".");
		// This line will convert first character of sentence to upper case
		sentence[0] = sentence[0] - 32;
		printf("%s ", sentence);
	}
	return 0;

}