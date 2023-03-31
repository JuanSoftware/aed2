#include <stdio.h>

main(){
	int nota[2],peso[2],pontos,somaP , resultado, i;
	for(i=2;i>0;i--){
		printf("\nDigite a nota:\n");
		scanf("%d", &nota[i]);
		printf("Digite o peso:\n");
		scanf("%d", &peso[i]);
		somaP= somaP + peso[i];
		
		
		pontos= (nota[0]* peso[0])+ (nota[1]* peso[1]);
	}
	somaP--;
	resultado= pontos/(somaP);
	printf("%d     %d", pontos, somaP);
	printf("\n A media é %d", resultado);
}
