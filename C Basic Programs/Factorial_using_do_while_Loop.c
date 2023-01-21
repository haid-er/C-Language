
#include <stdio.h>
#include <conio.h>
main()
{
  int a=1,b=1,n;
  clrscr();
  printf("Enter any no.:");
  scanf("%d",&n);
  do
  {
     a=a*b;
     b++;
  }while(b<=n);
  printf("Factorial:%d",a);
  getch();
}