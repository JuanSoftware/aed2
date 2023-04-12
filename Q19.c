#include <stdio.h>

main(){
	int lado[3],i,num, resultado;
	
	for(i=0;i<3;i++){
		printf("Digite o lado %d: \n",i+1);
		scanf("%f",&lado[i]);
	}
	if(lado[0]== lado[1] && lado[0]== lado[2]){
		printf("Equilatero");
	}
	else if(lado[0]== lado[1] || lado[0]== lado[2] || lado[1]== lado[2]){
		printf("isosceles");
	}
	else{
		printf("Escaleno");
	}
	
}
