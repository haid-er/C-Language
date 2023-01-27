#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    

    char s[1000];
    printf("Enter string containing digits : ");
    scanf("%s", s);


    int arr[10] = { 0 };

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        switch (s[i])
        {
        case 48:
            arr[0]++;
            break;
        case 49:
            arr[1]++;
            break;
        case 50:
            arr[2]++;
            break;
        case 51:
            arr[3]++;
            break;
        case 52:
            arr[4]++;
            break;
        case 53:
            arr[5]++;
            break;
        case 54:
            arr[6]++;
            break;
        case 55:
            arr[7]++;
            break;
        case 56:
            arr[8]++;
            break;
        case 57:
            arr[9]++;
            break;

        default:
            break;
        }
    }
    printf("0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}