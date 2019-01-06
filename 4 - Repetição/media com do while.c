// escreva um programa que recebe numeros reais e escreve a média aritmetica desses números a cada número digitado. Após mostrar a média 
// o programa pergunta se o usuário deseja digitar um novo numero ou encerrar o programa.
// As opções erão, 's' para continuar e 'n' para encerrar

#include <stdio.h>
int main(){
	
	int cont = 0;
	double numero;
	double acc = 0;

	char opcao ;
	
	do{
		scanf("lf", &numero);
		cont++;
		acc += numero;
		printf("%lf", acc/cont);
		scanf(" %c", &opcao);
	}while(opcao == 's');



	
	return 0;
}

