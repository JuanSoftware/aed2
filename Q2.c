#include <stdio.h>

main(){
	int n[4], soma, resultado, i;
	for(i=4;i>0;i--){
		printf("Digite um numero:\n");
		scanf("%d", &n[i]);
		soma= soma + n[i];
		
	}
	resultado= soma/4;
	printf("A media é %d", resultado);
}
