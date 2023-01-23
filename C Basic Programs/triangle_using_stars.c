#include <stdio.h>
#include <conio.h>
main()
{
  int i, j;
  //  clrscr();
  for (i = 7; i >= 1; i--)
  {
    j = 1;
    while (j <= i)
    {
      printf("*");
      j++;
    }
    printf("\n");
  }
  getch();
}