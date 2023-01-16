#include "iostream"

using namespace std;

int main()
{
	int seconds, mins, hours, days;
	seconds = mins = hours = days = 0;
	do
	{
		cout << "Enter number of seconds to convert :";
		cin >> seconds;
		if (seconds <= 0)
			cout << "Invalid Input ! " << endl;
	} while (seconds <= 0);
	cout << seconds << " seconds = ";
	if (seconds < 60)
	{
		cout << seconds << " seconds" << endl;
	}
	else if (seconds < 3600)
	{
		mins = seconds / 60;
		seconds = seconds % 60;
		cout << mins << " minutes and " << seconds << " seconds." << endl;
	}
	else if (seconds < 86400)
	{
		hours = seconds / 3600;
		seconds = seconds % 3600;
		cout << hours << " hours and "<< seconds << " seconds." << endl;
	}
	else
	{
		days = seconds / 86400;
		seconds = seconds % 86400;
		cout << days << " days and "<<  seconds << " seconds." << endl;
	}
	return 0;
}