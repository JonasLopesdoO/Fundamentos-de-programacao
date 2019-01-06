#include <stdio.h>
#include <string.h>

int main(){

	char string[30];
	
	int i,cont=0;
	int tam;
	int soma=0;
	fgets(string,30,stdin);
	 tam = strlen(string);
	int aux[tam];
	
	for(i=0;i<tam-1;i++){
		aux[i] = string[i];
		soma += aux[i];

	}
	
	
		printf("%d",soma);









	return 0;
}
