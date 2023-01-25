#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void display(int i, int j, int temp, int width, int a, int b);
int main()
{
	// Declaration of variables
	int width = 0, temp;
	// Taking inputs from user
	printf("Enter width : ");
	scanf("%d", &width);
	temp = (width * 2) - 1;
	// Displaying Output
	for (int i = temp; i > 0; i--)
	{
		for (int j = temp; j > 0; j--)
		{
			/*if (i == 1 || i == temp)
			{
				printf("%2d",width);
			}
			else
			{
				if ((j == 1 || j == temp))
					printf("%2d",width);
				else
				{
					if (i == 2 || i == temp - 1)
						printf("%2d", width - 1);
					else
					{
						if (j == 2 || j == temp - 1)
							printf("%2d", width - 1);
						else
						{
							if (i == 3 || i == temp - 2)
								printf("%2d", width - 2);
							else
							{
								if (j == 3 || j == temp - 2)
									printf("%2d", width - 2);
								else
								{
									if (i == 4 || i == temp - 3)
										printf("%2d", width - 3);
									else
									{
										if (j == 4 || j == temp - 3)
											printf("%2d", width - 3);
										else
										{
											if (i == 5 || i == temp - 4)
												printf("%2d", width - 4);
											else
											{
												if (j == 5 || j == temp - 4)
													printf("%2d", width - 4);
												else
												{
													if (i == 6 || i == temp - 5)
														printf("%2d", width - 5);
													else
													{
														if (j == 6 || j == temp - 5)
															printf("%2d", width - 5);
														else
															printf("  ");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}*/

			display(i, j, temp, width, 1, 0);
		}
		printf("\n");
	}
	return 0;

}
void display(int i, int j, int temp, int width, int a, int b)
{
	if (i == a || i == temp - b)
		printf("%2d", width - b);
	else
	{
		if (j == a || j == temp - b)
			printf("%2d", width - b);
		else
			display(i, j, temp, width, a + 1, b + 1);
	}
}

