#include <stdio.h>

int main(){
	
	
	int i, j;
	int x2[3][3];
	 
	for(i=0 ;i<3;i++){
		for(j=0;j<3;j++){
			
			scanf("%d",&x2[i][j]);			
		}
	}
	printf("\n");
	
	
		if(x2[0][0] == 1){
			if(x2[1][1] == 1){
				if(x2[2][2] == 1){
					printf("A matriz eh identidade.\n");
				}else{
					printf("A matriz nao eh identidade:");
				}
			}else{
					printf("A matriz nao eh identidade:");				
			}
		}else{
				printf("A matriz nao eh identidade:");
		}
	return 0;
}
