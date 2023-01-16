// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"

using namespace std;
#define SIZE 10
void getData(int arr[], int size);
void diplayData(int arr[], int size);
int countEven(int arr[], int size);
float mean(int arr[], int size);
int main()
{
	// Variable Declarations

	int arr[SIZE];
	getData(arr,SIZE);
	diplayData(arr, SIZE);
	cout << "Number of Even Numbers in given Data : " << countEven(arr, SIZE) << endl;
	cout << "Mean of given Data : " << mean(arr, SIZE) << endl;
	return 0;
}
void getData(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}
}
void diplayData(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int countEven(int arr[], int size)
{
	int even = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			even++;
	}
	return even;
}
float mean(int arr[], int size)
{
	int sum = 0;
	float mean = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	mean = (float)sum / size;
	return mean;
}