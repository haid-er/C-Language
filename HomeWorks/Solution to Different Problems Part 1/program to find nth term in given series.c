#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    //Write your code here.
    int temp;
    if (n == 1)
    {
        return a;
    }
    if (n == 2)
    {
        return b;
    }
    if (n == 3)
    {
        return c;
    }
    else {
        for (int i = 3; i < n; i++)
        {
            temp = b;
            b = c;
            c = a + b + temp;
            a = temp;
        }
        return c;
        // return find_nth_term(--n, a, b, c);
    }
}

int main() {
    int n, a, b, c;
    printf("Enter temp number and then three terms of series : ");
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
