#include <stdio.h>

int main(){

	int vetor[10];
	int valor;
	int i,ii[10];
	int iii=0;
	
	
	
	scanf("%d",&valor);
		vetor[0] = valor;
			
	for(i = 1; i < 10; i ++){
		
		vetor[i] = vetor[i-1]*2;
		
	}
		
	
	for(iii = 0; iii<10; iii++){
		ii[iii] = iii;
	}
		
	for(i = 0; i < 10; i++){
		
		printf("N[%d] = %d\n", ii[i],vetor[i]);
	}

return 0;
}
