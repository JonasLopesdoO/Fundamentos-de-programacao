#include <stdio.h>
#include <string.h>
int main(){
	
	int i=0;
	double nota[2];
	char nome[2][10];
	
	
	
	printf("Digite o nome do 1º aluno:\n");
	scanf("%s",&nome[i]);
	
		printf("Digite a nota de %s:\n",nome[i]);
	scanf("%lf",&nota[i]);
	printf("\n");
	i++;
	
		printf("Digite o nome do 2º aluno:\n");
	scanf("%s",&nome[i]);
	
		printf("Digite a nota de %s:\n",nome[i]);
	scanf("%lf",&nota[i]);
	
	
	printf("Relatorio de notas:\n");
	printf("Aluno\tNota\n");
	printf("%s\t%.2lf\n",nome[0],nota[0]);
	printf("%s%.2lf\n",nome[1],nota[1]);
	
	

	
	return 0;
}
