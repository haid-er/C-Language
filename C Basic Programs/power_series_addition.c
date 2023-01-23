#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     int a, x, n, s = 0;
     clrscr();
     printf("Enter no. for x : ");
     scanf("%d",&x);
     printf("Enter no. for n : ");
     scanf("%d",&n);
     for(a=1;a<=n;a++)
	s = s + pow(x,a);
     printf("S=%d",s);
     getch();
}