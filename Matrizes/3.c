#include <stdio.h>
int main(){
	
	int matriz[6][3] = {0},ma,me ,maior=0, i=0, j=0,menor,linham,colunam,linha,coluna;
	
	maior = matriz[i][j];
	
		menor = 10000;
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matriz[i][j]);
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				linha = i;
				coluna = j;
			}else if(matriz[i][j]<menor){
				me = i;
				ma = j;
		
		
				menor = matriz[i][j];
				linham = me;
				colunam = ma;
			}
		
		}
	}
	printf("O maior eh: %d, linha %d, coluna %d\n", maior, linha+1,coluna+1);
	printf("O menor eh: %d, linha %d, coluna %d\n", menor, linham+1,colunam+1);
	
	
	return 0;
} 
