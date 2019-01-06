#include <stdio.h>
#include <string.h>
int main(){
	
	
	char string[200];
	int tam;
	fgets(string,200,stdin);
	int i;
	tam = strlen(string);
	
	int aux[tam];
	
	for(i=0;i<tam;i++){
		aux[i] = string[i];
	}
	
	for(i=0;i<tam;i++){
		aux[i] = aux[i]-7;
	}
	
	for(i=0;i<tam-1;i++){
	printf("%c",aux[i]);
	}
	
	return 0;
}
