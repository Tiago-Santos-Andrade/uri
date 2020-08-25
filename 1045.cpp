#include <stdio.h>

int main(void){
	int i, j;
	double a[3], maior;
	scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i] > a[j]){
				maior = a[i];
				a[i] = a[j];
				a[j] = maior;
			}
		}
	}
	
	if(a[0]>= a[1]+a[2]){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if (a[0]*a[0] == a[1]*a[1]+ a[2]*a[2]){
			printf("TRIANGULO RETANGULO\n");
		}
		if (a[0]*a[0] > a[1]*a[1] + a[2]*a[2]){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if (a[0]*a[0] < a[1]*a[1] + a[2]*a[2]){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if (a[0]==a[1] && a[1]==a[2] &&a[0]== a[2]){
			printf("TRIANGULO EQUILATERO\n");
		}
		if(a[0] == a[1] || a[1]==a[2] || a[0]==a[2]){
			printf("TRIANGULO ISOCELES\n");
		}
	}	
	return 0;
}
