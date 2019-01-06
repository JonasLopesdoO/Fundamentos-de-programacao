#include <stdio.h>
void imprimeVetor(int *vet,int tamanho);
void imprimeVetor2(int vetor[], int tamanho);
int main(){
	int vet[5]={1,2,3,4,5};
	int tamanho;
	tamanho=5;
	imprimeVetor(&vet[0],tamanho);
	imprimeVetor2(vet,tamanho);
	

	return 0;
	
}
void imprimeVetor(int* vetor,int tamanho){
	int i;
		for(i=0;i<tamanho;i++){
			printf("%d",*vetor);
			vetor++;
		}
		printf("\n");
}
void imprimeVetor2(int vetor[],int tamanho){
	int i;
		for(i=0;i<tamanho;i++){
			printf("%d",vetor[i]);
		}
}
