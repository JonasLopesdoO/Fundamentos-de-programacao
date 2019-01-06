#include <stdio.h>
void mostraMedia(char nomes[][50], float notas[][4],float *media,int i);

int main(){
	char nomes[2][50];
	float notas[2][4];
	float media[2];
	int i,j;
	
		for(i=0;i<2;i++){
			printf("Digite o %do nome: \n",i+1);
			fgets(nomes[i],50,stdin);
				for(j=0;j<2;j++){
					printf("Digite a %da nota: \n",j+1);
					scanf("%f",&notas[i][j]);
				}fflush(stdin);
		}
		
		for(i=0;i<2;i++){
			mostraMedia(nomes,notas,&media[i],i);
		}
		
		for(i=0;i<2;i++){
			printf("Nome: %s , Media: %.2f\n",nomes[i],media[i]);
		}
		
		
	return 0;
}

void mostraMedia(char nomes[][50], float notas[][4],float *media,int i){
	int j;

		*media = 0;	
	
			for(j=0;j<4;j++){
				*media += notas[i][j];
			}
			*media = *media/4;
		
}



