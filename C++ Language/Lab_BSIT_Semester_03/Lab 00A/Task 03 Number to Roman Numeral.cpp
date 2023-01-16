#include "iostream"

using namespace std;

int main()
{
	int num = 0;

	do
	{
		cout << "Enter any number (0 < num < 10) : ";
		cin >> num;
		if (num < 1 || num > 10)
			cout << "Invalid Input ! ";
	} while (num < 1 || num > 10);
	cout << num << " in Roman = ";
	switch (num)
	{
	case 1:
		cout << "I" << endl;
		break;
	case 2:
		cout << "II" << endl;
		break;
	case 3:
		cout << "III" << endl;
		break;
	case 4:
		cout << "IV" << endl;
		break;
	case 5:
		cout << "V" << endl;
		break;
	case 6:
		cout << "VI" << endl;
		break;
	case 7:
		cout << "VII" << endl;
		break;
	case 8:
		cout << "VIII" << endl;
		break;
	case 9:
		cout << "IX" << endl;
		break;
	case 10:
		cout << "X" << endl;
		break;
	default:
		cout << "Something went wrong !" << endl;
	}

	return 0;
}