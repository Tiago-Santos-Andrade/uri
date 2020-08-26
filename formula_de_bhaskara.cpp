#include <stdio.h>
#include <math.h>

int main(void){
	double a,b,c, delta, r1, r2;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	delta = pow(b,2) -4*a*c;
	if (delta < 0 || a == 0){
		printf("Impossivel calcular\n");
	}else{
		r1 = (-b + sqrt(delta))/(2*a);
		r2 = (-b - sqrt(delta))/(2*a);
		printf("R1 = %0.5lf\nR2 = %0.5lf\n", r1, r2);
	}
	return 0;
}
