#include "iostream"

using namespace std;

int main()
{
	float area1, area2, width1, width2, length1, length2;
	area1 = area2 = width1 = width2 = length1 = length2 = 0;
	cout << "Enter width of 1st Rectangle : ";
	cin >> width1;
	cout << "Enter length of 1st Rectangle : ";
	cin >> length1;
	cout << "Enter width of 2nd Rectangle : ";
	cin >> width2;
	cout << "Enter length of 2nd Rectangle : ";
	cin >> length2;
	area1 = width1 * length1;
	area2 = width2 * length2;
	cout << "Area of first Rectangle : " << area1 << endl << "Area of second Rectangle : " << area2 << endl;
	if (area1 > area2)
	{
		cout << "1st rectangle is larger than 2nd one." << endl;
	}
	else if (area1 < area2)
	{
		cout << "2nd Rectangle is larger than 1st one." << endl;
	}
	else
	{
		cout << "Both Rectangles are equal." << endl;
	}

	return 0;
}