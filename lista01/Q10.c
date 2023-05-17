#include <stdio.h>
#include <strings.h>

main(){
	char senha[20], senhaUsuario[]= "LINGUAGEMC";
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	if(strcmp(senha,senhaUsuario)== 0){
		printf("Senha correta");
	
	}
	else{
		printf("Senha errada");
	}
}
