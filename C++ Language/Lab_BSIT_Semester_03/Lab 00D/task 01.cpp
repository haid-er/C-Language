// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
using namespace std;


int main()
{
	// Variable Declarations

	int x = 2, y = 8;
	int* ptrX = &x, * ptrY = &y;
	cout << "The value of X = " << x << endl << "The address of X = " << &x << endl;
	cout << "The address of ptrX = " << &ptrX << endl << "The value of ptrX = " << ptrX << endl << "The content where ptrX is pointing : " << *ptrX << endl << endl;
	cout << "The value of Y = " << y << endl << "The address of Y = " << &y << endl;
	cout << "The address of ptrY = " << &ptrY << endl << "The value of ptrY = " << ptrY << endl << "The content where ptrY is pointing : " << *ptrY << endl;


	return 0;
}