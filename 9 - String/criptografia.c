#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[30];
	printf("Digite o que quer criptografar para a criptografia jonas\n");
	fgets(nome,30,stdin);
	int i, tam;
	
	tam = strlen(nome);
	int aux[tam];
	
	for(i=0;i<tam;i++){
		aux[i] = nome[i];
		aux[i]+=15;
	}
	
	printf("Mensagem criptografada com sucesso para codigo Jonas\n");
	for(i=0;i<tam-1;i++){
		
		printf("%c",aux[i]);
	}
	
	return 0;
}
