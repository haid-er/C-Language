// Program to add two matrices and store their result in third matrics

// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
#define SIZE 3
using namespace std;
void getInput(int arr[SIZE][SIZE]);
void display(int arr[SIZE][SIZE]);
void sum(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int res[SIZE][SIZE]);
int main()
{
	// Variable Initialization

	int arr1[SIZE][SIZE], arr2[SIZE][SIZE], result[SIZE][SIZE];
	// Taking Input from user
	
	cout << "Enter the enteries for Matrix 1 : " << endl;
	getInput(arr1);
	cout << "Enter the enteries for Matrix 2 : " << endl;
	getInput(arr2);
	
	// Processing the Input to Output

	cout << "Matrix 1 : " << endl;
	display(arr1);
	cout << "Matrix 2 : " << endl;
	display(arr2);

	sum(arr1, arr2, result);
	cout << "Sum of both matrices : " << endl;
	display(result);


	return 0;
}
void getInput(int arr[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << "Enter any Number for position (" << i+1 << "," << j + 1 << ") : ";
			cin >> arr[i][j];
		}
	}
}
void display(int arr[SIZE][SIZE])
{
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

}
void sum(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int res[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			res[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}