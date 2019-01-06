#include <stdio.h>

int main(){
	
	int matriz[10][10];
	int x,y,repete;
	int i,j,t;
	int soma =0;
	
	scanf("%d",&repete);
	
	for(t=0;t<repete;t++){
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				scanf("%d",&matriz[i][j]);
			}
		}
		scanf("%d %d",&x,&y);
		soma = matriz[x-1][y] + matriz[x+1][y] + matriz[x][y-1] + matriz[x][y+1];
		printf("%d",soma);
	}
	return 0;
}
