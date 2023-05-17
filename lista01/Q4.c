#include <stdio.h>

main(){
	float salario, aumento, porcAumento, salarioAntigo;
	printf("Digite o salario antigo ");
	scanf("%f", & salarioAntigo);
	printf("Digite a porcentagem de aumento ");
	scanf("%f", & porcAumento);
	
	aumento= 1+(porcAumento/100);
	
	salario = salarioAntigo * aumento;
	
	printf("%.2f", salario);
	
}
