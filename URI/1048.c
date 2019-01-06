#include <stdio.h>

int main(){
	

	
	double salario, reajuste;
	double novo;
	int percent;
		scanf("%lf",&salario);

	if(salario >=0 && salario <= 400.00){
	
			percent = 15;
			reajuste = salario * 0.15;
			novo = salario + reajuste;
	}else if(salario >=400.01 && salario <= 800.00){
		percent = 12;
			reajuste = salario * 0.12;
			novo = salario + reajuste;
	}else if(salario >=800.01 && salario <= 1200.00){
		percent = 10;
			reajuste = salario * 0.1;
			novo = salario + reajuste;
	}else if(salario >=1200.01 && salario <= 2000.00){
		percent = 7;
			reajuste = salario * 0.07;
			novo = salario + reajuste;
	}else{
		percent = 4;
			reajuste = salario * 0.04;
			novo = salario + reajuste;
	}
	
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %\n",novo,reajuste,percent);

	
	
	return 0;
}
