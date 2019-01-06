#include <stdio.h>
#include <string.h>

struct Aluno{
	float nota1,nota2,media;
	char situacao[10];
	char nome[30];
};

void leAluno(struct Aluno * aluno);
void imprimeAluno(struct Aluno);

char aprovado[] = {'A','p','r','o','v','a','d','o','\0'};
char reprovado[] = {'R','e','p','r','o','v','a','d','o','\0'};

int main(){
    int i;
    
    
	struct Aluno alunos[6];
	for(i=0; i<2 ; i++){
		printf("Digite respectivamente o nome + 'enter' + nota 1 + 'enter' + nota 2 do aluno %d \n", (i+1));	
        leAluno(&alunos[i]);

	}
	for(i=0; i<2 ; i++){
        printf("\n");
        imprimeAluno(alunos[i]);
	}
}

void leAluno (struct Aluno * aluno){

	scanf("%s %f %f",&aluno->nome,&aluno->nota1,&aluno->nota2);
	aluno->media = (aluno->nota2+aluno->nota1)/2;
    int tam = strlen(aluno->nome);
    aluno->nome[tam]='\0';
	if(aluno->media >= 7){
		strcpy(aluno->situacao,aprovado);
	}else{
		strcpy(aluno->situacao,reprovado);
	}
}

void imprimeAluno(struct Aluno aluno){
    printf("Aluno %s, media: %f situacao: %s",aluno.nome,aluno.media,aluno.situacao);
}
