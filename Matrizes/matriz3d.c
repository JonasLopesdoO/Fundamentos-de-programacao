#include <stdio.h>

int main(){
	
	int matriz[2][2][2];
	int i,j,k;
	
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				for(k=0;k<2;k++){
					scanf("%d",&matriz[i][j][k]);
				}
			}
		}
		
			for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				for(k=0;k<2;k++){
					printf("%d",matriz[i][j][k]);
				}printf("\n");
			}
		}
	
	
	return 0;
}
