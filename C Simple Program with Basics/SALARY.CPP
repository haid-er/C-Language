/*program that input salary and grade from user and calculate the net
salary if the grade is>18 it adds 20% special allonce,10% refreshment,
15% medical,45%house rent and deduct 2.5% bf,7.5% gpf,5%income tax if
the grade is<18 it adds 5% refreshment,7.5%utility,10% medical,30% house
rent and deduct 2.5% bf,5.3% gpf.Calculate net salary.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int salary,net_salary,grade;
	float spec_al,refreshment,medical,house_rent,bf,gpf,income_tax,utility;
	clrscr();
	printf("Enter your salary:");
	scanf("%d",&salary);
	printf("Enter your Grade:");
	scanf("%d",&grade);
	if(grade>18)
	{
		spec_al=salary*0.2;
		refreshment=salary*0.1;
		medical=salary*0.15;
		house_rent=salary*0.45;
		bf=salary*0.025;
		gpf=salary*0.075;
		income_tax=salary*0.05;
		net_salary=(salary+spec_al+refreshment+medical+house_rent)-(gpf+bf+income_tax);
	}
	else
	{
		refreshment=salary*0.05;
		utility=salary*0.075;
		medical=salary*0.1;
		house_rent=salary*0.3;
		bf=salary*0.025;
		gpf=salary*0.053;
		net_salary=(salary+refreshment+utility+medical+house_rent)-(bf+gpf);
	}
	printf("Your net salary is:%d",net_salary);
	getch();
}