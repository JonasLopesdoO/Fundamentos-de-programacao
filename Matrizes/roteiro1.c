#include <stdio.h>
int main(){
	
	int matriz[5][5],i,j,somaLinha4=0,somaColuna2=0,somaDiagonalp=0, somaDiagonals=0,somaTotal=0;
	int conti=0,contj=4;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			
			somaTotal += matriz[i][j];
			
			if(i==4){
				somaLinha4 += matriz[i][j];
			}
			if(j==2){
				somaColuna2 += matriz[i][j];
			}
			
			if(i==j){
				somaDiagonalp += matriz[i][j];
			}										
		}
		
		somaDiagonals += matriz[conti][contj];
		conti++;
		contj--;
		
		
	}
	
	printf("Linha4: %d\n", somaLinha4);
		printf("Coluna2: %d\n", somaColuna2);
			printf("DiagonalP: %d\n", somaDiagonalp);	
				printf("DiagonalS: %d\n", somaDiagonals);
					printf("Total: %d\n", somaTotal);


	
return 0;
}
