#include <stdio.h>
 
int main(void){
	float n, resultado;
	scanf("%f", &n);
	if (n<=2000){
		printf("Isento\n");
	}
	else if(n>2000 && n<=3000){
		resultado = (n-2000)*0.08;
		printf("R$ %0.2f\n", resultado);
	}
	else if(n>3000 && n<=4500){
		resultado = 1000*0.08;
		n-= 3000;
		resultado+= n*0.18;
		printf("R$ %0.2f\n", resultado);
	}
	else if(n>4500){
		resultado = 1000*0.08;
		n-= 3000;
		resultado+= 1500*0.18;
		n-=1500;
		resultado+= n*0.28;
		printf("R$ %0.2f\n", resultado);
	}
	
	
    return 0;
}
