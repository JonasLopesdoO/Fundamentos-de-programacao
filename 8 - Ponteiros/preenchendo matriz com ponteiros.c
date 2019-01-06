#include <stdio.h>
int preenche (int *c);
int printa (int *c);
int preencheX (int *c);

int main(){
	int matriz[10][10],i,j;
	
			preenche(&matriz[0][0]);			
			
		for(i=0;i<10;i++){	
			for(j=0;j<10;j++){
				preencheX(&matriz[0][i]);				
				preencheX(&matriz[i][0]);
				preencheX(&matriz[i][9]);
				preencheX(&matriz[9][i]);
				preencheX(&matriz[i][i]);
				preencheX(&matriz[i][9-i]);
			}
		}
		printa(&matriz[0][0]);

	
	return 0;
}

int preenche (int *c){
	int i;
		for(i=0;i<100;i++){
			*c = ' ';
			c++;
		}
}

int printa (int *c){
	int i,j;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				printf("%c ",*c);
				c++;
			}
			printf("\n");
			
		}
}

int preencheX (int *c){
			*c = 'X';
}
