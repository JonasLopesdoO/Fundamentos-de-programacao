#include <stdio.h>
int main() { 

char binarioA[100], binarioB[100]; 
	int i, exp = 1, decimalA = 0, decimalB = 0, tam, somar = 0; 

		printf("Digite um numero em binario: "); 
		scanf("%s", &binarioA); 
		tam = strlen(binarioA); 

	for(i = tam-1; i > -1; --i) { 
		if(binarioA[i] == '1') 
		decimalA += exp; 
		exp *= 2; 
	}// Fim for. 

		printf("\nEm decimal %d: ", decimalA); 

		tam = 0; 
		exp = 1; 
		printf("\n\nDigite outro numero em binario: "); 
		scanf("%s", &binarioB); 
		tam = strlen(binarioB); 

	for(i = tam-1; i > -1; --i) { 
		if(binarioB[i] == '1') 
		decimalB += exp; 
		exp *= 2; 
	}// Fim for. 

		somar = decimalA + decimalB; 

	int vet_bin[8];
	
	int  j;
	i=0;
		int aux_num = somar;


	while(somar > 0)
	{
		// obtém o resto da divisão de num por 2
		vet_bin[i] = somar % 2;
		i++;
		somar = somar / 2;
	}

	printf("%d em binario: ", aux_num);

	// percorre o vetor para mostrar o número em binário
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");



return 0; 
}
