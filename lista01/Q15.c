#include <stdio.h>

main(){
	int num1,num2;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite um numero: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("%d e maior",num1);
	}
	else{
		printf("%d e maior", num2);
	}
}
