// Write a program that computes and displays the charges for a patient’s hospital stay. First, the program should ask if the patient 
// was admitted as an in - patient or an out - patient.If the patient was an in - patient, the following data should be entered :
// 1. The number of days spent in the hospital
// 2. The daily rate
// 3. Hospital medication charges
// 4. Charges for hospital services(lab tests, etc.)
// The program should ask for the following data if the patient was an out - patient :
// 1. Charges for hospital services(lab tests, etc.)
// 2. Hospital medication charges
// The program should use two overloaded functions(named charges) to calculate the total charges.One of the functions should
// accept arguments for the in - patient data, while the other function accepts arguments for out - patient information.Both functions
// should return the total charges.Write your main function and test the functionality of your application.

// Header Files
#include "iostream"
// #include "iomanip"
// #include "string"
int charges(int, int, int, int);
int charges(int, int);
using namespace std;
int main()
{
	// Variable Declarations
	
	int choice = 10;
	int numberOfDays, dailyRates, medicationCharges, serviceCharges;
	int totalCharges = 0;
	numberOfDays = dailyRates = medicationCharges = serviceCharges = 0;

	cout << "************* Patient Hospital Charges *************" << endl << endl;
	cout << "\tPlease Choose one of these : \n\t\t1. In-Patient\n\t\t2. Out-Patient\n\n";
	// Taking Input from user
	do
	{
		cout << "Enter choice : ";
		cin >> choice;
		if (choice != 1 && choice != 2)
			cout << "Invalid Input ! ";
	} while (choice != 1 && choice != 2);

	if (choice == 1)
	{
		cout << "Enter Number of Days : ";
		cin >> numberOfDays;
		cout << "Enter daily charges : ";
		cin >> dailyRates;
		cout << "Enter medication charges : ";
		cin >> medicationCharges;
		cout << "Enter service Charges : ";
		cin >> serviceCharges;
		totalCharges = charges(numberOfDays, dailyRates, medicationCharges, serviceCharges);
	}
	else if (choice == 2)
	{
		cout << "Enter medication charges : ";
		cin >> medicationCharges;
		cout << "Enter service Charges : ";
		cin >> serviceCharges;
		totalCharges = charges(medicationCharges, serviceCharges);
	}
	else
	{
		cout << "Something went wrong . " << endl;
	}

	cout << "\n\n\t Your total Bill is : " << totalCharges << " =/Rs" << endl;
	return 0;
}
int charges(int days, int rates, int medication, int service)
{
	return (days * rates) + medication + service;
}
int charges(int service, int medication)
{
	return service + medication;
}