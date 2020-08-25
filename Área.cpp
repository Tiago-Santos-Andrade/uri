#include <stdio.h>

int main(void){
	double a, b, c, area_triang, area_circulo, area_trapezio, area_quadrado, area_retangulo;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	area_triang = a*c/2;
	area_circulo = 3.14159*c*c;
	area_trapezio = (a+b)*c/2;
	area_quadrado = b*b;
	area_retangulo = a*b;
	printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", area_triang, area_circulo, area_trapezio, area_quadrado, area_retangulo);	
	return 0;
}
