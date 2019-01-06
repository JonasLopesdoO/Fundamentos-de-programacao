#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[10][20];
	int tam[10],i,j,t;
	
	int aux;
	
	for(i=0;i<10;i++){
		scanf("%s",&nome[i]);
		tam[i]=strlen(nome[i]);
	}
		for(i=0;i<10;i++){	
			for(j=0;j<tam[i];j++){
				vetor[i] = nome[i];
			}
		}
	for(t=0;t<10;t++){
	
	
		
	
		
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				if(vetor[i]<vetor[j]){
					aux = vetor[i];
					vetor[i]=vetor[j];
					vetor[j]=aux;
				}
			}
		}
		
		for(i=0;i<tam;i++){
			printf("%c",vetor[i]);
		}
	}
	return 0;
}
