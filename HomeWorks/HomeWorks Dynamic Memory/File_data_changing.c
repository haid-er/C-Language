#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 26

int main()
{
    char name[20];
    char roll[10], marks[10];
    FILE *p1 = fopen("students.txt", "r+");
    if (p1 == NULL)
    {
        printf("File Not Found ! \n");
        exit(0);
    }
    char str[1000], str1[1000];
    fread(str, sizeof str, 1000, p1);
    printf("\n\n");
    char temp;
    do
    {
        temp = getc(p1);
        printf("%c", temp);
    } while (temp != EOF);

    fseek(p1, 0, SEEK_SET);
    printf("\nEnter the name of student name to change: ");
    scanf("%s", &name);
    printf("ENter the current rollNumber of student: ");
    scanf("%s", &roll);
    printf("ENter the current marks of student: ");
    scanf("%s", &marks);

    char buffer[100];
    char *ptr1;
    char *ptr2, *ptr3;
    int length = 0;
    do
    {
        fgets(buffer, 100, p1);
        length = strlen(buffer);
        ptr1 = strtok(buffer, " ");
        ptr2 = strtok(NULL, " ");
        ptr3 = strtok(NULL, "\n");
        if ((strcmp(ptr1, name) == 0) && (strcmp(ptr2, roll) == 0) && (strcmp(ptr3, marks) == 0))
        {
            fseek(p1, -length - 1, SEEK_CUR);

            printf("Enter the new name: ");
            scanf("%s", &name);
            printf("ENter the new rollnumber ");
            scanf("%s", &roll);
            printf("ENter the new marks ");
            scanf("%s", &marks);
            strcat(name, " ");
            strcat(name, roll);
            strcat(name, " ");
            strcat(name, marks);
            fprintf(p1, "%s", name);
            break;
        }
    } while (!feof(p1));
    fclose(p1);
    return 0;
}