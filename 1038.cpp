#include <stdio.h>

int main(void){
	int qt, n;
	float total;
	scanf("%i", &n);
	scanf("%i", &qt);
	if (n==1){
		total = qt*4.0;
		printf("Total: R$ %0.2f\n", total);
	}
	else if (n==2){
		total = qt*4.5;
		printf("Total: R$ %0.2f\n", total);
	}
	else if (n==3){
		total = qt*5.0;
		printf("Total: R$ %0.2f\n", total);
	}
	else if (n==4){
		total = qt*2.0;
		printf("Total: R$ %0.2f\n", total);
	}
	else if (n==5){
		total = qt*1.5;
		printf("Total: R$ %0.2f\n", total);
	}
	return 0;
}
