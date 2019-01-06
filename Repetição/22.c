#include <stdio.h>
int main(){
	
	int idade;
	double media;
	int cont=0;
	double altura;

		scanf("%d",&idade);
	
	while(idade >= 0){
	
		scanf("%lf",&altura);
		
		if(idade>50)
		{
			media += altura;
			cont++;	
			
		
		}
		
		scanf("%d",&idade);
	
	}
	
	
	printf("Media: %.2lf",media/cont);
	return 0;
}
