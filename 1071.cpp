#include <stdio.h>
 
int main() {
 	int x, y, soma = 0;
 	scanf("%i %i", &x, &y);
 	y+=1;
 	for (;x>y;y++){
 		if(y%2 == 1 || y%2 == -1){
 			soma+=y;
		 }
	 }
	printf("%i\n", soma);
    return 0;
}
