#include <stdio.h>

main(){
	int compra, pagamento, troco, troco100, troco10, troco1;
	printf("Digite o valor da compra:  ");
	scanf("%d",&compra);
	
	printf("Digite o valor do pagamento:  ");
	scanf("%d",&pagamento);
	
	if(compra==pagamento){
		printf("Não precisa de troco");
		
	}
	else if(compra>pagamento){
		printf("Pagamento negado");
	}
	else{
		troco= pagamento-compra;
		
		troco100= troco/100;
		troco= troco - 100*troco100;
		
		troco10= troco/10;
		troco= troco - 10*troco10;
		
		troco1= troco/1;
		troco= troco - 1*troco1;
		
		printf("O troco e %d notas de R$100, %d notas de R$10, %d notas de R$1", troco100,troco10,troco1);
	}
	
}
