#include <stdio.h>

int main(void){
	int i, f, duracao;
	scanf("%i %i", &i, &f);
	if (i>=f){
		duracao = 24-i+f;
	}
	else{
		duracao = f-i;
	}
	printf("O JOGO DUROU %i HORA(S)\n", duracao);
	return 0;
}
