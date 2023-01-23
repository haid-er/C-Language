// Name and age file creation
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student
{
    char *name;
    int age;
};
int main()
{
    FILE *fp = fopen("students.bin", "w");
    int size = 0;
    int sizename = 0;
    printf("Enter maxium size of name : ");
    scanf("%d", &sizename);
    printf("Enter total Number of Students : ");
    scanf("%d", &size);
    getchar();
    struct Student *s1 = (struct Student *)malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++)
    {
        s1[i].name = (char *)malloc(sizename * sizeof(char));
        printf("Enter name of student %d : ", i + 1);
        gets(s1[i].name);
        printf("Enter age : ");
        scanf("%d", &s1[i].age);
        getchar();
    }
    for (int i = 0; i < size; i++)
    {
        fprintf(fp, "Name of Student %d : %s\tage : %d\n", i + 1, s1[i].name, s1[i].age);
    }

    free(s1);
    s1 = NULL;
    fclose(fp);
    printf("\n\nEnd of Program ! \n");
    return 0;
}