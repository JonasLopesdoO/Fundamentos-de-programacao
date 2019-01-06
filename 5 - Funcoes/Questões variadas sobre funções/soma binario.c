#include <stdio.h>
#define MAX 50

int main()
{
	// exemplo de um n�mero em decimal
	int num = 15;
	// vetor de MAX posi��es para guardar o n�mero em bin�rio
	int vet_bin[MAX];
	// vari�veis de controle de loop
	int i = 0, j;
	// aux_num serve para guardar num para mostrar posteriormente
	int aux_num = num;


	while(num > 0)
	{
		// obt�m o resto da divis�o de num por 2
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("%d em binario: ", aux_num);

	// percorre o vetor para mostrar o n�mero em bin�rio
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");

	return 0;
}
