#include <stdio.h>
#include <string.h>

int main(){

	char nome[20];
	char nome2[20];
	
	fgets(nome,20,stdin);
	fgets(nome2,20,stdin);
	
	int c=0;
	
	int iguais=0;
	
	while(nome[c]!='\0'){
		
		if(nome[c] == nome2[c]){
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
