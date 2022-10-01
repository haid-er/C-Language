// Program to find a number is palindrome or not using function

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPalindrome(int a);
int main()
{
	int number = 0;
	printf("Enter any Number : ");
	scanf("%d", &number);
	
	if (isPalindrome(number) == 1)
		printf("Entered Number is Palindrome.");
	else
		printf("Entered Number is Not a Palindrome.");
	return 0;

}
int isPalindrome(int a)
{
	int digit, number, reverse;
	digit = number = reverse = 0;
	number = a;
	while (number != 0)
	{
		digit = number % 10;
		number = number / 10;
		reverse = digit + reverse * 10;
	}
	printf("Reverse = %d\nNumber = %d\n", reverse, a);
	if (a == reverse)
		return 1;
	else
		return 0;
}
