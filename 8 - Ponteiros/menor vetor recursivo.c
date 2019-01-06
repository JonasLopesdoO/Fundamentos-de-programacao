#include <stdio.h>
int menorVetor(int vetor[], int i, int menor);

int main(){
	int vetor[10];
	int i;
	int	menor=1000000;
	
	for(i=0;i<10;i++){
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	
	i=0;

	printf("%d", menorVetor(vetor,i,menor));
	
	return 0;
}

int menorVetor(int vetor[],int i,int menor){

		if(i<10){
			if(vetor[i]<menor){
				menor = vetor[i];
				menorVetor(vetor,i+1,menor);
			}else{		
				menorVetor(vetor,i+1,menor);
			}
		}else{
			return menor;	
		}
}
