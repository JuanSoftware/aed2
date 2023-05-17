#include <stdio.h>

int main(){
	int n[3], resultado, i;
	entrada(n, resultado);
	
}
int entrada(int n[3], int resultado, int i){
	for(i=3;i>0;i--){
		printf("Digite um numero:\n");
		scanf("%d", &n[i]);
		resultado= resultado + n[i];
	}
	printf("%d", resultado);
}

