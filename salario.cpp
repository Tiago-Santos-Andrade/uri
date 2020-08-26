#include <stdio.h>

int main(void){
	int n, h;
	float vph, salario;
	scanf("%i", &n);
	scanf("%i", &h);
	scanf("%f", &vph);
	salario = h*vph;
	printf("NUMBER = %i\nSALARY = U$ %0.2f\n", n, salario);
	return 0;
}
