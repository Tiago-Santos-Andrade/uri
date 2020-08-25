#include <stdio.h>

int main(void){
	int valori, valor, notas[7] = {100,50,20,10,5,2,1}, qtnotas[7], i;
	scanf("%i", &valor);
	valori = valor;
	for (i = 0; i<7; i++){
		qtnotas[i] = valor/notas[i];
		valor = valor%notas[i];
	}
	printf("%i\n", valori);
	for (i=0;i<7;i++){
		printf("%i nota(s) de R$ %i,00\n", qtnotas[i], notas[i]);
	}
	return 0;
}
