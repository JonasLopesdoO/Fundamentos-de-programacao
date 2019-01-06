#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[30];
	char nome2[30];
	
 
	
	
	fgets(nome, 30, stdin);
	fgets(nome2, 30, stdin);
	
	int c =0;
	int iguais = 0;
	
	
	while(nome[c] != '\0' ){
	
		if(nome[c]==nome2[c]){
			iguais++;
		}
			c++;
	}
	
		if(iguais == c){
			printf("SIM");
		}else{
			printf("NAO");
		}

	return 0;
	}
