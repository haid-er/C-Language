#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	FILE* fp = fopen("student.txt", "r+");
	
	// variable declaration

	char str[30],token[10];
	char stdNumber[10], houseNumber[6], cityName[10];
	int temp,counter = 0;
	
	// taking inputs
	
	printf("Enter Student Number in File to change address : ");
	scanf("%s",stdNumber);
	printf("Enter Student House Number : ");
	scanf("%5s",houseNumber);
	printf("Enter student city Name : ");
	scanf("%9s",cityName);


	char ch;
	int locationOfStudent = 0;
	while (1)
	{
		// calculating the location using student number in file

		locationOfStudent = ftell(fp);
		fgets(str, sizeof(str), fp);
		strcpy(token, strtok(str, " "));
		//printf("Token = %s\n", token);
		temp = strcmp(token, stdNumber);
		if (temp == '\0')
		{
			//printf("Found\n");
			//printf("Location = %d\n", locationOfStudent);
			break;
		}

		// This part will only check if the End of file reached

		ch = getc(fp);
		if (ch == EOF)
		{
			break;
		}
		else
			fseek(fp, -1, SEEK_CUR);
	}
	// it will reset the pointer location to the given student number
	fseek(fp, locationOfStudent, SEEK_SET);
	
	// this while loop will move the pointer forward in string upto 2 spaces and also calculate the location 
	while (counter != 2)
	{
		locationOfStudent++;
		ch = getc(fp);
		if (ch == ' ')
			counter++;
	}
	fgets(str, sizeof(str), fp);
	int lenght1 = strlen(strtok(str, " "));	// this length 1 will be used while writing
	fclose(fp);

	// Reopening file in different pointer

	FILE* fp1 = fopen("student.txt", "r+");
	// moving pointer to writing location
	fseek(fp1, locationOfStudent, SEEK_SET);
	counter = 0;
	for (int i = 0; 1; i++)
	{
			fwrite(cityName, lenght1/4, lenght1, fp1);
			fseek(fp1, 1, SEEK_CUR);
			fwrite(houseNumber, 1, 2, fp1);
			break;
	}
	printf("End of Program! Check the File for Changes ! \n");
	fclose(fp1);
	return 0;
}