#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int* ptr = (int*)malloc(sizeof(int) * n);

    int sum = 0;
    printf("Enter enteries : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i];
    }
    printf("Sum of Array : %d", sum);
    return 0;
}
