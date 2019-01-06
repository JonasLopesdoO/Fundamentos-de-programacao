#include <stdio.h>

int main(){
	
	int i, j;
	int x1[2][2],x2[2][2], soma[2][2];
	 
	for(i=0; i<2;i++){
		for(j=0;j<2;j++){
			printf("digite um numero da x1\n");
			scanf("%d",&x1[i][j]);			
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("digite um numero da x2\n");
			scanf("%d",&x2[i][j]);
			soma[i][j] = x1[i][j] + x2[i][j];
		}
	}
	
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf("%d |", soma[i][j]);
			
			}
			printf("\n");
		}
	
		
	return 0;
}
