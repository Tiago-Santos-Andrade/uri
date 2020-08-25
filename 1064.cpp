#include <stdio.h>

int main(void){
	float n, media = 0;
	int positivos = 0, i;
	for (i = 0; i<6; i++){
		scanf("%f", &n);
		if (n >0){
			positivos++;
			media+=n;
		}
	}
	media/=positivos;
	printf("%i valores positivos\n", positivos);
	printf("%0.1f\n", media);
	return 0;
}
