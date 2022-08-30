//Sales Tax and Amount of Purchase
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float purchaseAmount, fst, pst, tst, totalAmount;
	printf("Please enter Amount of purchase : ");
	scanf("%f", &purchaseAmount);
	fst = 0.06 * purchaseAmount;
	pst = 0.04 * purchaseAmount;
	tst = fst+pst;
	totalAmount = purchaseAmount +tst;
	printf("The Amount of purchase is : %.2f\n", purchaseAmount);
	printf("The Amount of faderal sales tax : %.2f\n", fst);
	printf("The Amount of provincial sales tax : %.2f\n", pst);
	printf("The Amount of total sales tax : %.2f\n", tst);
	printf("The total Amount of sale : %.2f\n",totalAmount );
	return 0;

}