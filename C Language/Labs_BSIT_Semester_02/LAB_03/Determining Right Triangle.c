// Determining right triangle using pathagorous theorem

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// Declaration of variables

	float side1, side2, side3, hyp = 0,res=0;
	side1 = side2 = side3 = 0;

	//Taking input from user 

	printf("Enter first side : ");
	scanf("%f", &side1);
	printf("Enter second side : ");
	scanf("%f", &side2);
	printf("Enter third side : ");
	scanf("%f", &side3);
	
	//Processing

	if(side1>0 && side2>0 && side3>0)
	{
		if (side1 >= side2 && side1 >= side3)
		{
			hyp = side1;
			res = (side2 * side2) + (side3 * side3);

		}
		else if (side2 >= side1 && side2 >= side3)
		{
			hyp = side2;
			res = (side1 * side1) + (side3 * side3);
		}
		else if (side3 >= side1 && side3 >= side2)
		{
			hyp = side3;
			res = (side1 * side1) + (side2 * side2);
		}
		else {
			printf("Invalid Input . ");
			res = 1;
		}
	}
	else
	{
		printf("Invalid Input . \n");
		res = 1;
	}
	hyp = hyp * hyp;
	
	// Displaying Output

	if (hyp == res)
	{
		printf("The given sides are of right triangle . ");
	}
	else
	{
		printf("The given sides are not of Right Triangle");
	}

	return 0;

}