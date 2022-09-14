// Program
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	for (int i = 0; i < 24; i++)    // Hours
		for (int j = 0; j < 60; j++)   // Minutes
			for (int k = 0; k < 60; k++)    //Seconds
				printf("%02d:%02d:%02d \n", i, j, k);    // Display

	return 0;

}