#include <stdio.h>

main(){
	float salario, salarioConta;
	printf("Digite o salario: \n");
	scanf("%f",&salario);
	
	if(salario<2000){
		salarioConta= salario*0.9;
		printf("Salario: %.2f", salarioConta);
	}
	else{
		salarioConta= salario*0.8;
		printf("Salario: %.2f", salarioConta);
	}
}
