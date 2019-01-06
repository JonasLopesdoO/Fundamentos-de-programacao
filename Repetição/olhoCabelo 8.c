#include <stdio.h>
int main(){
	double idade;
	char olho, cabelo;
	double altura, peso;
	int i;
	int  idade50peso60=0;
	double accidade=0, contidade=0, mediaid150, percentazul;
	int contazul=0;
	int ruivanaoazul=0;
	
	for(i = 0; i < 4; i++){
		printf("Digite tudo:");
		scanf("%lf %lf %lf %c %c", &idade, &peso, &altura, &olho, &cabelo);
		
		if(idade > 50){
			if(peso < 60){
				idade50peso60++;
			}
		}
		
		if(altura < 1.5){
			accidade += idade;
			contidade++;
		}
		
		if(olho == 'A'){
			contazul++;
			
		}
		
		if(cabelo == 'R'){
			if(olho != 'A'){
				ruivanaoazul++;
			}
		}
		
	}
	
		mediaid150 = accidade/contidade;
			percentazul = (contazul*100)/20;
	
	printf("Idade > 50 e peso < 60: %d\n",idade50peso60);
	printf("Media idade pessoa < 1.50 metro: %lf\n",mediaid150);
	printf("Percentagem pessoas olho azul %lf\n",percentazul);
		printf("Pessoa ruiva nao azul: %D\n",ruivanaoazul);

	
	return 0;
}


