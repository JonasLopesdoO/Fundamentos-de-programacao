#include <stdio.h>
int main(){
	
	int N;
	scanf("%d", &N);
	int matriz[N][N];
	int i,j,ul;
	int somaTotal = 0,accA=0,accB=0,accC=0,accD=0,accE=0;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		scanf("%d",&matriz[i][j]);
		somaTotal += matriz[i][j];
		
			if(i==0){
				accE += matriz[i][j];
			}
			else if(i%2==0){
				accE += matriz[i][j];
			}
		}
	}
	
	;
	
	for(i=0;i<N;i++){
		ul=N-1;
		accA += matriz[ul][i];
		accB += matriz[i][ul];
		accC += matriz[i][i];
		accD += matriz[i][ul-i];
		
			
	}
	
	
	printf("%d %d %d %d %d %d\n", accA,accB,accC,accD,accE,somaTotal);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
