#include <stdio.h>
#include <conio.h>
main()
{
     int fail, full, total, c, r;
     float ag = 0.0;
     clrscr();
     fail = full = total = 0;
     for (c = 1; c <= 35; c++)
     {
          printf("Enter no.s:");
          scanf("%d", &r);
          total = total + r;
          if (r == 100)
               full++;
          if (r < 50)
               fail++;
     }
     ag = total / 35.0;
     printf("Average=%.2f\nFull=%d\nFail=%d", ag, full, fail);
     getch();
}