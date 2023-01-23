#include <stdio.h>
#include <conio.h>
main()
{
     int n, b;
     //   clrscr();
     for (n = 1; n <= 5; n++)
     {
          for (b = 1; b <= n; b++)
               printf("*");
          printf("\n");
     }
     getch();
}
