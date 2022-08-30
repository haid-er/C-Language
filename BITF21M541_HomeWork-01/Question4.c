//Newton law of Gravitational Force
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float mass1, mass2, distance,k=(6.67e-11);
	double force;
	printf("Please enter mass of first body in kgs : ");
	scanf("%f", &mass1);
	printf("Please enter mass of second body on kgs : ");
	scanf("%f", &mass2);
	printf("Please enter distance between bodies in meters : ");
	scanf("%f", &distance);
	force = (k*mass1*mass2)/(distance*distance);
	printf("Gravitational Force between the bodies = %.14f", force);
	return 0;

}