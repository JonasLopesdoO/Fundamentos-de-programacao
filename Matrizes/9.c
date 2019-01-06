#include <stdio.h>
int main(){
	
	double matriz[3][3],r[3][3], numero;
	int i, j;
	scanf("%lf",&numero);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%lf",&matriz[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			r[i][j] = matriz[i][j]*numero;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%.2lf ",r[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
