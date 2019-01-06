
#include <stdio.h>
#include <string.h>

	int main(){
		int linA,colA,linB,colB;
		int i,j;
	printf("PRODUTO DE MATRIZES A X B. \n \n");
	printf("Quantidade de linhas de A = ");	
		scanf("%d", &linA);
	printf("Quantidade de colunas de A = ");	
		scanf("%d", &colA);
	printf("Quantidade de linhas de B = ");	
		scanf("%d", &linB);
	printf("Quantidade de colunas de B = ");	
		scanf("%d", &colB);
		
		float A[linA][colA], B[linB][colB],C[linA][colB];
		float temp;
		
		
		printf("\n");
		if(colA != linB){
			printf("A multiplicação nao pode ser feita.\n");	
			printf("A quantidade de colunas de A eh diferente do numero de linhas de B.\n");
			return 0;
		}
		
		//usuario faz o carregamento da matriz A
		printf("\n CARREGAMENTO DA MATRIZ A\n \n");
		for(i=0;i<linA;i++){
			for(j=0;j<colA;j++){
				printf("A[%d][%d] = ",i+1,j+1);
				scanf("%f",&A[i][j]);
			}
		}
		
		for(i=0;i<linB;i++){
			for(j=0;j<colB;j++){
				printf("B[%d][%d] = ",i+1,j+1);
				scanf("%f",&B[i][j]);
			}
		}
		
		printf("Matriz A \n \n");
		for(i=0;i<linA;i++){
			for(j=0;j<colA;j++){
				printf("%.2f ",A[i][j]);
			
			}
			printf("\n");
		}
		
			printf("Matriz B \n \n");
		for(i=0;i<linB;i++){
			for(j=0;j<colB;j++){
				printf("%.2f ",B[i][j]);
			
			}
			printf("\n");
		}
		int k1,k2;
		
		for(k1=0;k1<linA;k1++){
				for(k2=0;k2<colB;k2++){
					temp= 0.0;
					for(i=0;i<colA;i++){
						temp += A[k1][i]*B[i][k2];
					}
					C[k1][k2] = temp;
				}	
		}
		
		printf("\n \n");
		
		printf("MATRIZ C = A X B \n");
		for(i=0;i<linA;i++){
			for(j=0;j<colB;j++){
				printf("%.2f ", C[i][j]);
			}
			printf("\n");
		}
	
		
		
	

	return 0;
}

