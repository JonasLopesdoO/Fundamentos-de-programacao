#include <stdio.h>
int main(){
	
	int i;
	int m[10][10];
	
	int j;
	for(i=0;i<100;i++){
	
		m[i]=0;
	
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("carai",m[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
