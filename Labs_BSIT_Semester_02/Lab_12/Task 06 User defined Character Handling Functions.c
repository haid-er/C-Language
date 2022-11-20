// User defined functions for character handling
// all functions return 1 if true and return 0 if false
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isDigit(char c);			//Return true if given character is a digit
int isAlpha(char c);			//Return true if given character is a alphabet
int isLowerAlpha(char c);		//Return true if given character is a lower alphabet
int isCapitalAlpha(char c);		//Return true if given character is a Capital Alphabet
int isAlphaNumeric(char c);		//Return true if given character is a alphabet or number
int isHexaDigit(char c);		//Return true if given character is a Hexadecimal value
int isSpace(char c);			//Return true if given character is a space
int isPunctuation(char c);		//Return true if given character is a symbol
int main()
{
	// Declaration of variables
	
	char digit = '4', aplha = 'a', capital = 'Z', hexa = 'D', sp = ' ', punc = ';';
	int res = 0;

	// Testing functions

	res = isDigit(digit);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isDigit(punc);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isAlpha(aplha);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isAlpha(digit);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isCapitalAlpha(capital);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isLowerAlpha(capital);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isAlphaNumeric(aplha);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isAlphaNumeric(punc);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isSpace(sp);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isHexaDigit(hexa);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isHexaDigit(punc);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isPunctuation(punc);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");
	res = isPunctuation(digit);
	if (res == 0)
		printf("False\n");
	else
		printf("True\n");


	return 0;

}
int isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
int isAlpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
int isLowerAlpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
int isCapitalAlpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
int isAlphaNumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
int isHexaDigit(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'z'))
		return 1;
	else
		return 0;
}
int isSpace(char c)
{
	if (c == 32)
		return 1;
	else
		return 0;
}
int isPunctuation(char c)
{
	if (c > 32)
	{
		if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

