#include <stdio.h>
int buscaMaior(int matriz[][10]);
int main(){
	int matriz[10][10],i,j;
	
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				scanf("%d",&matriz[i][j]);
			}
		}
	
		printf("%d",buscaMaior(matriz));
	return 0;
}

int buscaMaior(int matriz[][10]){
	int maior=0,i,j;
		for(i=0;i<10;i++){
			for(j=i;j<10;j++){
				if(matriz[i][j]>maior){
					maior = matriz[i][j];
				}
			}
		}
	
	return maior;
}
