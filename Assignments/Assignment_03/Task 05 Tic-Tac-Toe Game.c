// Program for TIC-TAC-TOE Game
/*
	In this game there will be two players and the player who have three same symbols 
	means X's or O's in a row column or digonal will win
	X is representing player 1
	Y is representing player 2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#define SIZE 3
void intializeWithStars(char* arr);
void display(char* arr);
void playGame(char arr[SIZE][SIZE]);
int anyChoiceLeft(char* arr);
void getChoice(char *str, int* x, int* y);
int isChoiceValid(char arr[SIZE][SIZE], int* x, int* y);
int decisionMaking(char arr[SIZE][SIZE]);
int main()
{
	// Declaration of array
	
	char arr[SIZE][SIZE];
	char* ptr = *arr;

	// Initializing array with *

	intializeWithStars(ptr);

	// Taking inputs fromuser

	display(ptr);
	
	// Game Starting
	
	printf("\t\t|-----------Game Started-----------|\n\n");
	playGame(arr);
	
	// Displaying Output


	return 0;

}
void intializeWithStars(char* arr)
{
	for (int i = 0; i < SIZE * SIZE; i++)
	{
		*arr = '*';
		arr++;
	}
}
void display(char* arr)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\n");
	for (int i = 1; i <= SIZE * SIZE; i++)
	{
		printf("\t%c", *arr);
		arr++;
		if (i % SIZE == 0 && i != 0)
			printf("\n");
	}
	printf("\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
int anyChoiceLeft(char* arr)
{
	for (int i = 0; i < SIZE * SIZE; i++)
	{
		if (*arr == '*')
		{
			return 1;
		}
		else
			arr++;
	}
	return 0;
}
void playGame(char arr[SIZE][SIZE])
{
	char* p = *arr;
	int xp1, yp1, xp2, yp2, decision, flagTie;
	xp1 = yp1 = xp2 = yp2 = decision = 0;
	flagTie = 1;
	do
	{
		do
		{
			getChoice("Player1", &xp1, &yp1);
			if (isChoiceValid(arr, &xp1, &yp1))
				printf("Invalid Choice ! ");
		} while (isChoiceValid(arr, &xp1, &yp1));
		arr[xp1][yp1] = 'X';
		display(p);
		decision = decisionMaking(arr);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		if (decision == 1)
		{
			printf("\nPlayer 1 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 1 ---------->\n\n");
			flagTie = 0;
			break;
		}
		else if (decision == 2)
		{
			printf("\nPlayer 2 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 2 ---------->\n\n");
			flagTie = 0;
			break;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		if (anyChoiceLeft(p) != 1)
			break;
		do
		{
			getChoice("Player2", &xp1, &yp1);
			if (isChoiceValid(arr, &xp1, &yp1))
				printf("Invalid Choice ! ");
		} while (isChoiceValid(arr, &xp1, &yp1));
		arr[xp1][yp1] = 'O';
		display(p);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		decision = decisionMaking(arr);
		if (decision == 1)
		{
			printf("\nPlayer 1 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 1 ---------->\n\n");
			flagTie = 0;
			break;
		}
		else if (decision == 2)
		{
			printf("\nPlayer 2 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 2 ---------->\n\n");
			flagTie = 0;
			break;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		if (anyChoiceLeft(p) != 1)
			break;
	} while (1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	if (flagTie == 1)
	{
		printf("\nBoth Player played well ! \n\n\t<---------- Match Tied --------->\n\n");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);


}
void getChoice(char *str, int* x, int* y)
{
	do
	{
		printf("%s enter row number : ", str);
		scanf("%d", x);
		if (*x > SIZE || *x < 1)
			printf("Invalid Input ! ");
	} while (*x > SIZE || *x < 1);
	do
	{
		printf("%s enter column number : ", str);
		scanf("%d", y);
		if (*y > SIZE || *y < 1)
			printf("Invalid Input ! ");
	} while (*y > SIZE || *y < 1);
	*x = *x - 1;
	*y = *y - 1;
}
int isChoiceValid(char arr[SIZE][SIZE], int* x, int* y)
{
	if (arr[*x][*y] == '*')
		return 0;
	else
		return 1;
}
int decisionMaking(char arr[SIZE][SIZE])
{
	// checking if row elements are equal 
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
		{
		if (arr[i][0] == 'X' && arr[i][1] == 'X' && arr[i][2] == 'X')
				return 1;
			if (arr[i][0] == 'O' && arr[i][1] == 'O' && arr[i][2] == 'O')
				return 2;
		}
	}
	// checking if column elements are equal
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
		{
			if (arr[0][i] == 'X' && arr[1][i] == 'X' && arr[2][i] == 'X')
				return 1;
			if (arr[0][i] == 'O' && arr[1][i] == 'O' && arr[2][i] == 'O')
				return 2;
		}
	}
	// checking digonals
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
	{
		if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
			return 1;
		if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
			return 2;
	}
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
	{
		if (arr[0][2] == 'X' && arr[1][1] == 'X' &&  arr[2][0] == 'X')
			return 1;
		if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
			return 2;
	}
	return 3;
}