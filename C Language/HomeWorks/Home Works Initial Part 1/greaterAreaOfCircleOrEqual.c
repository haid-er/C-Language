//Program to find that two areas of circle are equal or which one is greater or smaller
#define _CRT_SECURE_NO_WANINGS
#include<stdio.h>

int main()
{
    float var1,var2;
    printf("Enter value of first Radius : ");
    scanf("%f",&var1);
    printf("Enter value of second Radius : ");
    scanf("%f",&var2);
    var1 = 3.14*var1*var1;
    var2 = 3.14*var2*var2;
    if(var1>var2)
    {
        printf("The area of first circle is greater than second . ");
    }
    else
    {
        if(var1==var2)
            printf("The area of first and second circle is equal .");
        else
            printf("The area of second circle is greater than first .");
    }

    return 0;
}