#include <stdio.h>
int main(){
	
int i, matriz[5][5];
		int n;
													
				for(i=0; i<5; i++){
					for(n = 0	; n<5; n++){
						scanf("%d",&matriz[i][n]);
					}
					
				}

						
				for(i=0; i<5; i++){
					for(n = 0	; n<5; n++){
						printf("%d|\t ",matriz[i][n]);
					}
					printf("\n");
				}


return 0;
}
