#include<stdio.h>
#include<conio.h>
int main()
{
	float amount,kg,ltr;
	int ch1,ch2;
	// clrscr();
	printf("Enter 1 for Patrol\nEnter 2 for Disel\nEnter 3 for CNG\n");
	scanf("%d",&ch1);
	switch(ch1)
	{
	 case 1:
		printf("Enter 1 for Patrol in Liters and 2 for Patrol in Amount:");
		scanf("%d",&ch2);
		break;
	 case 2:
		printf("Enter 3 for Disel in Liters and 4 for Disel in Amount:");
		scanf("%d",&ch2);
		break;
	 case 3:
		printf("Enter 5 for CNG in KGs and 6 for CNG in Amount:");
		scanf("%d",&ch2);
		break;
	 default:
		printf("Invalid Input Enter 1,2 or 3");
	}
	switch(ch2)
	{
	case 1:
		printf("Enter Patrol in liters:");
		scanf("%f",&ltr);
		amount=ltr*120.0;
		printf("You buy %4.2f Liter Patrol in amount of%5.1f Rupees.",ltr,amount);
		break;
	case 2:
		printf("Enter Amount to get Patrol:");
		scanf("%f",&amount);
		ltr=amount/120.0;
		printf("You buy %4.2f Liter Patrol in amount of%5.1f Rupees.",ltr,amount);
		break;
	case 3:
		printf("Enter Disel in liters:");
		scanf("%f",&ltr);
		amount=ltr*150.0;
		printf("You buy %4.2f Liters Disel in amount of %5.1f Rupees.",ltr,amount);
		break;
	case 4:
		printf("Enter Amount to get Disel:");
		scanf("%f",&amount);
		ltr=amount/120.0;
		printf("You buy %4.2f Liters Disel in amount of%5.1f Rupees.",ltr,amount);
		break;
	case 5:
		printf("Enter CNG in KGs:");
		scanf("%f",&kg);
		amount=kg*132.0;
		printf("You buy %4.2f KGs CNG in amount of%5.1f Rupees.",kg,amount);
		break;
	case 6:
		printf("Enter Amount to get CNG:");
		scanf("%f",&amount);
		kg=amount/120.0;
		printf("\nYou buy %4.2f KGs CNG in amount of %5.1f Rupees.",kg,amount);
		break;
	default:
		printf("\nPlease Enter a Valid Input");
	}
	printf("\nThank You");
	getch();
}

