#include<stdio.h>
#include<stdlib.h>

int matriz[100][100];

void receber_matriz(int L, int C){
	 int i,j;
	 for(i=0;i<L;i++){
	 	for(j=0;j<C;j++){
	 	
	 		printf("Insira o valor de m[%d][%d]",i,j);
	 		scanf("%d",&matriz[i][j]);
	 		
		}
	 }
}

int funcaoMaiorLinha(int nL, int C){
	int x;
	int maior=0;
	for (x= 0; x < C;x++){
		if (matriz[nL][x]> maior){
			maior = matriz[nL][x];		
		}
	
	}
	return maior;
}

void multiplicarLinhas(int L, int C){
	
	int i, j;
	
	for(i = 0; i < L; i++){
		int maiorDaLinha = funcaoMaiorLinha(i, C);
		for(j = 0; j < C; j++){
			matriz[i][j] *= maiorDaLinha;	
		}
	}
}

void imprimir_matriz(int L, int C){
	 int i,j;
	 for(i=0;i<L;i++){
	 	for(j=0;j<C;j++){
	 		
	 		printf(" %d ",matriz[i][j]);
	 		
		}
		printf("\n");
	 }
}

int main(){
	int L,C;
	printf("Quantas Linhas:\n");
	scanf("%d",&L);
	printf("Quantas Colunas\n");
	scanf("%d",&C);
	receber_matriz(L,C);
	multiplicarLinhas(L,C);
	imprimir_matriz(L,C);
	
	
return 0;	
}
