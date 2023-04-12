#include <stdio.h>

main(){
	char carro[1];
	float distancia, consumo;
	
	printf("Digite o modelo do carro A,B ou C:  ");
	scanf("%s",&carro);
	
	if(strcmp(carro, "A" )==0 || strcmp(carro, "a" )==0){
		printf("Informe a distancia:  ");
		scanf("%f",& distancia);
		consumo= distancia/8;
		printf("Esse carro ira consumir %.2f litros", consumo);
	}
	
	else if(strcmp(carro, "B" )==0 || strcmp(carro, "b" )==0){
		printf("Informe a distancia:  ");
		scanf("%f",& distancia);
		consumo= distancia/9;
		printf("Esse carro ira consumir %.2f litros", consumo);
		
	}
	
	else if(strcmp(carro, "C" )==0 || strcmp(carro, "c" )==0){
		printf("Informe a distancia:  ");
		scanf("%f",& distancia);
		
		consumo= distancia/12;
		printf("Esse carro ira consumir %.2f litros", consumo);
		
	}
	else{
		printf("Carro invalido");
	}
	
	
}
