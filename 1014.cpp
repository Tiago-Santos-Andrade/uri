#include <stdio.h>

int main(void){
	int distancia;
	float y, resultado;
	scanf("%i", &distancia);
	scanf("%f", &y);
	resultado = distancia/y;
	printf("%0.3f km/l\n", resultado);
	return 0;
}
