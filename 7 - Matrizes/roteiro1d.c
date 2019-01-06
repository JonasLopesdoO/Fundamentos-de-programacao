#include <stdio.h>
int main(){
	
	int matriz[5][5],i,j;
	
	int accA=0,accB=0,accC=0,accD=0,somaTotal=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&matriz[i][j]);
			somaTotal += matriz[i][j];
		}
	}
	
	for(i=0;i<5;i++){
		accA +=matriz[4][i];
		accB +=matriz[i][2];
		accC +=matriz[i][i];
		accD +=matriz[i][4-i];
		
	}
			
			
			
			
			
		
		
	
	
	printf("Linha4: %d\n", accA);
		printf("Coluna2: %d\n", accB);
			printf("DiagonalP: %d\n", accC);	
				printf("DiagonalS: %d\n", accD);
					printf("Total: %d\n", somaTotal);


	
return 0;
}
