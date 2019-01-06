#include <stdio.h>
#include <string.h>

int main(){
	
	int matriz[2][2] = {0};
	char nome[2][30];
	int media =0;
	int medias[2];
	char situacao[2][10];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&matriz[i][j]);
			media += matriz[i][j];
		}
			medias[i] = media/2;
			if(medias[i]<4){
				situacao[i][j] = "Reprovado";
			}else if(medias[i] > 7){
				situacao[i][j] = "Aprovado";
			}else{
				situacao[i][j] = "Exame";
			}
			media =0;
	}
	
	for(i=0; i<2;i++){
		scanf("%s",nome[i]);
	}
		
		for(i=0;i<2;i++){
		
		printf("%s|%d| %s\n",nome[i],medias[i],situacao[i]);
		
	
		}
	
	return 0;
} 
