//Faça um programa que receba 10 palavras em ingles,
// ordene-os de maneira crescente, usando a ordem lexicografica
//  e escreva na tela segundo a nova ordem
#include <stdio.h>
int main(){
	
	int n;
	int tam;
	char palavra[20];
	int aux=0;
	int i,j,t;
	
	for(t=0;t<10;t++){
	
			scanf("%s",&palavra);
			tam=strlen(palavra);
			
		int vetor[tam];
		for(i=0;i<tam;i++){
			vetor[i] = palavra[i];
		}
			
		for(i=0;i<tam;i++)
		{
			for(j=0;j<tam;j++)
			{
			
				if(vetor[i] < vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux; 
				}
			}
		}
		
		for(i=0;i<tam;i++)
		{
			printf("%c",vetor[i]);
		}
		
	}
	
	return 0;
}
