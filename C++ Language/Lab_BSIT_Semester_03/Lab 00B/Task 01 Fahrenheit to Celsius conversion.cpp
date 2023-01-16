// Program to convert temperature from fahrenfeit to celsius

// Header Files
#include "iostream"
#include "iomanip"

using namespace std;
float convertToCel(float* p);
int main()
{
	// Variables declaration

	float fahren, cel;
	fahren = cel = 0;

	// Taking input from the user

	cout << "Enter temperature in Fahrenheit : ";
	cin >> fahren;

	// Processing the input for outputs

	cel = convertToCel(&fahren);

	// Output

	cout << fahren << " Fahrenheit = " << cel << " Celsius" << endl;

	// Second output for 0 - 20 fahrenheit conversion

	float temp = 0.0;
	for (int i = 0; i < 20; i++)
	{
		cout << setprecision(5) <<  convertToCel(&temp) << " Fahrenheit = " << temp << " Celsius" << endl;
		temp++;
	}

	return 0;
}
float convertToCel(float* p)
{
	float res = (5.0f / 9.0f)*(*p - 32);
	return res;
}