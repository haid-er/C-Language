// Program to add pairs of an array and store them to other array

// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
#define SIZE 10
using namespace std;
int main()
{
	// Variable Declarations

	int arr[SIZE], res[SIZE / 2];

	// Taking Input from user

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}

	// Processing the Input to Output

	for (int i = 0, j = 0; i < SIZE / 2; i++,j+=2)
	{
		res[i] = arr[j] + arr[j + 1];
	}
	cout << endl << "Result Array : " << endl;
	for (int i = 0; i < SIZE / 2; i++)
	{
		cout << res[i] << endl;
	}

	return 0;
}