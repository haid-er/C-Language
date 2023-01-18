// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
using namespace std;

void getMinMax(int* ptrArray, int size, int* ptrMin, int* ptrMax);
int main()
{
	// Variable Declarations

	int arr[10] = { -99,2 ,5,3,7,-9,11,54,12,43 };
	int min, max;
	min = max = 0;
	getMinMax(arr, 10, &min, &max);
	cout << "The minimum value in array : " << min << endl << "The maximum value in array : " << max << endl;
	return 0;
}
void getMinMax(int* ptrArray, int size, int* ptrMin, int* ptrMax)
{
	int temp1 = ptrArray[0], temp2 = ptrArray[0];
	for (int i = 0; i < size; i++)
	{
		if (*(ptrArray + i) <= temp1)
		{
			*ptrMin = *(ptrArray + i);
			temp1 = *(ptrArray + i);
		}
		if(*(ptrArray + i) >= temp2)
		{
			*ptrMax = *(ptrArray + i);
			temp2 = *(ptrArray + i);
		}
	}
}