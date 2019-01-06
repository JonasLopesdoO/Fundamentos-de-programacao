#include <stdio.h>
#include <string.h>
char frase[1001];

void funcao1 (char ocorrencia, char substitui);
void funcao2 (int posicao, char caractere);
int funcao3 (char caracter);

void funcao5 (int posicao);

	
int main(){
	int tam,opcao,posicao;
	char ocorrencia, substitui, caractere;
	
	fgets(frase,1001,stdin);
	scanf("%d",&opcao);
	
	
	while(opcao!=7){
	
		switch(opcao){
			case 1:
				scanf(" %c %c",&ocorrencia,&substitui);
				funcao1(ocorrencia,substitui);
				scanf("%d",&opcao);
			
			break;
	
			case 2:
				scanf("%d %c",&posicao,&caractere);
				funcao2(posicao,caractere);
				scanf("%d",&opcao);
			break;
			
			case 3:
				scanf(" %c",&caractere);
				printf("%d\n",funcao3(caractere));
				scanf("%d",&opcao);
				
			break;
				
			case 4:
					tam = strlen(frase);
				printf("%d",tam);
				scanf("%d",&opcao);
			break;
				
			case 5:
				scanf("%d",&posicao);	
				funcao5(posicao);
				scanf("%d",&opcao);
			break;
				
			case 6:
				puts(frase);
				scanf("%d",&opcao);
		}
	}
	
	
	return 0;
}

void funcao1 (char ocorrencia, char substitui){
	int i;
		for(i=0;i<strlen(frase);i++){
			if(frase[i]==ocorrencia){
				frase[i]=substitui;
			}
		}
}

void funcao2 (int posicao, char caractere){
	int tam = strlen(frase)-1-1;
	if(posicao<0||posicao>tam){
		printf("Operacao Invalida");
	}else{
		frase[posicao]=caractere;	
	}
}

int funcao3 (char caractere){
	int i,cont=0;
		for(i=0;i<strlen(frase);i++){
			if(frase[i]==caractere){
				cont++;
			}
		}
		return cont;
}

void funcao5 (int posicao){
	int i;
	int tam = strlen(frase)-1-1;
		
			if(posicao<0||posicao>tam){
				printf("Operacao Invalida");
			}else{
						
				for(i=posicao;i<strlen(frase);i++){
					frase[i]=frase[i+1];
				}
			}
}
