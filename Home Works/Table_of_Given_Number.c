// Program todisplay table of given number to the given upperlimit

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num, upperLimit;
    int count = 1;
    system("cls");
    printf("Enter the Number : ");
    scanf("%d",&num);
    printf("Enter the Number to which you want to display Table : ");
    scanf("%d",&upperLimit);
    while(count<=upperLimit)
    {
        printf("%d * %d = %d \n", num , count , num*count);
        count++;        
    }       

    return 0;
}
