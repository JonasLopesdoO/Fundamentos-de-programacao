#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct dicionario{
	char palavra[20];
    char definicao[50];

};

bool compararStrings(const char palavra1[], const char palavra2[]);
int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);


	bool compararStrings(const char palavra1[], const char palavra2[]){
		int i=0;

		while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra1[i] != '\0'){
			i++;
		}

		if(palavra1[i] == '\0' && palavra2[i] == '\0'){
			return true;
		}else{
			return false;
		}
	}

	int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){

		int i=0;

		while(i<numDePalavras){
			if(compararStrings(procurar,lingua[i].palavra)){
				return i;
			}else{
				i++;
			}
		}return -1;

	}
int main(void){
	const int NUMERODEDEFINICOES = 7;
	char palavra[20] = {'\0'};

	int resultadoPesquisa;

	const struct dicionario portugues[7] =	{{"pao","Comida de farinha"},
	 {"mortadela","Comida de carne"},
	 {"feijao","Comida brasileira"},
	 {"tropeiro","Tipo de feijao"},
	 {"queijo","De minas"},
	 {"macarronada","Tipico de vó"},
	 {"pizza","Típico da Itália"}};


	printf("Digite uma palavra\n");
	scanf("%s",palavra);

	resultadoPesquisa = procurarStrings(portugues,palavra,7);

	if(resultadoPesquisa!=-1){
		printf("%s\n",portugues[resultadoPesquisa].definicao);
	}else{
		printf("Palavra nao encontrada\n");
	}
	return 0;
}



