#include <stdio.h>
#include <conio.h>
main()
{
  long t,x,r;
  clrscr();
  printf("Enter any no.:");
  scanf("%ld",&x);
  r=0;
  for(t=x;t!=0;t=t/10)
      r=10*r+t%10;
  printf("Before reverse=%ld\nAfter reverse=%ld",x,r);
  getch();
}