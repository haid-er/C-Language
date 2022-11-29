// Program to make and calculae some complex numbers
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Complex
{
	int real, imaginary;
};
struct Complex addTwo(struct Complex* c1, struct Complex* c2);
int main()
{
	// Declaration of variables

	struct Complex comp1,comp2,sum;

	// Taking inputs from user

	printf("Enter real part of Complex number 1 : ");
	scanf("%d", &comp1.real);
	printf("Enter imaginary part of Complex number 1 : ");
	scanf("%d", &comp1.imaginary);
	printf("\n\tComplex 1 : %d + %di\n\n", comp1.real, comp1.imaginary);
	printf("Enter real part of Complex number 2 : ");
	scanf("%d", &comp2.real);
	printf("Enter imaginary part of Complex number 2 : ");
	scanf("%d", &comp2.imaginary);
	printf("\n\tComplex 2 : %d + %di\n\n", comp2.real, comp2.imaginary);

	// Processing and Displaying Output

	
	sum = addTwo(&comp1, &comp2);

	printf("Sum of Both Complex Numbers : %d + %di\n", sum.real, sum.imaginary);
	return 0;

}
struct Complex addTwo(struct Complex* c1, struct Complex* c2)
{
	struct Complex sum;
	sum.real = c1->real + c2->real;
	sum.imaginary = c1->imaginary + c2->imaginary;
	return sum;
}
