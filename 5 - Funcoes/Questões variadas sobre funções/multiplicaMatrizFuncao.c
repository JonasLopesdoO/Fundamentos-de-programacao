#include <stdio.h>
#define MAX 5
void multiplica(int linha[],int matrizB[][MAX],int coluna,int *resultado);

int main(){
	
	int matrizA[MAX][MAX],matrizB[MAX][MAX],matrizC[MAX][MAX];
	int i,j;
	int extra=0;
	
	
		for(i=0;i<MAX;i++){
			for(j=0;j<MAX;j++){
				scanf("%d",&matrizA[i][j]);
				
			}	
		}
		for(i=0;i<MAX;i++){
			for(j=0;j<MAX;j++){
				scanf("%d",&matrizB[i][j]);
			}	
		}
		
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				multiplica(matrizA[i],matrizB,j,&matrizC[i][j]);
			}
		}
		
		for(i=0;i<MAX;i++){
			for(j=0;j<MAX;j++){
				printf("%d ",matrizC[i][j]);
			}	printf("\n");
		}
		
	return 0;
}
void multiplica(int linha[],int matrizB[][MAX],int coluna,int *resultado){
	int i;
	*resultado=0;
	
		for(i=0;i<MAX;i++){
			*resultado += linha[i] * matrizB[i][coluna];			
		}		
}


