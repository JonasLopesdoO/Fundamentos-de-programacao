// escreva um programa que recebe numeros reais e escreve a m�dia aritmetica desses n�meros a cada n�mero digitado. Ap�s mostrar a m�dia
// o programa pergunta se o usu�rio deseja digitar um novo numero ou encerrar o programa.
// As op��es er�o, 's' para continuar e 'n' para encerrar

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
