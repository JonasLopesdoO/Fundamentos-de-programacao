#include <stdio.h>
int main(){
	
	int l,c,i,j;
	scanf("%d %d", &l, &c);
	int matriz[l][c];

													
				for(i=0; i<l; i++){
					for(j = 0; j<c; j++){
						scanf("%d",&matriz[i][j]);
					}
					
				}


						
				for(j=0; j<c; j++){
					for(i = 0; i<l; i++){
						printf("%d| ", matriz[i][j]);
									
					}
					printf("\n");
				
				}


return 0;
}
