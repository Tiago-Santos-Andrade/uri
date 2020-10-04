#include <stdio.h>

int recebe(void);
int zerar(int k[9]);
int verifica(int ma[9][9]);

int main(void){
	int repeti, n = 0;
	scanf("%i", &n);
	for(repeti = 1; repeti<=n; repeti++){
		if(recebe()){
			printf("Instancia %i\nSIM\n\n", repeti);
		}
		else{
			printf("Instancia %i\nNAO\n\n", repeti);
		}
	}
	return 0;
}

int recebe(void){
	int matriz[9][9], i, j;
	for(i=0; i<9;i++){
		for(j=0;j<9;j++){
			scanf("%i", &matriz[i][j]);
		}
	}
	
	if (verifica(matriz)){
		return 1;
	}
	return 0;
}

int verifica(int ma[9][9]){
	int i, j, k, l, m, n, a, quadrante[9] = {0,0,0,0,0,0,0,0,0};
	for (i = 0; i<9; i++){
		for (j=0; j<9; j++){
			for ( k = 0; k<=9; k++){
				if (quadrante[k] == ma[i][j]){
					return 0;
				}
			}
			quadrante[j] = ma[i][j];
		}
		zerar(quadrante);
	}
	
	// Para verificar se tem numeros repetidos nas colunas as colunas
	for (i = 0; i<9; i++){
		for (j=0; j<9; j++){
			for ( k = 0; k<=9; k++){
				if (quadrante[k] == ma[j][i]){
					return 0;
				}
			}
			quadrante[j] = ma[j][i];
		}
		zerar(quadrante);
	}

	// Para verificar os quadrantes
	for (l =0; l<3; l++){
		for (m=0; m<3; m++){
			for (i=0; i<3; i++){
				n=0;
				for (j=0; j<3; j++){
					for ( k = 0; k<=9; k++){
						if (quadrante[k] == ma[l*3+i][m*3+j]){
						return 0;
						}
					}
					quadrante[n] = ma[l*3+i][m*3+j];
					n++;
				}
			}
			zerar(quadrante);
		}
	}
	return 1;
}

int zerar(int k[9]){
	int i;
	for (i=0;i<9;i++){
		k[i] = 0;
	}
}
