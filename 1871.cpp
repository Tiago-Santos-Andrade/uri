#include <stdio.h>

int main(void){
	int m=1, n=1, soma=0, saida[10], i, cont = 0;
	for (;m!=0 && n!=0;){
		scanf("%i %i", &m, &n);
		soma = m+n;
		if (m == 0 && n==0){
			break;
		}
		else{
			for (i=1000000000, cont = 0; i>=10;){
				int num = (soma%i)/(i/10);
				saida[cont] = num;
				i = i/10;
				cont++;
		}
		for (i=0;i<10;i++){
			if (saida[i] != 0){
				printf("%i", saida[i]);
			}
		}
		printf("\n");
	}
	}
}

