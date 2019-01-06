#include <stdio.h>

int main(){
	float v[50][50];
	float *x=&v[0][0];
	int i,j;
	

	for(i=0;i<50;i++){
		for(j=0;j<50;j++){
			*x=0.0;
			x++;
		}
	}
	
	for(i=0;i<50;i++){
		for(j=0;j<50;j++){
			printf("%.1f ",v[i][j]);
		}printf("\n");
	}	

	
	
	return 0;
}

