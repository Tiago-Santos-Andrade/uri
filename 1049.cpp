#include <stdio.h>
#include <string.h>
 
int main() {
	char a1[15], a2[15], a3[15];
	scanf("%s", a1);
	scanf("%s", a2);
	scanf("%s", a3);
	if (strcmp(a1, "vertebrado") == 0){
		if (strcmp(a2, "ave") == 0){
			if (strcmp(a3, "carnivoro") == 0){
				printf("aguia\n");
			}
			else{
				printf("pomba\n");
			}
		}
		else{
			if (strcmp(a3, "onivoro") == 0){
				printf("homem\n");
			}
			else{
				printf("vaca\n");
			}
		}
	}
	else{
		if (strcmp(a2, "inseto") == 0){
			if (strcmp(a3, "hematofago") == 0){
				printf("pulga\n");
			}
			else{
				printf("lagarta\n");
			}
		}
		else{
			if (strcmp(a3, "hematofago") == 0){
				printf("sanguessuga\n");
			}
			else{
				printf("minhoca\n");
			}
		}
	}
    return 0;
}
