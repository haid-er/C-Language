#include "iostream"
#include "iomanip"

using namespace std;

int main()
{
	float time = 0.0, distance = 0.0;
	int choice = 0;
	int speedInAir = 1100, speedInWater = 4900, speedInSteel = 16400;
	cout << "1 . Speed in Air" << endl << "2 . Speed in Water" << endl << "3. Speed in steel" << endl;
	do
	{
		cout << "Enter any choice : ";
		cin >> choice;
		if (choice > 3 || choice < 1)
			cout << "Invalid Input ! ";
	} while (choice > 3 || choice < 1);
	do
	{
		cout << "Enter distance to calculate speed : ";
		cin >> distance;
		if (distance <= 0)
			cout << "Invalid Input ! ";
	} while (distance <= 0);
	
	switch (choice)
	{
	case 1 :
		time = distance / speedInAir;
		cout << "Time require to cover distance of " << distance << " feet in Air for sound = " << time << " seconds" << endl;
		break;
	case 2:
		time = distance / speedInWater;
		cout << "Time require to cover distance of " << distance << " feet in Water for sound = " << time << " seconds" << endl;
		break;
	case 3:
		time = distance / speedInSteel;
		cout << "Time require to cover distance of " << distance << " feet in Steel for sound = " << setprecision(5) << time<<  " seconds" << endl;
		break;
	default:
		cout << "Something went wrong !" << endl;
	}


	return 0;
}