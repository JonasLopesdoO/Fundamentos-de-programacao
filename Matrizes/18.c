#include <stdio.h>
int main(){
	int l=4,c=2;
	double matriz[l][c];
	int i,j;
	double soma=0;
	double media;

	int m;
	double calc=0;
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			scanf("%lf",&matriz[i][j]);	
		}
	}
	
	for(i=0,m=0;i<l;i++,m++){
		for(j=0;j<c;j++){
			if(i==0){
			soma = matriz[i][j];
				
				calc++;	
				
			}
			
			else if(i%2==0){
			
				soma = matriz[i][j];
				
				calc++;
			}
		}	
		
	}
	
		media = soma/calc*4;
	

	
			printf("%.2lf\n",media);
		
	
	
	
	return 0;
}


