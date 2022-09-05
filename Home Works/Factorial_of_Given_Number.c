// Program to calculate factorial of given number

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num, fact = 1;
    system("cls");
    printf("Enter the Number : ");
    scanf("%d",&num);
    while(num>=1)
    {
        fact = num * fact;
        num--;        
    }       

    printf("Factorial of Number = %d" , fact);

    return 0;
}
