#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[101];
	char nome2[101];
	int i;
	int tam=0;
	int palindromo;
	
		fgets(nome,101,stdin);
		i=0;
		while(nome[tam]!='\n'){
		
			tam++;
			
		}
			
		nome[tam]= '\0';
		for(i=0;i<tam;i++){
			nome2[i] = nome[tam-i-1];
		}
		nome2[i] = '\0';
		
		if(!strcmp(nome,nome2)){ //teste se é igual a 1
			printf("PALINDROMA");
		}else{
			printf("NAO PALINDROMA");
		}
	
	return 0;
}
