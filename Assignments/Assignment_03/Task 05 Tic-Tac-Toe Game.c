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
/// <summary>
/// This function will initialize the array with stars
/// </summary>
/// <param name="arr">Array which we want to initialize</param>
void intializeWithStars(char* arr)
{
	for (int i = 0; i < SIZE * SIZE; i++)
	{
		*arr = '*';
		arr++;
	}
}
/// <summary>
/// THis funciton will display all values of array
/// </summary>
/// <param name="arr">Array which we want to display</param>
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
/// <summary>
/// This funciton will check if any choice for any player left to play the given further
/// </summary>
/// <param name="arr">Array of data</param>
/// <returns>Will return 1 if any choice for player left to play more otherwise return 0</returns>
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
/// <summary>
/// This is the main function in which all the game play is done
/// </summary>
/// <param name="arr">Array of stars</param>
void playGame(char arr[SIZE][SIZE])
{
	char* p = *arr;
	int xp1, yp1, xp2, yp2, decision, flagTie;
	xp1 = yp1 = xp2 = yp2 = decision = 0;
	flagTie = 1;
	/// <summary>
	/// This loop will iterate for unless any break statement does not execute
	/// any break statement will execute if the player has no more choice to play the game or any player win the game
	/// </summary>
	/// <param name="arr"></param>
	do
	{
		// This loop will take input from player 1 unless he enters the valid value
		do
		{
			getChoice("Player1", &xp1, &yp1);
			if (isChoiceValid(arr, &xp1, &yp1))
				printf("Invalid Choice ! ");
		} while (isChoiceValid(arr, &xp1, &yp1));
		arr[xp1][yp1] = 'X';
		display(p);
		decision = decisionMaking(arr);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);		// This line will change the color of the statements to purple
		// These conditions will check if any player win or not
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
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);		// This line will change the color of the statements to default color white
		if (anyChoiceLeft(p) != 1)
			break;
		// This loop will take input from player 2 unless he enters the valid value
		do
		{
			getChoice("Player2", &xp1, &yp1);
			if (isChoiceValid(arr, &xp1, &yp1))
				printf("Invalid Choice ! ");
		} while (isChoiceValid(arr, &xp1, &yp1));
		arr[xp1][yp1] = 'O';
		display(p);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);	// This line will change the color of the statements to purple
		// These conditions will check if any player win or not
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
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);		// This line will change the color of the statements to default color white
		if (anyChoiceLeft(p) != 1)
			break;
	} while (1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);	// This line will change the color of the statements to purple
	// This statement will only execute if the none of player win the game and match is tied
	if (flagTie == 1)
	{
		printf("\nBoth Player played well ! \n\n\t<---------- Match Tied --------->\n\n");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);		// This line will change the color of the statements to default white


}
/// <summary>
/// This function will take input from user in form of row number and column number 
/// </summary>
/// <param name="str">This string represent the player for which we want to take input</param>
/// <param name="x">its value of row number </param>
/// <param name="y">its for value of column number</param>
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
/// <summary>
/// This function will check if the user enter the valid choice for the row and column number
/// </summary>
/// <param name="arr">This is array in which data is stored</param>
/// <param name="x">its value of row number</param>
/// <param name="y">its value of column number</param>
/// <returns>
///		it will return true if there exist a star on the given location means user can add his choice to that position
///		it will return false if there exist a value of user choice which he added before
///		it will return false if the given position does not exist in the row
/// </returns>
int isChoiceValid(char arr[SIZE][SIZE], int* x, int* y)
{
	if (arr[*x][*y] == '*')
		return 0;
	else
		return 1;
}
/// <summary>
/// This function will check if any player win with the given choices
/// </summary>
/// <param name="arr">Given data in array</param>
/// <returns>
///		it will return 1 if the player 1 win the game with the given choices
///		it will return 2 if the player 2 win the game with the given choices
///		it will return 3 if none of the player win the game and game should be continued
/// </returns>
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