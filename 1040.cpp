#include <stdio.h>

int main(void){
	double n1, n2, n3, n4, media, ex;
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);
	scanf("%lf", &n4);
	media = (2*n1 + 3*n2 + 4*n3 + n4)/10;
	printf("Media: %0.1lf\n", media);
	if (media >=7){
		printf("Aluno aprovado.\n", media);
	}
	else if(media>=5){
		printf("Aluno em exame.\n");
		scanf("%lf", &ex);
		printf("Nota do exame: %0.1lf\n", ex);
		media = (media+ex)/2;
		if(media>=5){
			printf("Aluno aprovado.\nMedia final: %0.1lf\n", media);
		}
		else{
			printf("Aluno reprovado.\nMedia final: %0.1lf\n", media);
		}
	}
	else{
		printf("Aluno reprovado.\n", media);
	}
	
	return 0;
}
