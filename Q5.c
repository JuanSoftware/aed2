#include <stdio.h>

main(){
	float salario, salarioBruto, salarioConta;
	int dependentes;
	printf("Digite o salario: \n");
	scanf("%f",&salario);
	printf("Digite quantidade de dependentes: \n");
	scanf("%d",&dependentes);
	
	salarioBruto = salario + (dependentes*32);
	salarioConta= salarioBruto - (salarioBruto * 0.275);
	
	printf("\n O salario e: %.2f", salarioConta);
}
