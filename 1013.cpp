#include <stdio.h>
#include <math.h>

int main(void){
	int a, b, c, maiorab, maior;
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	maiorab = (a+b+abs(a-b))/2;
	maior = (maiorab+c+abs(maiorab-c))/2;
	printf("%i eh o maior\n", maior);
	return 0;
}
