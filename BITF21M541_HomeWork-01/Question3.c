//Age conversion from years to days
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int age;
	printf("Please enter your age in years : ");
	scanf("%d", &age);
	age = age * 52560;
	printf("You are %d minutes old.", age);
	return 0;

}