// Program to Calculate all odd and even number from 1 to the given number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num = 1 , upperLimit = 0 , sumEven = 0 , sumOdd = 0;
    system("cls");
    printf("Enter the Number to which you want to calculate Sum : ");
    scanf("%d",&upperLimit);
    while(num<=upperLimit)
    {
        if(num%2 == 0)
            sumEven = sumEven + num;
        else
            sumOdd = sumOdd + num;
        
        num++;
    }   
    printf("Sum of Even NUmbers from 1 to %d = %d \n",upperLimit , sumEven);
    printf("Sum of Odd NUmbers from 1 to %d = %d \n",upperLimit , sumOdd);


    return 0;
}
