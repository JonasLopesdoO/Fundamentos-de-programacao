
#include <stdio.h>
#include <string.h>

	int main(){
		
	printf("Ordenando vetores. \n \n");
	int i,j;
	int n;
	scanf("%d",&n);
	int vetor[n], aux;
	
	for(i =0;i<n;i++){
			scanf("%d",&vetor[i]);
	
	}
	
	for(i=0; i<n;i++){
			for(j=i+1; j<n;j++){
				if(vetor[i] > vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
			
			}
	
	}
	
	for(i=0;i<n;i++){
		printf("%d ",vetor[i]);
	}
		
		
		
	
		
		
	

	return 0;
}

