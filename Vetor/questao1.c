#include <stdio.h>
int main(){

	
	int vetor[6];
	int i;
	int p=0, ip=0;
	
	for(i = 0; i < 6; i++){
		scanf("%d", &vetor[i]);
		
			
		
	}
	
	for(i = 0; i < 6; i++){
		
		if(vetor[i]%2==0){
			printf("Os pares %d\t", vetor[i]);
			p++;
			}
		
		
		
	}
		printf("Qnt pares: %d\n", p);
	
		for(i = 0; i < 6; i++){
			
			if(vetor[i]%2!=0){
			printf("Os impares: %d\t", vetor[i]);
			ip++;
			}
			
			
		}

		
			printf("Qnt impares: %d\n", ip);
	



return 0;
}
