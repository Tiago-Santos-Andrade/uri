#include <stdio.h>
 
int main() {
	float sl, sla, diff;
	scanf("%f", &sl);
	sla = sl;
	if (sl>= 0 && sl <= 400){
		sl *= 1.15;
		diff = sl - sla;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 15 %\n", sl, diff);
	}
	else if(sl>400 && sl<=800){
		sl *= 1.12;
		diff = sl - sla;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 12 %\n", sl, diff);
	}
	else if(sl>800 && sl<=1200){
		sl *= 1.1;
		diff = sl - sla;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 10 %\n", sl, diff);
	}
	else if(sl>1200 && sl<=2000){
		sl *= 1.07;
		diff = sl - sla;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 7 %\n", sl, diff);
	}
	else{
		sl *= 1.04;
		diff = sl - sla;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 4 %\n", sl, diff);
	}

    return 0;
}
