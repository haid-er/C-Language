// Program to find string length using a function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int length(const char* p);
int main()
{
	// Declaration of array

	char arr[200];
	int x;
	// Taking inputs from user

	printf("Enter any text : ");
	for (int i = 0; i < 200; i++)
	{
		arr[i] = getchar();
		if (arr[i] == 10)
		{
			arr[i] = '\0';
			break;
		}
	}

	// Processing

	x = length(arr);

	// Displaying Output

	printf("Length of array = %d", x);

	return 0;

}
int length(const char* p)
{
	int i = 0; 
	while (*(p + i) != 0)
	{
		i++;
	}
	return i;
}
