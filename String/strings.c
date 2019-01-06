#include <stdio.h>
#include <string.h>

int main(){
	char pnome[10];
	char mnome[10];
	char sobrenome[10];
	char rua[50];
	char casa[5];
	char cep[10];
	
	fgets(pnome,10,stdin);
	fgets(mnome, 10, stdin);
	fgets(sobrenome,10,stdin);
	fgets(rua, 50,stdin);
	fgets(casa, 5,stdin);
	fgets(cep, 10,stdin);

	
	printf("O aluno %s %s %s, mora na rua %s, %s, do cep: %s",pnome, mnome, sobrenome, rua, casa, cep);
	
	return 0;
}
