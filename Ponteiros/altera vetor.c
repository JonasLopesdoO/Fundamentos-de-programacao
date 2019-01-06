#include <stdio.h>
void alteraVetor(int vetor[]);
int main(){
	int vetor[10];
	int i;
	
	for(i=0;i<10;i++){
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	alteraVetor(vetor);
	
	for(i=0;i<10;i++){
		printf("%d ",vetor[i]);
	}
	
	return 0;
}

void alteraVetor(int vetor[]){
	int i;
	
		for(i=0;i<10;i++){
			vetor[i] = vetor[i] * 2;
		}
}
