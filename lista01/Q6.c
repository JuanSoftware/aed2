#include <stdio.h>

main(){
	float valorAntigo, valorNovo, aumento;
	printf("Digite o valor antigo: \n");
	scanf("%f",&valorAntigo);
	printf("Digite o valor novo: \n");
	scanf("%f",&valorNovo);
	
	aumento= ((valorNovo-valorAntigo)/valorAntigo)*100;
	printf(" Teve uma varia��o de: %.0f%%", aumento);
}
