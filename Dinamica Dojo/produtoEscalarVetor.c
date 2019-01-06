#include <stdio.h>
//tipo_de_retorno nome (tipo_entrada variavel_de_entrada)
//int teste(int x)


void recebeVetor(int qnt, int vetor[]){
	int i;
		
	for(i=0;i<qnt;i++){
		printf("Preenche a posicao [%d]:",i);
		scanf("%d",&vetor[i]);			
	}
}

int multiplicacao(int vetor1[], int vetor2[], int n){
	int i;
	int soma = 0;
	
	for(i=0;i< n;i++){
		soma += vetor1[i]*vetor2[i];			
	}
	
	return soma;	
}

int main(){
	
	int n;
	printf("Digite o tamanho dos vetores:\n");
	scanf("%d",&n);
	int vetor1[n];
	recebeVetor(n,vetor1);
	int vetor2[n];
	recebeVetor(n,vetor2);
		
	printf("Produto: %d\n",multiplicacao(vetor1, vetor2, n) );
	return 0;
}
