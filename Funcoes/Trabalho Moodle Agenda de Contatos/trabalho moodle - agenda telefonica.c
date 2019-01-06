#include <stdio.h>
#include <string.h>

int qntPessoas=0;//contador de contatos cadastrados
int qntMax =10;//Define quantidade maxima de contatos, melhor para testar...

void criaContato(char nome[][21],char email[][41],char telefone[][11]);
void buscaContato(char nome[][21],char email[][41],char telefone[][11]);
void atualizaContato(char nome[][21],char email[][41],char telefone[][11]);
void deletaContato(char nome[][21],char email[][41],char telefone[][11]);
void listaContato(char nome[][21],char email[][41],char telefone[][11]);


int main(){
	char op;
	char nome[qntMax][21];
	char email[qntMax][41];
	char telefone[qntMax][11];

	scanf(" %c",&op);//ler operação

		while(op!='S'){
		switch(op){
			case 'C':
				criaContato(nome,email,telefone);
					scanf(" %c",&op);//apos chamar funcao, lê nova opcao
			break;
			case 'R':
				buscaContato(nome,email,telefone);
				scanf(" %c",&op);//apos chamar funcao, lê nova opcao
			break;
			case 'U':
				atualizaContato(nome,email,telefone);
				scanf(" %c",&op);//apos chamar funcao, lê nova opcao
			break;
			case 'D':
				deletaContato(nome,email,telefone);
				scanf(" %c",&op);//apos chamar funcao, lê nova opcao
			break;
			case 'L':
				listaContato(nome,email,telefone);
				scanf(" %c",&op);//apos chamar funcao, lê nova opcao
			break;
			
		}
	}
	return 0;
}

void criaContato(char nome[][21],char email[][41],char telefone[][11]){

	char nomeNovo[21];
	char emailNovo[41];
	char telefoneNovo[11];
	int tam;


		scanf("%s %s %s",nomeNovo,emailNovo,telefoneNovo);
		tam = strlen(nomeNovo);


	if(qntPessoas<qntMax){//se houver espaço, incluir novo contato
        //copiar dados relativos a cada um...
		strcpy(nome[qntPessoas],nomeNovo);
        strcpy(email[qntPessoas],emailNovo);
        strcpy(telefone[qntPessoas],telefoneNovo);
		qntPessoas++;//contar mais um, para contato cadastrado
	}else{
	   
		printf("Create, não pode ser executada para o contato ");
        printf("%s, devido a espaço insuficiente\n",nomeNovo);
 }
}

void buscaContato(char nome[][21],char email[][41],char telefone[][11]){
	int i,achar=-1;//variavel que indica quando o contato existe na lista.
	char buscar[21];
    int tam;
	scanf("%s",buscar);
    tam = strlen(buscar);
    
		for(i=0;i<qntPessoas;i++){//compara a string digitada com os contatos da lista.
			if(strcmp(nome[i],buscar)==0){//retorna 0 se forem iguais.
				achar=i;
			}
		}
		
		if(achar!=-1){//se a variavel achar se alterar, então é porque o contato existe.
			printf("Nome: %s\n",nome[achar]);
			printf("E-mail: %s\n",email[achar]);
			printf("Telefone: %s\n",telefone[achar]);
		}else{//senao, o contato nao existe
		    printf("Contato %s inexistente!",buscar);//imprimi com o for pelo mesmo motivo da funcao anterior
		}
}

void atualizaContato(char nome[][21],char email[][41],char telefone[][11]){
	//basicamente se usa o mesmo trecho da funcao buscar, como nao mudei as variaveis.
	//pude usar a poderosa tecnica do ctrl+C, ctrl+V.
	int i,achar=-1;
	char buscar[21];
	int tam;
	
	scanf("%s",buscar);
	tam = strlen(buscar);

		for(i=0;i<qntPessoas;i++){
			if(!strcmp(nome[i],buscar)){
				achar=i;
			}
		}
		if(achar!=-1){
		//nessa parte eu estou atualizando os conteudos,nome,email,telefone,
		//na posição encrontrada.
			scanf("%s",nome[achar]);
			scanf("%s",email[achar]);
			scanf("%s",telefone[achar]);
		}else{
			printf("Contato %s inexistente!\n",buscar);
        }
}

void deletaContato(char nome[][21],char email[][41],char telefone[][11]){
	//mais uma vez, o trecho de codigo igual foi útil :).
	int i,achar=-1;
	char buscar[21];
    int tam;

	scanf("%s",buscar);
	tam = strlen(buscar);
	
		for(i=0;i<qntPessoas;i++){
			if(!strcmp(nome[i],buscar)){
				achar=i;
			}
		}
		if(achar!=-1){
			//nessa parte estou copiando o ultimo contato da lista e colocando no lugar
			//do contato deletado.Caso o contato deletado seja o ultimo, o proximo contato
			//cadastrado entrará no lugar dele, e não dará problema em nenhuma função.
			strcpy(nome[achar],nome[qntPessoas-1]);
			strcpy(email[achar],email[qntPessoas-1]);
			strcpy(telefone[achar],telefone[qntPessoas-1]);
			qntPessoas--;//como estou deletando,preciso atualizar a quantidade de contatos
			printf("Contato removido com sucesso!\n");

		}else{
		    printf("Contato %s inexistente!\n",buscar);
			
		}
}

void listaContato(char nome[][21],char email[][41],char telefone[][11]){
	int i;

	if(qntPessoas==0){//Se nao tiver ninguem, nao pode mostrar alguem.
		printf("Nenhum contato disponível!");
	}else{
		for(i=0;i<qntPessoas;i++){//mas se tiver, mostre todos que existirem.
			printf("Nome: %s\n",nome[i]);
			printf("E-mail: %s\n",email[i]);
			printf("Telefone: %s\n",telefone[i]);
			printf("###########################\n");
		}
	}
}



