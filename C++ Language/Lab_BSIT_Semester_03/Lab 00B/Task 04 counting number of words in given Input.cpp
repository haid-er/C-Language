// Program to count the number of words in the given input sentence

// Header Files
#include "iostream"
#include "string"
using namespace std;

string getInput();
int numberOfWords(string);

int main()
{
	string str=getInput();
	for (int i = 0; i <str.length(); i++)
	{
		cout << i << "\t" << str[i] << "\n";
	}
	int n=numberOfWords(str);
	cout << "number of words : " << n;
}

string getInput()
{
	string str;
	cout << "Enter Input String : ";
	getline(cin, str);
	return str;
}
int numberOfWords(string str)
{
	int counter = 1;
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] == ' ')
		{
			counter++;
		}
	}
	return counter;
}
