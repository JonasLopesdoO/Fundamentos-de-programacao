
#include <stdlib.h>
#include <conio.h>
/*
*******************************************************************************
* AGENDA COM 10 POSICOES	*
* AUTOR: EMERSON BRAGA LARA *
* ESTUDANTE DE ENGENHARIA DA COMPUTACAO - UNA *
* BELO HORIZONTE - MINAS GERAIS - BRASIL *
*******************************************************************************
*/


void limpar_agenda (char nomes[10][50], char tels [10][14]);//FUNCAO PARA LIMPAR AS POSICOES DA AGENDA
void pesquisar (char nomes[10][50], char tels[10][14]); //FUNCAO PARA PESQUISAR AS POSICOES DA AGENDA
void inserir (char nomes[10][50], char tels [10][14]); //FUNCAO PARA INSERIR DADOS NUMA POSICAO NA AGENDA
void alterar (char nomes[10][50], char tels [10][14]); //FUNCAO PARA ALTERAR DADOS EM UMA POSICAO DA AGENDA
void excluir (char nomes[10][50], char tels[10][14]); //FUNCAO PARA EXCLUIR DADOS DE UMA POSICAO NA AGENDA
int menu(void);

int main()
{
int opcao;
char nomes[10][50], tels[10][14];
limpar_agenda (nomes, tels);	
	do { //LOOP PARA MENU
		opcao = menu();
		switch (opcao) { //MENU PRINCIPAL 
		case 1: pesquisar (nomes, tels);
		break;
		case 2: inserir (nomes, tels);
		break;
		case 3: alterar (nomes, tels);
		break;
		case 4: excluir (nomes, tels);
		break;
		case 9: limpar_agenda (nomes, tels);
		break;
		case 0: //sair
		break;
}
	}while (opcao !=0);
system("pause");
return 0;
} 

void limpar_agenda (char nomes[10][50], char tels[10][14]) //ESTA FUNCAO GRAVA UM VALOR NULO NAS POSICOES DAS MATRIZES
{
for (int posicao=0; posicao<10; posicao++)
{
nomes[posicao][0]= '{COMENTARIO}'; //nome que estao na xº posicao recebe vazio no seu primeiro bit limpando o restante
tels[posicao][0]= '{COMENTARIO}'; //tels que estao na xº posicao recebe vazio no seu primeiro bit limpando o restante
}

system("pause");
} 

int menu(void) //MOSTRA NA TELA AS OPCOES PARA O USUARIO
{
int op;
system("cls"); //limpa tela

//cout<<"1 - Pesquisar opcoes \n";
//cout<<"2 - Inserir \n";
//cout<<"3 - alterar \n";
//cout<<"4 - Excluir \n";
//cout<<"9 - Limpar Agenda \n";
//cout<<"0 - Sair \n";
return op;
}

void pesquisar (char nomes [10][50], char tels[10][14]) //FUNCAO PARA PESQUISA DE DADOS GRAVADOS
{
int posicao;
system("cls");
do{
scanf("%d", &posicao);
} while (posicao<1||posicao>10);//caso o usuario insira um valor fora do intervalo de 1 a 10 ser-lhe-á requisitado digitar novamente
posicao--;
if (nomes[posicao][0]=='{COMENTARIO}')// condicao para quando o usuario escolher uma posicao vazia
{
cout<<"\a\n Posicao vazia!\n";
system ("pause");
}

else 
{
cout<<"Nome: " <<nomes[posicao]<<endl;
cout<<"Telefone: "<<tels[posicao]<<endl;
}
system("pause");
}
void inserir (char nomes [10][50], char tels[10][14])//FUNCAO PARA INSERIR DADOS
{
int posicao = 0;
while (nomes[posicao][0]!='{COMENTARIO}'&& posicao<9)
{
posicao++;
}
if (posicao<10&& nomes[posicao][0]=='{COMENTARIO}')
{
cout<<"Nome:\n";
scanf("%s",nomes[posicao]);

cout<<"Telefone:\n";
scanf("%s",tels[posicao]);
}
else 
{
cout<<"\a\nAgenda cheia!\n"; //caso o número de posicoes preenchidas ultrapasse 10 esta mensagem é exibida.
system("pause");
}

} 
void alterar (char nomes[10][50], char tels[10][14])//FUNCAO PARA ALTERAR DADOS GRAVADOS
{
int posicao;
char confirma;
do
{
cout<<"Informe a posicao (1 a 10) para alterar:\n";
cin>>posicao;
}
while (posicao<1||posicao>10);//caso o usuario insira um valor fora do intervalo de 1 a 10 ser-lhe-á requisitado digitar novamente
posicao--;
if (nomes[posicao][0]='{COMENTARIO}')// condicao para quando o usuario escolher uma posicao vazia
{
cout<<"\a\n Posicao vazia.\n";
}
else
{
cout<<"Nome:"<<nomes[posicao]<<endl;
cout<<"Deseja altera o nome?(s):";
cin>>confirma;
if (confirma =='s')
{
cout<<"Nome: ";
cin>>nomes[posicao];
cout<<"Suuuuuucessoooooooo!!!\n\n";
}
cout<<"Telefone: "<<tels[posicao];
cout<<"Deseja alterar o telefone?(s):";
cin>>confirma;
if (confirma =='s')

{
cout<<"Telefone(99)9999-9999:\n";
cin>>tels[posicao];
cout<<"Telefone alterado com sucesso!\a\a\n";
}
}
}

void excluir (char nomes[10][50], char tels[10][14])//FUNCAO PARA EXCLUIR DADOS
{
int posicao;
char confirma;
do
{
cout<<"Deseja excluir qual posicao (0 a 10)?\n";
cin>>posicao;
} while(posicao<1||posicao>10);//caso o usuario insira um valor fora do intervalo de 1 a 10 ser-lhe-á requisitado digitar novamente
posicao--;
if (nomes[posicao][0]='{COMENTARIO}')// condicao para quando o usuario escolher uma posicao vazia
{
cout<<"\a\n Posicao já está vazia.\n";
system("pause");
}
else
{
cout<<"Tem certeza que deseja apagar"<<nomes[posicao]<<"?\n"<<endl;//CONFIRMACAO PARA EXCLUSAO
cin>>confirma;
if (confirma =='s'||confirma=='S')//"S" maísculo e minúsculo serão aceitos.
{
nomes[posicao][0]='{COMENTARIO}';
cout<<"Posicao excluida. Se nao podia, [*****]!";
}
}	
}
