#include <stdio.h>

int main(void){
	int h, v;
	float c, h1, v1;
	scanf("%i", &h);
	scanf("%i", &v);
	h1 = h;
	v1 = v;
	c = (h1*v1)/12;
	printf("%0.3f\n", c);
	return 0;
}
