#include <stdio.h>
int main(){
	int vetor[10] = {6,4,2,3,7,9,0,8,1,5};
	int i;
	void ordemCrescente(int vetor[],int n);
	
	ordemCrescente(vetor,10);
	
	for(i=0;i<10;i++){
    	printf("%d",vetor[i]);
	}
	return 0;
}

void ordemCrescente(int vetor[],int n){
	int i,j,temporaria;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(vetor[i]>vetor[j]){
				temporaria = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporaria;
			}
		}
	}
}
