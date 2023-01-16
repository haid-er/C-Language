// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
using namespace std;

#define ROWS 4
#define COLS 4
void getInput(int m[ROWS][COLS]);
void display(int m[ROWS][COLS]);
void transpose(int m[ROWS][COLS]);
int main()
{
	// Variable Declarations

	int matrix[ROWS][COLS];

	// getting input and then processing and displaying the required output

	getInput(matrix);
	display(matrix);
	transpose(matrix);
	cout << "Transpose of Matrix : " << endl;
	display(matrix);

	return 0;
}
void getInput(int m[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "Enter number for (" << i << " , " << j << ") : ";
			cin >> m[i][j];
		}
	}
}
void display(int m[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void transpose(int m[ROWS][COLS])
{
	int temp = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i != j && i > j)
			{
				temp = m[i][j];
				m[i][j] = m[j][i];
				m[j][i] = temp;
			}
		}
	}
}