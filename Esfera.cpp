#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
	double raio, volume;
	scanf("%lf", &raio);
	volume = pow(raio,3)*4/3*pi;
	printf("VOLUME = %0.3lf\n", volume);
	return 0;
}

