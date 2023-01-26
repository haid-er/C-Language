#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char* s;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*)realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

    char* ptr = strtok(s, " ");
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");

    }


    free(s);
    return 0;
}