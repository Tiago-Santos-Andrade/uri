#include <stdio.h>

int main(void){
	int cod1, cod2, num1, num2;
	float val1, val2, total;
	scanf("%i", &cod1);
	scanf("%i", &num1);
	scanf("%f", &val1);
	scanf("%i", &cod2);
	scanf("%i", &num2);
	scanf("%f", &val2);
	total = val1*num1 + val2*num2;
	printf("VALOR A PAGAR: R$ %0.2f\n", total);
	return 0;
}
