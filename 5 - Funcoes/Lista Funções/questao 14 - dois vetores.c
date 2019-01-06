#include <stdio.h>
int contA=0,contB=0;
void vetores(int vetor[],int vetorA[],int vetorB[]);

int main(){
	int vetor[5],vetorA[5],vetorB[5],i;
	
		for(i=0;i<5;i++){
			scanf("%d",&vetor[i]);
		}
		
		vetores(&vetor,&vetorA,&vetorB);
		
		printf("Positivos\n");
		for(i=0;i<contA;i++){
			printf("%d ",vetorA[i]);
		}
		printf("\nNegativos\n");
		for(i=0;i<contB;i++){
			printf("%d",vetorB[i]);
		}
		
	return 0;
}

void vetores(int vetor[],int vetorA[],int vetorB[]){
	int i,j=0,k=0;
	
	
		for(i=0;i<5;i++){
			if(vetor[i]>0){
				vetorA[j]=vetor[i];
				contA++;	
				j++;				
			}else{
				vetorB[k]=vetor[i];
				contB++;	
				k++;
				
			}
		}
}
