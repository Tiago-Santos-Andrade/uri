#include <stdio.h>

int main(void){
	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if(a < b+c && b < a+c && c < a+b){
		float perimetro = a+b+c;
		printf("Perimetro = %0.1f\n", perimetro);
	}else{
		float area = (a+b)*c/2;
		printf("Area = %0.1f\n", area);
	}
	return 0;
}
