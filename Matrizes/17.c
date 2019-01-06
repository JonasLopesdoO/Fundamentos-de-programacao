#include <stdio.h>
int main(){
	
	int matriz[5][5],i,j;
	
	int accD=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&matriz[i][j]);
		
		}
	}
	
	for(i=0;i<5;i++){
	
		accD +=matriz[i][4-i];
		
	}
			
			
			
			
			
		
		
	
	
	printf("Soma diagonal secundária: %d\n", accD);
	


	
return 0;
}
