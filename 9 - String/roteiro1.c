#include <stdio.h>
#include <string.h>
int main(){
	
	int i;
	char c;
	char sair='s';
	

		printf("Digite um caractere:\n");
	while(c!=sair){
	
		scanf("%s",&c);	
		i=c;
		printf("%d",i);
		printf("\nDigite um novo caractere:\n");
	}
	
	
	return 0;
}
