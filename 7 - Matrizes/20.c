#include <stdio.h>

int main(){
	
	float matriz[5][5];
	float multi[5];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%f",&matriz[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		
		multi[i] = matriz[i][i];	
		for(j=0;j<5;j++){
			matriz[i][j] = matriz[i][j] * multi[i];
			
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%.2f ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
