#include <stdio.h>

int main(void){
	char nome[20];
	double fixo, vendas, total;
	scanf("%s", nome);
	scanf("%lf", &fixo);
	scanf("%lf", &vendas);
	total = fixo + 0.15*vendas;
	printf("TOTAL = R$ %0.2lf\n", total);
	return 0;
}
