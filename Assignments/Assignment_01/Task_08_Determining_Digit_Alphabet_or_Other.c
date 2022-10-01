// Program to Determine number alphabet or symbol
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	char ch,choice = 'N';


	do
	{

		// Taking inputs from user

		printf("Enter any Character : ");
		scanf("%c", &ch);
		getchar();

		// Processing  Displaying Output

		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			printf("Entered Character is Alphabet . ");
		else if (ch >= '0' && ch <= '9')
			printf("Entered Character is Number . ");
		else
			printf("Entered Character is Special Symbol . ");
	
		do
		{
			printf("\nDo you want to Enter again (Y/N) : ");
			scanf("%c", &choice);
			getchar();
			if (choice == 'N' || choice == 'n' || choice == 'Y' || choice == 'y')
				break;
			else
				printf("Invalid choice Input ! ");
		} while (choice != 'y' || choice != 'Y' || choice != 'N' || choice != 'n');

	} while (choice == 'y' || choice == 'Y');

	printf("Bye Bye");

	return 0;

}