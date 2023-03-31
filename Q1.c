#include <stdio.h>

main(){
	int n[3], resultado, i;
	for(i=3;i>0;i--){
		printf("Digite um numero:\n");
		scanf("%d", &n[i]);
		resultado= resultado + n[i];
		
	}
	printf("%d", resultado);
}
