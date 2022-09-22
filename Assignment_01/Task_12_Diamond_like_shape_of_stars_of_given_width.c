// Program to display Dimond shape of Stars of given width
// Width should be positive odd integer only

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables
	
	int width,mid,star;
	width = mid =  0;
	star = 1;
	// width will be used to take the width of diamond from user
	// mid will be used to check the middle value 
	// star will define the number of stars in each row
	
	// Taking inputs from user
	// this loop will iterate again and again unless user enter a valid value

	do
	{
		printf("Enter odd integer width of Diamond (>=3) : ");
		scanf("%d", &width);
		if (width < 3 || (width % 2 == 0))
			printf("Invalid Input ! ");
	} while (width < 3 || (width % 2 == 0));

	// Processing and displaying output


	mid = (width / 2) + 1;
	// Inner and outer loop repeat width times
	for (int i = 1; i <= width; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			// it will print space till value of j is less than middle value - the number of stars and print space after mid+star approch
			if (j <= mid - star || j >= mid + star)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
		// in order to decrease number of stars after middle line we have to decrease the variable star
		if (i < mid)
			star = star + 1;
		else
			star = star - 1;
		
	}


	return 0;

}