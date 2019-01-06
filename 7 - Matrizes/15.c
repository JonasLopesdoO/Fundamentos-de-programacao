#include <stdio.h>
int main(){
	
	int matriz[5][5],i,j;
	int linha[5], coluna[5];
	int accLinha=0,accColuna=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&matriz[i][j]);
		
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			accLinha += matriz[i][j];
		
		}
		linha[i] = accLinha;
		accLinha =0;
	}
		
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			accColuna += matriz[i][j];
		
		}
		coluna[i] = accColuna;
		accColuna = 0;
	}
	
			
		for(i=0; i<5;i++){
			for(j=0;j<5;j++){
				printf("%d ",matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	
		for(i=0; i<5;i++){
			
				printf("%d ",linha[i]);
			
			
		}
		printf("\n");
		
			for(i=0; i<5;i++){
			
				printf("%d ",coluna[i]);
			
			
		}
		printf("\n");
	




	
return 0;
}
