#include <stdio.h>

main(){
	float pi=3.14,raio,area,perimetro,diametro, volume;
	
	printf("Digite o raio: ");
	scanf("%f",&raio);
	
	area= pi* (raio*raio);
	perimetro= 2*pi *raio;
	diametro= 2* raio;
	
	volume=(4*pi*raio*raio*raio)/3;
	
	printf("Diametro: %.2f \nPerimetro: %.2f \nArea: %.2f \nVolume: %.2f",diametro,perimetro,area,volume);
}
