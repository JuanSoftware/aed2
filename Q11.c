#include <stdio.h>

main(){
	int n;
	for(;;){
		printf("Digite um numero quando for maior que 100 saira do loop: ");
		scanf("%d",&n);
		
		if(n>100 && n<500){
			printf("esta entre 100 e 500");
			break;
		}
	}
}
