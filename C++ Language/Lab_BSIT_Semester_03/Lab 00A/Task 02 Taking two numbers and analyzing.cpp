#include "iostream"

using namespace std;

int main()
{
	int a = 0, b = 0;
	cout << "Enter first Number : ";
	cin >> a;
	cout << "Enter second Number : ";
	cin >> b;
	if (a > b)
	{
		cout << a << "  is greater than  " << b << endl;
		cout << "Accending order : " << b << " , " << a << endl;
	}
	else if (a < b)
	{
		cout << a << "  is smaller than  " << b << endl;
		cout << "Accending order : " << a << " , " << b << endl;
	}
	else 
	{
		cout << a << "  is equal to  " << b << endl;
	}

	return 0;
}