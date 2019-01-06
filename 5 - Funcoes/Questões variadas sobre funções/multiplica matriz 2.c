#include <stdio.h>
int qnt=2;
int linhaC=0,colunaC=0;
void recebe(int X[][qnt]);
void imprime(int Y[][qnt]);
void AxB(int A[][qnt],int B[][qnt],int C[][qnt]);

void recebe(int X[][qnt]){
int i,j;

	for(i=0;i<qnt;i++){
			for(j=0;j<qnt;j++){
				scanf("%d",&X[i][j]);
			}	
	}		
}

void imprime(int Y[][qnt]){
int i,j;

	for(i=0;i<qnt;i++){
		for(j=0;j<qnt;j++){
			printf("%d ",Y[i][j]);
		}	printf("\n");
	}	
}

void AxB(int A[][qnt],int B[][qnt],int C[][qnt]){
	int i,j,k;
		for(i=0;i<qnt;i++){
			for(j=0;j<qnt;j++){
			C[i][j]=0;
				for(k=0;k<qnt;k++){
					C[i][j]+= A[k][j] * B[i][k];
				}
			}
		}	
}

int main(){
	
	int matrizA[qnt][qnt],matrizB[qnt][qnt],matrizC[qnt][qnt];
	recebe(matrizA);

	imprime(matrizA);
	
	recebe(matrizB);

	imprime(matrizB);
	
	AxB(matrizA,matrizB,matrizC);
	
	imprime(matrizC);
	
	return 0;
}

