//Faça um programa que receba 10 palavras em ingles,
//ordene-os de maneira crescente, usando a ordem lexicografica
//e escreva na tela segundo a nova ordem
#include <stdio.h>
#include <string.h>
int main(){
	
	char nomes[2][21], aux;
	int i=0,j,k,t;
	
	for(j=0;j<2;j++){
	
		fgets(nomes[i],21,stdin);

	}
	j=i+1;
	while(nomes[i]==nomes[j] && nomes[i]!='\n'){
	
		i++;
		j++;
	}
	i=0,t=i+1;

	
		printf("\n%s\n%s",nomes[0],nomes[1]);
	
	
	return 0;
}
