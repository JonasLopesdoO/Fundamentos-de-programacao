#include <stdio.h>

//custo de fabrica + porcentagem do distribuidor + porcentagem de impostos 

int main(){

	double preco;
	int cod;


scanf ("%lf", &preco);	

scanf ("%d", &cod);

	if(cod == 1){
	
			printf("Sul");
	}else if(cod == 2){
	
		
			printf("Norte");
	}else if(cod == 3){
	
	
			printf("Leste");	
	}
	else if(cod == 4){
		
			printf("Oeste");
	}
	else if(cod == 5){
					printf("Nordeste");
	}
		else if(cod == 6){
		
		
			printf("Nordeste");
		}
		else if(cod >= 7){
			if(cod <=9){
				printf("Sudeste");
			}else if(cod >= 10){
				if(cod <= 20){
					printf("Centro-Oeste");
				}else if(cod >= 21){
					if(cod <= 30){
						printf ("Nordeste");
					}
				}
			}
		}
		
		
	
		else{
			printf("Invalido");
		}

return 0;
}

