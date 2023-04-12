#include <stdio.h>

main(){
	float salario, salarioConta;
	printf("Digite o salario: \n");
	scanf("%f",&salario);
	
	if(salario>200){
		salarioConta= salario*1.5;
		printf("Salario: %.2f", salarioConta);
	}
	else{
		salarioConta= salario*1.3;
		printf("Salario: %.2f", salarioConta);
	}
}
