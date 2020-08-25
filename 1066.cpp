#include <stdio.h>
 
int main() {
	int n, positivo = 0, negativo = 0, par = 0, impar = 0, i;
	for (i = 0; i<5; i++){
		scanf("%i", &n);
		if (n>0){
			positivo++;
		}
		else if (n<0){
			negativo++;
		}
		if (n%2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}
