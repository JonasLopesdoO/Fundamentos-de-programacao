#include <stdio.h>

int main(){
	
	int i, j;
	
	int matriz[4][3] = {
			2, 3,  4,
			4, 6,  8,
			6, 9,  12,
			8, 12, 16	
	};
	
	for(i=0; i<4;i++){
		for(j=0;j<3;j++){
			printf("|%d|", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
