#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[101];
	int i, tam=0,palindromo=1;
	
		fgets(nome,101,stdin);
		i=0;
		while(nome[i]!='\n'){
		
			tam++;
			i++;
		}
	
		
		for(i=0;i<tam/2;i++){
		
			if(nome[i]!=nome[tam-1-i]){
				palindromo=0;
			}
		}
		
		if(palindromo){ //teste se é igual a 1
			printf("PALINDROMA");
		}else{
			printf("NAO PALINDROMA");
		}
	
	return 0;
}
