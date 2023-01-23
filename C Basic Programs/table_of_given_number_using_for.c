#include <stdio.h>
#include <conio.h>
main()
{
    int c,n;
    clrscr();
    printf("Enter any no.:");
    scanf("%d",&n);
    for(c=1;c<=10;c++)
    printf("%d*%d=%d\n",n,c,n*c);
    getch();
}