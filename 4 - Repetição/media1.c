// escreva um programa que recebe numeros reais e escreve a média aritmetica desses números a cada número digitado. Após mostrar a média
// o programa pergunta se o usuário deseja digitar um novo numero ou encerrar o programa.
// As opções erão, 's' para continuar e 'n' para encerrar

#include <stdio.h>
int main(){
	//exemplo de programa que soma 5 valores com while

	int cont = 0;
	double numero;
	double acc = 0;

	char opcao = 's';




	while(opcao == 's'){
		scanf("%lf", &numero);
		cont++;
		acc += numero;
	   //cont = cont + 1;

		printf("%lf\n", acc / cont);
		printf(" (s) ou (n)\n");
		scanf("% c", &opcao);


	}




	return 0;
}
