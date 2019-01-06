#include <stdio.h>
int main(){
	
	int matriz[2][4] ,media=0, i,p=0, j,vv=0,v[2];
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matriz[i][j]);
			if(matriz[i][j] > 12){
				if(matriz[i][j] < 20){	
					vv++;	
				}
			}
			if(matriz[i][j]%2==0){
				media += matriz[i][j];
				p++;
			}
		}
		v[i] = vv;
		vv = 0;
		
	}
	
	for(i=0;i<2;i++){
	printf("A quantidade na linha %d eh: %d\n",i+1,v[i]);
	
	}
	printf("A media dos pares eh: %d\n", media/p);
	
	return 0;
}
