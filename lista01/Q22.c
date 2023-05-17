#include <stdio.h>
#include <math.h>

main(){
	char municipio[30];
	int eleitores,votos;
	float porcentagem;
	printf("Digite o nome do Municipio:  ");
	scanf("%s",&municipio);
	
	printf("\nDigite a quantidade de eleitores:  ");
	scanf("%d",&eleitores);
	
	printf("\nDigite a quantidade de votos do candidato mais votado:  ");
	scanf("%d",&votos);
	
	porcentagem= (float)votos/eleitores;
	if(eleitores<200000){
		printf("\nNao tem segundo turno");
	}
	else {
		porcentagem= (float)votos/eleitores;
		if(porcentagem>0.5){
			printf("Eleito no primeiro turno");
		}
		else{
			printf("Vai para o 2 turno");
		}
	}
}
