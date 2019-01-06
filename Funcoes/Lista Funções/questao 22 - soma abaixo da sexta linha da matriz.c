#include <stdio.h>
float lerMatriz(float matriz[][1]);
float soma(float matriz[][1]);

int main(){
	float matriz[10][1];


	printf("%f",lerMatriz(matriz));
	return 0;
}

float lerMatriz(float matriz[][1]){
	int i,j;
		for(i=0;i<10;i++){
			for(j=0;j<1;j++){
				scanf("%f",&matriz[i][j]);
			}
		}
		return soma(matriz);
}

float soma(float matriz[][1]){
	int i,j,soma=0;
		for(i=7;i<10;i++){
			for(j=0;j<1;j++){
				soma+=matriz[i][j];
			}
		}
		return soma;
}

