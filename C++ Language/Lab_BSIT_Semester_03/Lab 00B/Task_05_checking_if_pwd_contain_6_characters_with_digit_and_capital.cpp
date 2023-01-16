// Program to chcek if the password contains at least six characters including at least one digit and one capital letter
// Header Files
#include "iostream"
#include "string"

using namespace std;

int isValid(string);

int main()
{
	// Variable Declarations

	string pwd;

	// Taking Input from user, processing and then displaying outputs

	do
	{
		cout << "Enter password : ";
		getline(cin, pwd);
		if (isValid(pwd))
			cout << "Password must contain 6 consective character including at least a capital Alphabet and a digit ." << endl;
	} while (isValid(pwd));

	cout << "Password Successfully created ! " << endl;

	return 0;
}
int isValid(string str)
{
	int digits, capital, counter;
	digits = capital = counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		counter++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			capital++;
		if (str[i] >= '0' && str[i] <= '9')
			digits++;
		if (str[i] == ' ')
		{
			return 1;
		}
	}
	if (digits < 1 || capital < 1 || counter < 6)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}