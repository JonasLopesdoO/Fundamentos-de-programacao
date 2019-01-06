#include <stdio.h>

int main(){

	int matriz[10][10];
	int i;
	int j;
	int acc=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			matriz[i][j] = ' ';
		}	
	}
	
	for(i=0;i<10;i++){

			scanf("%d",&matriz[i][i]);
			acc += matriz[i][i];
			
	}
	
	for(i=0;i<10;i++){
		printf("%d\n",matriz[i][i]);
	}
	printf("Soma: %d", acc);


return 0;
}
