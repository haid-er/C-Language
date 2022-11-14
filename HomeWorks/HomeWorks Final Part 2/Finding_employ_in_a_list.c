// Program to find if the employ is present in emplyes array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define MAX 5
#define LEN 10
int compare(const char* l, const char* n);
int length(const char* n);
int main()
{
	char name[LEN];
	char list[MAX][LEN] = { "Ahmad", "Ali", "Ammar", "Moosa", "Raza"};
	printf("%d", sizeof(list));
	printf("Please enter the name: ");
	scanf("%s", name);
	int eq;
	int flag = 0;
	for (int i = 0; i < MAX; i++)
	{
		eq = compare(*(list + i), name);
		if (eq == 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%s is in the Empolyees list", name);
	//printf("Yes enter name is our empolyee");
	else
		printf("Sorry %s is not in the Empolyees list", name);
	return 0;

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
int compare(const char* l, const char* n)
{
	int l1 = length(l);
	int l2 = length(n);
	//printf("%s %d\n", l, l1);
	//printf("%s %d\n", n, l2);
	int size = 0;
	if (l1 < l2)
	{
		return 0;
	}
	else if (l1 > l2)
	{
		return 0;
	}
	else
	{
		int flag = 1;
		for (int i = 0; i < l1; i++)
		{
			if (*l != *n)
			{
				flag = 0;
				break;
			}
			n++;
			l++;
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