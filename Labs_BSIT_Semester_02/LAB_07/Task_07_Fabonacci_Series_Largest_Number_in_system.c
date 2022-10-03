// Program to find fabonacci series highest number
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
unsigned long long int fabonacci();
int main()
{
    unsigned long long int highest;

    highest = fabonacci();
    printf("Largest fabonacci series number in this system = %llu", highest);
    return 0;
}
unsigned long long int fabonacci()
{
    unsigned long long int max = 0, n1 = 0, n2 = 1, n3;
    do
    {
        n3 = n1 + n2;
        //printf("    %llu", n3);
        n1 = n2;
        n2 = n3;
        if (n3 >= max)
            max = n3;
    } while (max <= n3);
    return max;

}