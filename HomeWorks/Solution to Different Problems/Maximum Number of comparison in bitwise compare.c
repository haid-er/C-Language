#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 32
//Complete the following function.
void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int arr1[SIZE] = { 0 }, arr2[SIZE] = { 0 }, arrXOR[SIZE] = { 0 }, arrOR[SIZE] = { 0 }, arrAND[SIZE] = { 0 };
    int counter = 0;
    int temp1 = n, temp2 = k;
    int size1 = 0, size2 = 0;
    int tempMaxOR, tempMaxAND, tempMaxXOR, maxXOR, maxOR, maxAND;
    tempMaxAND = tempMaxOR = tempMaxXOR = maxAND = maxOR = maxXOR = 0;
    for(int i = 1; i <= n ; i++)
    {
        for(int j = i + 1 ; j <= n ; j++)
        {
            temp1 = i; temp2 = j;
            tempMaxAND = tempMaxOR = tempMaxXOR = 0;
            for (int i = 0; i < SIZE; i++)
            {
                arr1[i] = arr2[i] = arrAND[i] = arrOR[i] = arrXOR[i] = 0;
            }
            for (int i = 0; temp1 != 0; i++)
            {
                arr1[i] = temp1 % 2;
                temp1 = temp1 / 2;
            }
            for (int i = 0; temp2 != 0; i++)
            {
                arr2[i] = temp2 % 2;
                temp2 = temp2 / 2;
            }
            for (int i = 0; i < 32; i++)
            {
                arrAND[i] = arr1[i] & arr2[i];
                arrOR[i] = arr1[i] | arr2[i];
                arrXOR[i] = (arr1[i] & (~arr2[i])) | ((~arr1[i]) & arr2[i]);
            }
            for (int i = 0; i < 32; i++)
            {
                tempMaxAND = tempMaxAND + arrAND[i] * pow(2, i);
                tempMaxOR = tempMaxOR + arrOR[i] * pow(2, i);
                tempMaxXOR = tempMaxXOR + arrXOR[i] * pow(2, i);
            }
           
            if (maxAND < tempMaxAND &&  tempMaxAND < k)
            {
                maxAND = tempMaxAND;
            }
            if (maxOR < tempMaxOR && tempMaxOR < k)
            {
                maxOR = tempMaxOR;
            }
            if (maxXOR < tempMaxXOR && tempMaxXOR < k)
            {
                maxXOR = tempMaxXOR;
            }
           // printf("\n\n%d\t%d\t%d\t%d\t%d\n",i,j, tempMaxAND, tempMaxOR, tempMaxXOR);
        }
    }
    printf("%d\n%d\n%d\n", maxAND, maxOR, maxXOR);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
