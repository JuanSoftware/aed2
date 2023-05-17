#include <stdio.h>

main(){
	float notas, notaFinal;
	int i;
	
	for(i=0;i<2;i++){
		printf("Digite a media %d: \n",i+1);
		scanf("%f",&notas);
		notas= notas+ notas;
	}
	notaFinal= notas/2;
	
	if(notaFinal>7){
		printf("Aprovado com media %.1f", notaFinal);
	}
	else if(notaFinal<3){
		printf("Reprovado com media %.1f", notaFinal);
	}
	else{
		printf("Vai pra prova final com media %.1f", notaFinal);
	}
	
}
