// Program to display grades according to marks
// 90 - 100 A+
// 80 - 90 A-
// 70 - 80 B+
// 60 - 70 B-
// 50 - 60 C
// 40 - 50 D
// 33 - 40 E
// less than 33- Fail

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int marks;
	printf("Enter you Marks : ");
	scanf("%d", &marks);
	if (marks <= 100 && marks >= 0)
	{
		if (marks > 90)
		{
			printf("A+");
		}
		else
		{
			if (marks > 80)
			{
				printf("A-");
			}
			else
			{
				if (marks > 70)
				{
					printf("B+");
				}
				else
				{
					if (marks > 60)
					{
						printf("B-");
					}
					else
					{
						if (marks > 50)
						{
							printf("C");
						}
						else
						{
							if (marks > 40)
							{
								printf("D");
							}
							else
							{
								if (marks > 33)
								{
									printf("E");
								}
								else {
									if (marks < 33)
									{
										printf("Fail");
									}
									else {
										printf("Invalid Input");
									}
								}
							}
						}
					}
				}
			}

		}
	}
	else
	{
		printf("Invalid Input");
	}

}


// OR we can also use if else if structure as below 




/*
{
	int marks;
	printf("Enter you Marks : ");
	scanf("%d", &marks);
	if (marks <= 33 && marks >=0)
	{
		printf("Fail");
	}
	else if (marks > 33 && marks <=40)
	{
		printf("E");
	}
	else if (marks > 40 && marks <=50)
	{
		printf("D");
	}
	else if (marks > 50 && marks <=60)
	{
		printf("C");
	}
	else if (marks > 60&& marks <=70)
	{
		printf("B-");
	}
	else if (marks > 70 && marks <=80)
	{
		printf("B+");
	}
	else if (marks > 80 && marks <=90)
	{
		printf("A-");
	}
	else if (marks > 90&& marks<=100)
	{
		printf("A+");
	}
	else
	{
		printf("Invalid Input");
	}
	



	return 0;
}

*/