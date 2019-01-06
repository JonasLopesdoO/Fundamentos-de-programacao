#include <stdio.h>

float soma(float vetor[]);

int main(){
	float vetor[5];
	int i;

		for(i=0;i<5;i++){
			scanf("%f",&vetor[i]);
		}
		
		printf("%.2f\n",soma(&vetor));
		
	return 0;
}

float soma(float vetor[]){

	float soma=0;
	int i;
	
		for(i=0;i<5;i++){
			soma += vetor[i];
		}
		return soma;
}
