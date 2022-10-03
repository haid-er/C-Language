/*
    Name : MALIK HAIDER ALI
    Roll No : BITF21M541
    Class : BSIT 2nd Semester Fall-2021
*/

#include<stdio.h>
// Function declaration 
unsigned long long int FibonacciSeriesUsingRecursion(int n);
// Main Function
int main()
{
    // Variable Decalaration
   int n;
   do
   {
        printf("Enter number of terms you want to print : ");
        scanf("%d",&n);
            if(n<0)
                printf("Invalid Input ! ");
   }while(n<0);
   printf("Fibonacci series\n");
    // This loop will iterate each time for the given number of terms
   for (int i = 0 ; i < n ; i++ )
   {
      printf("%d\t", FibonacciSeriesUsingRecursion(i)); 
   }
 
   return 0;
}
 // Function Definiton
unsigned long long int FibonacciSeriesUsingRecursion(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( FibonacciSeriesUsingRecursion(n-1) + FibonacciSeriesUsingRecursion(n-2) ); // Function call inside its own body (Recursion)
}