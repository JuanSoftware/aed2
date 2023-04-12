#include <stdio.h>

main(){
	float valor, valorFinal;
	printf("Digite o valor do produto: \n");
	scanf("%f",&valor);
	
	if(valor<200){
		valorFinal= valor*1.5;
		printf("Valor: %.2f", valorFinal);
	}
	else{
		valorFinal= valor*1.3;
		printf("Valor: %.2f", valorFinal);
	}
}
