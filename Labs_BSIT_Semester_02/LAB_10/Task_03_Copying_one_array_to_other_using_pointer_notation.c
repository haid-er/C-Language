// Program to copy array to an other array using pointer notation
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 20
void copyIntArray(int* dest, const int* src, int size);
int main()
{
	// Declaration of arrays

	char destination[SIZE];
	char source[SIZE] = "Hello World";

	// Processing

	copyIntArray(destination, source, SIZE);

	// Displaying Output

	printf("First Array : %s\n", destination);
	printf("Second Array : %s\n", source);


	return 0;

}
void copyIntArray(int* dest, const int* src, int size)
{
	int i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
}
