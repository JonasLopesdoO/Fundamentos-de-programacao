#include <stdio.h>
int main(){
	
	int idade;
	double media=0;
	int cont=0;
	
	
		scanf("%d",&idade);	
	
	do{
		
	
		
		
		
			media += idade;
				
		
				cont++;	
			
		
			
		
		scanf("%d",&idade);	
	
	
	}while(idade != 0);
	
	
	printf("Media: %.2lf",media/cont);
	return 0;
}
