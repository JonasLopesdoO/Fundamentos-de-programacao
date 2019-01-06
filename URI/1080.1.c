#include <stdio.h>
int main(){
	int vetor[100];
	int maior=0;
	int m;
	int i;
	
	for(i=0;i<100;i++){
		scanf("%d",&vetor[i]);
		if(vetor[i]> maior){
			maior = vetor[i];
			m=i+1;
		}
	}
	
	printf("%d\n%d\n",maior,m);
	
	
	
	return 0;
}
