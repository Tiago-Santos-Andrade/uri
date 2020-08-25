#include <stdio.h>

int main(void){
	int n[3], original[3], i, j, maior;
	scanf("%i %i %i", &n[0], &n[1], &n[2]);
	for (i = 0; i<3; i++){
		original[i] = n[i];
	}
	for (i=0; i<3; i++){
		for (j =0; j<3;j++){
			if(n[i] < n[j]){
				maior = n[j];
				n[j]=n[i];
				n[i]=maior;
			}
		}
	}
	
	for (i = 0; i<3; i++){
		printf("%i\n", n[i]);
	}
	printf("\n");
	for (i = 0; i<3; i++){
		printf("%i\n", original[i]);
	}
	return 0;
}
