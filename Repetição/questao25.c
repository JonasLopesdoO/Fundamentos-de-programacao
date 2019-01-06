#include <stdio.h>
int main(){
	
	int cod = 1, tipo;
	double rend, valor;
	
	
	
while(cod > 0){
	scanf("%d %d %lf", &cod, &tipo, &valor);
	switch(tipo){
		case 1:
			rend = valor * 0.015;
			printf("Investido: %.2lf. Rendimento total: %.2lf\n", valor, rend);
		break;
		
		case 2: 
			rend = valor * 0.02;
			printf("Investido: %.2lf. Rendimento total: %.2lf\n", valor, rend);
		break;

		case 3: 
			rend = valor * 0.04;
			printf("Investido: %.2lf. Rendimento total: %.2lf\n", valor, rend);
		break;
	}
}
	
return 0;
}

