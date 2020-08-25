#include <stdio.h>
 
int main() {
	int n, sec, min, h;
	scanf("%i", &n);
	h = n/3600;
	n= n%3600;
	min = n/60;
	n = n%60;
	sec = n;
	printf("%i:%i:%i\n", h, min, sec)
    return 0;
}
