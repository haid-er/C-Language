// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
using namespace std;

void arrayByPointer(float* ptrArrray, int size);
int main()
{
	// Variable Declarations
	
	float arr[10];
	for (int i = 0; i < 10; i++)
	{
		*(arr + i) = i + 1;
	}
	arrayByPointer(arr, 10);

	return 0;
}
void arrayByPointer(float* ptrArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << (ptrArray + i) << " = " << *(ptrArray + i) << endl;
	}
}