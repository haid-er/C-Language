#include <stdio.h>
#include <conio.h>
main()
{
  unsigned long long int n, b, f, e;
  // clrscr();
  printf("Enter ending no.:");
  scanf("%llu", &e);
  printf("INTEGER\t\tFACTORIAL");
  for (n = 1; n <= e; n++)
  {
    f = 1;
    for (b = 1; b <= n; b++)
      f = f * b;
    printf("\n%llu\t\t%llu", n, f);
  }
  getch();
}
