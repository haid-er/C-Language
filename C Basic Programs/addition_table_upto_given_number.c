#include <stdio.h>
#include <conio.h>
main()
{
  int n, e, b, s;
  // clrscr();
  printf("Enter ending no.:");
  scanf("%d", &e);
  printf("INTERGER\tAdding Result\n");
  for (n = 1; n <= e; n++)
  {
    s = 0;
    for (b = 1; b <= n; b++)
      s = s + b;
    printf("%d\t\t\t%d\n", n, s);
  }
  getch();
}
