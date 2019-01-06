#include <stdio.h>
int main(){
	
	int idade, altura, peso;
	int id50;
	int cont = 0;
	int media1020 = 0;
	double accidade = 0;
	double entre;
	int quilo = 0;
	double mediaaltura;
	double percent;
	while(cont < 2){
		scanf("%d", &idade);
		scanf("%d", &altura);
		scanf("%d", &peso);
		
		
		if(idade > 50){
			id50++;	
		}
		
		if(idade > 10){
			if(idade < 20){
				accidade += altura;
				media1020++;
				
			}
		}	
		
		if(peso < 40){
			quilo++;
		}
		
		
		cont++;
	}

		percent = (100*quilo)/25;
			
		mediaaltura = accidade / media1020;
		printf("Maiores que 50: %d\n", id50);
		printf("Media das alturas das pessoas entre 10 e 20 anos: %.2lf\n", mediaaltura);	
		printf("Porcentagem de pessoas com peso inferior a 40 kg: %lf\n", percent);
	
	
	return 0;
}
