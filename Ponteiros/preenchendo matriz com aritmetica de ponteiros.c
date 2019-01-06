#include <stdio.h>
int preenche (int *c);
int printa (int *c);
int preencheX (int *c);

int main(){
	int matriz[10][10],i,j;
	
				preenche(&matriz[0][0]);			
			preencheX(&matriz[0][0]);	
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
	int i;

		for(i=0;i<10;i++,c++){	
			*c = 'X';			
		}
		*c='X',c++,*c='X';
		c+=7;
		*c='X',c++,*c='X',c++,*c='X';
		c+=2,*c='X',c+=5,*c='X',c+=2,*c='X',c++,*c='X';
		c+=3,*c='X',c+=3,*c='X',c+=3,*c='X';c++,*c='X';
		c+=4,*c='X',c++,*c='X',c+=4,*c='X';c++,*c='X';
		c+=4,*c='X',c++,*c='X',c+=4,*c='X';c++,*c='X';
		c+=3,*c='X',c+=3,*c='X',c+=3,*c='X';c++,*c='X';
		c+=2,*c='X',c+=5,*c='X',c+=2,*c='X',c++,*c='X';
		c++,*c='X',	c+=7,*c='X';
		
		for(i=0;i<12;i++,c++){	
			*c = 'X';			
		}

	
	
}



