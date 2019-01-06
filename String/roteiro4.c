#include <stdio.h>
#include <string.h>
int main(){

	char string[30];
	
	int i,cont=0;
	int tam;

	fgets(string,30,stdin);
	 tam = strlen(string);

	for(i=0;i<tam-1;i++){

		if(string[i] != 'a'){
			
			string[cont] = string[i];
			cont++;
		}

	}
	
	for(i=0;i<tam;i++){
		printf("%c",string[i]);
	}








	return 0;
}
