#include <stdio.h>
 
int main() {
	int n, pares=0, i;
	for (i = 0; i<5; i++){
		scanf("%i", &n);
		if (n%2 == 0){
			pares++;
		}
	}
	printf("%i valores pares\n", pares);
    return 0;
}
