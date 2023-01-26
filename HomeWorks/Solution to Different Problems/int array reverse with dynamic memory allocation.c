#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, * arr, i, temp;
    printf("Enter size of Array : ");
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    printf("Enter enteries : ");
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    i = num - 1;
    for (int j = 0; j < num / 2; j++)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i--;
    }
    printf("Reversed Array : \n");
    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}