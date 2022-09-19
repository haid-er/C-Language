#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	printf("Enter three Numbers:");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a<b&&a<c)
		printf("%d is minimum.",a);
	else if(b<a&&b<c)
		printf("%d is minimum.",b);
	else
		printf("%d is minimum.",c);
	getch();
}