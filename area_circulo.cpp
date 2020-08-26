#include <stdio.h>
#include <math.h>
#define n  3.14159

int main(void){
	double raio, area;
	scanf("%lf", &raio);
	area = pow(raio,2)*n;
	printf("A=%0.4lf\n", area);
	return 0;
}
