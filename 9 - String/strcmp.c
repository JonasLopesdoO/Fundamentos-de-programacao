//Faça um programa que receba 10 palavras em ingles,
// ordene-os de maneira crescente, usando a ordem lexicografica
//  e escreva na tela segundo a nova ordem
#include <stdio.h>
#include <string.h>
int main(){
	
	char p1[20];
	char p2[20];
	int tam1,tam2;
	int i;
	
	scanf("%s",&p1);
	
	scanf("%s",&p2);
	i=0;
	while((p1[i]!=='\0'||p2[i]!=='\0') && p1[i]==p2[i]){
		i++;
	}
	
	
	
	return 0;
}
