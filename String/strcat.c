#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[30];
	char nome2[30];
	
	fgets(nome,30,stdin);
	fgets(nome2,30,stdin);
	
	
	
	
	
	printf("%s",strcat(nome,nome2));

	return 0;
}
