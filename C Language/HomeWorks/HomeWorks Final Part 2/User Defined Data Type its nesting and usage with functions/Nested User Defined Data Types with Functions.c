// Program to make a nested user defined data type and initialize and display it through function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Address
{
	char dist[15];
	char city[15];
	char country[20];
};
struct Student
{
	char name[30];
	int age;
	struct Address add;
};
struct Student getDataForStudent(struct Student* s);
struct Address getDataForAddress();
void displayStudentData(struct Student* s);
void displayAddressData(struct Address* a);
int main()
{
	// Declaration of variables

	struct Student std;

	// Taking inputs from user

	getDataForStudent(&std);

	// Displaying Output

	printf("\n\n\n");
	displayStudentData(&std);

	return 0;

}
struct Address getDataForAddress()
{
	struct Address adr;
	printf("Enter your city Name : ");
	gets(adr.city);
	printf("Enter your District Name : ");
	gets(adr.dist);
	printf("Enter your Country : ");
	gets(adr.country);
	return adr;
}
struct Student getDataForStudent(struct Student* s)
{

	printf("Enter your name : ");
	gets(s->name);
	printf("Enter your age : ");
	scanf("%d", &s->age);
	getchar();
	s->add = getDataForAddress();
}
void displayStudentData(struct Student* s)
{
	printf("Name : %s\n", s->name);
	printf("Age of Student : %d\n", s->age);
	displayAddressData(&s->add);
}
void displayAddressData(struct Address* a)
{
	printf("City : %s\tDistrict : %s\t Country : %s\n", a->city, a->dist, a->country);
}