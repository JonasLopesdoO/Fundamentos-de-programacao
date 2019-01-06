#include <stdio.h>
int main(){
	
	
	int matriz[2][3];
	int cont=0;
	
	int l,c;
	
	for(l=0;l<2;l++){
		for(c=0;c<3;c++){
			scanf("%d", &matriz[l][c]);
			if(matriz[l][c] < 5){
				cont++;
			}
				 if(matriz[l][c] > 15){
					cont++;
				}
				
		}
		
	}
	
	printf("A quantidade de elementos que nao pertencem ao intervalo sao: %d\n", cont);
	
	
	
	
	
	return 0;
}
