#include <stdio.h>

int main(void){
	
	void funcaoPrint(int x, int vetor[]);
	int x = 10;
	int vetor [3] = {10};
	
	funcaoPrint(x,vetor);
	
	printf("Variavel int na funcao principal = %d \n",x);
	printf("Variavel  na funcao principal = %d \n",vetor[1]);
	return 0;
}

void funcaoPrint(int x, int vetor[]){
	x = x+10;
	vetor[1]=20;
	
		printf("Variavel int na funcao print = %d \n",x);
	printf("Variavel  na funcao print = %d \n",vetor[1]);
}
