#include <stdio.h>

int main(){
	
	int i, j;
	
	int matriz[3][3], soma =0;
	
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			printf("digite um numero\n");
			scanf("%d",&matriz[i][j]);
			if((i == 0) && (j == 1) || (i == 0) && (j == 2) || (i == 1) && (j == 2)){
				soma = soma + 0;
			}else{
				soma = soma + matriz[i][j];
			}
			
	
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n\n");
	}
	printf("Soma eh: \n\n%d", soma);
		
	return 0;
}
