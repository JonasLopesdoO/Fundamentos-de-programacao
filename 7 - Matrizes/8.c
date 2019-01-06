#include <stdio.h>
int main(){
	
	int matriz1[2][4],matriz2[2][4],soma[2][4],diferenca[2][4];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matriz1[i][j]);
		}
	}
	
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matriz2[i][j]);
		}
	}
	
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			diferenca[i][j] = matriz1[i][j] - matriz2[i][j];
		}
	}
	
	printf("______________Soma_________\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d ",soma[i][j]);
		}
		printf("\n");
	}
		printf("______________Diferenca_________\n");

	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
				printf("%d ",diferenca[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
