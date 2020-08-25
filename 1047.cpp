#include <stdio.h>
 
int main() {
 	int hi, mi, hf, mf, diferencah, diferencam;
 	scanf("%i %i %i %i", &hi, &mi, &hf, &mf);
 	mi += hi* 60;
 	mf += hf* 60;
 	if (mf<=mi){
 		diferencam = 24*60 - mi + mf; 
	 }
	 else{
	 	diferencam = mf - mi;
	 }
	 diferencah = diferencam/60;
	 diferencam = diferencam%60;
	 printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", diferencah, diferencam);
    return 0;
}
