#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 15
#define LEN 40
int length(const char* n);
int compare(const char* a, const char* b);
int main()
{
	char studentId[LEN];
	char* legalStudents[MAX] = {
		"BITF21M501",
		"BITF21M502",
		"BITF21M503",
		"BITF21M504",
		"BITF21M505",
		"BITF21M506",
		"BITF21M507",
		"BITF21M508",
		"BITF21M509",
		"BITF21M510"
	};
	printf("Please enter the Id of Student: ");
	scanf("%s", studentId);
	int comp;
	int flag = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (*(legalStudents + i) == 0)
			break;
		comp = compare(*(legalStudents + i), studentId);
		if (comp == 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%s is in the Legal Student\n", studentId);
	else
		printf("Sorry %s is not a legal Student.\n", studentId);
}
int length(const char* n)
{
	int i = 0;
	while (*n != '\0')
	{
		i++;
		n++;
	}
	return i;
}
int compare(const char* a, const char* b)
{
	int a1 = length(a);
	int b1 = length(b);
	int size = 0;
	if (a1 < b1)
	{
		return 0;
	}
	else if (a1 > b1)
	{
		return 0;
	}
	else
	{
		int flag = 1;
		for (int i = 0; i < a1; i++)
		{
			if (*a != *b)
			{
				flag = 0;
				break;
			}
			a++;
			b++;
		}
		if (flag == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}