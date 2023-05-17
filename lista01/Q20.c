#include <stdio.h>

main(){
	int num[3],i, maior=0;
	
	for(i=0;i<3;i++){
		printf("Digite o num %d: \n",i+1);
		scanf("%d",&num[i]);
		if(num[i]>maior){
			maior=num[i];
		}
	}
	if(num[0]==num[1] && num[0]==num[2]){
		printf("Numeros identicos");
	}
	else{
		printf("%d e o maior numero", maior);
	}
}
