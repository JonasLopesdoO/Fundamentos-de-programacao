#include <stdio.h>
#include <string.h>

int main(){

   int M[4][6], N[6][4];
   int lm=0,cn=0,i,j;
   int linhaM[4];
   int colunaN[4];
   int somas[4];
   int user=0;
   
   
   for(i=0;i<4;i++){
		for(j=0;j<6;j++){
   			scanf("%d",&M[i][j]);
   			lm += M[i][j];
   		}
   			linhaM[i] = lm;
   			lm=0;
   		
   }
   
   
   
   for(i=0;i<6;i++){
		for(j=0;j<4;j++){
   			scanf("%d",&N[i][j]);
   		}
   }
  
   for(j=0;j<4;j++){
		for(i=0;i<6;i++){
   			cn += N[i][j];	
   		}
   		colunaN[j] = cn;
   		cn=0;
   }
  	
  	for(i=0;i<4;i++){
  		somas[i] = linhaM[i] + colunaN[i];
  	}
  
  	for(i=0;i<4;i++){
  		printf("Linha|coluna %d: %d\n",i+1,somas[i]);
  	}
   
	return 0;
}
