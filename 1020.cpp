#include <stdio.h>

int main(void){
	int d, dias, meses, anos;
	scanf("%i", &d);
	anos = d/365;
	d=d%365;
	meses=d/30;
	d%=30;
	dias=d;
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", anos, meses, dias);
	return 0;
}
