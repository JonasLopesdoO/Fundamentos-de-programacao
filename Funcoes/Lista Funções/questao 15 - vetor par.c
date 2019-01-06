#include <stdio.h>

int pares(int vetor[],int cont);

int main(){
	int vetor[5],i;
	int cont=0;
		for(i=0;i<5;i++){
			scanf("%d",&vetor[i]);
		}
		
		printf("%d\n",pares(&vetor,cont));
		
	return 0;
}

int pares(int vetor[],int cont){

	int i,j=0;
	
		for(i=0;i<5;i++){
			if(vetor[i]%2==0){
				cont++;				
			}
		}
		return cont;
}
