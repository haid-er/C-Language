#include <stdio.h>
#include <conio.h>
main()
{
  int n, b = 4;
  // clrscr();
  do
  {
    n = b;
    do
    {
      printf("%d\t", b);
      n--;
    } while (n >= 1);
    b--;
    printf("\n");
  } while (b >= 1);
  getch();
}
