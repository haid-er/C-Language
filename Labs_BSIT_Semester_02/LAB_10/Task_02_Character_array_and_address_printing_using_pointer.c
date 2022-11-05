// Program to print array and its address using pointer constant
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 50
void printAdddressValue(const char* ch);
int main()
{
	// Initialization of array

	char arr[SIZE] = "Hello World of C Programming.";

	// Processing for printing address and value of array

	printAdddressValue(arr);

	return 0;

}
void printAdddressValue(const char* ch)
{
	int i = 0;       // '\0' == 0
	while (*(ch + i) != 0)
	{
		printf("%p\t%c\n", ch + i , *(ch+i));
		i++;
	}
}
