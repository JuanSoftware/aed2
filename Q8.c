#include <stdio.h>

main(){
	float velocidadeKm, velocidadeMs;
	
	printf("Digite a velocidade: ");
	scanf("%f",&velocidadeKm);
	
	velocidadeMs= velocidadeKm/3.6;
	
	printf("A velocidade e: %.2fm/s",velocidadeMs);
}
