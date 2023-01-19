// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
using namespace std;

void subbtractByPointer(double*, double*, double*);
int main()
{
	// Variable Declarations

	double num1, num2, diff;
	num1 = num2 = diff = 0.0;
	cout << "Enter any floating point number : ";
	cin >> num1;
	cout << "Enter any other floating point number : ";
	cin >> num2;
	subbtractByPointer(&num1, &num2, &diff);
	cout << "Difference of both numbers : " << diff << endl;
	return 0;
}
void subbtractByPointer(double* ptrA, double* ptrB, double* ptrR)
{
	*ptrR = *ptrB - *ptrA;
}