
#include <stdio.h>
#include <string.h>

	int main(){
	
		int i,j;

		
		float A[3][3], B[3][3],C[3][3];
		float temp;
		
	
		//usuario faz o carregamento da matriz A
		printf("\n CARREGAMENTO DA MATRIZ A\n \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("A[%d][%d] = ",i+1,j+1);
				scanf("%f",&A[i][j]);
			}
		}
		
			printf("\n CARREGAMENTO DA MATRIZ B\n \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("B[%d][%d] = ",i+1,j+1);
				scanf("%f",&B[i][j]);
			}
		}
		
		

		
	int k1,k2;
	int menor=0;
	
	for(i =0;i<3;k1++)
	{
		for(j=0;j<3;k2++)
		{
			
			for(k1=0;k1<3;k1++)
			{
				for(k2=k2+1;k2<3;k2++)
				{
					if(A[i][j] > vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux; 
			}	
				}	
			}
		
		}
	}
		
		printf("\n \n");
		
		printf("MATRIZ C = A X B \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%.2f ", C[i][j]);
			}
			printf("\n");
		}
	
		
		
	

	return 0;
}

