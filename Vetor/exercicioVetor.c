//entrada: vetor com n posições
//n = par
//divide o vetor no meio
//soma os dois lados
//e diz qual o numero maior, se der = Empate
//
//[2 3 | 5 1]
//2+3=5 | 5+1=6

#include <stdio.h>
int main(){
	
	int n;
	scanf("%d",&n);
	int vetor[n];
	int i;
	int parte1=0,parte2=0;
	int for2;
	
	for(i=0;i<n/2;i++){
		scanf("%d",&vetor[i]);
		parte1 += vetor[i];
	}
	
	for(for2=n/2;for2<n;for2++){
		scanf("%d",&vetor[for2]);
		parte2 += vetor[for2];
	}
	
	if(parte1 == parte2){
		printf("Draw Game\n");
	}else if(parte1 > parte2){
			printf("Parte1 Wins!!!\n");
		  }
	else{
		printf("Parte2 Wins!!!");
	}
	
	
	return 0;
}
