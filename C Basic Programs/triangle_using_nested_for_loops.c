#include <stdio.h>
#include <conio.h>
main()
{
  int n, b, a;
  // clrscr();
  for (n = 5; n >= 1; n--)
  {
    for (a = 1; a <= 5 - n; a++)
      printf(" ");
    for (b = 1; b <= n; b++)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
}
