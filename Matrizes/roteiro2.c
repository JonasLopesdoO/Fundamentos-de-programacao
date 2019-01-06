#include <stdio.h>
int main(){
	char matriz[10][10]={'0'};
	int i,j;
	int accA=0,accB=0,accC=0,accD=0;
	

	
	
	for(i=0;i<10;i++){
		matriz[i][0] = 'X';
		matriz[0][i] = 'X';
		matriz[9][i] = 'X';
		matriz[i][9] = 'X';
		matriz[i][i] = 'X';
		matriz[i][9-i] = 'X';
		
			
		
		
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%c ",matriz[i][j]);
		}
		printf("\n");
	}


return 0;
}
