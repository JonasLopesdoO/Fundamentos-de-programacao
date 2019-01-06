#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpa() {
  printf("\e[H\e[2J");
}

void registra(char nome[15], int telefone) {
  FILE *fd;
  fd=fopen("nomesagenda","a");
  fprintf(fd, "%s\n", nome);
  fprintf(fd, "%d\n", telefone);
  printf("\n\tDados registrados!\n");
  fclose(fd);
  getchar();
}

void listalimp() {
  FILE *fd;
  fd=fopen("nomesagenda","w+");
  printf("\n\tLista limpa!\n");
  fclose(fd);
  getchar();
}

void pesquisa(char pesq[])
{
   FILE *fd;
   char curs[15];
   int telefone, existe=0;
   fd=fopen("nomesagenda","r");
   while ((fscanf(fd,"%s", curs))!=EOF)
      if (!strcmp(curs, pesq)) {
         printf("\n\tNome: %s", curs);
         fscanf(fd,"\n%d", &telefone);
         printf("\n\tTelefone: %d\n", telefone);
         fscanf(fd,"\n");
         existe=1;
      }
      else fscanf(fd,"\n\n");
   if (existe==0) printf("Cadastro inexistente!\n");
   getchar();
   fclose(fd);
}

void listar() {
  FILE *fd;
  char curs[15];
  int telefone,i=0;
  fd=fopen("nomesagenda","r");
  while ((fscanf(fd,"%s", curs))!=EOF) {
    printf("\n\tNome: %s",curs);
    fscanf(fd,"\n%d", &telefone);
    printf("\n\tTelefone: %d\n", telefone);
    fscanf(fd,"\n");
    i++;
  }
  printf("\n\tTotal de registros: %d",i);
}
  
int main(void) {
  FILE *fd;
  int menu,tamnome,telefone;
  char nome[15];
  while (menu!=0) {
    limpa();
    printf("\n\t Agenda de telefones. -Por hunz.\n");
    printf("\n\t(1)\tRegistrar nome.");
    printf("\n\t(2)\tProcurar nome.");
    printf("\n\t(3)\tListar nomes.");
    printf("\n\t(4)\tLimpar lista.");
    printf("\n\t(5)\tSobre.");
    printf("\n\n\t(0)\tSair.");
    printf("\n\n[Menu-HZ]$ ");
    scanf("%d",&menu);
    getchar();
    switch (menu) {
      case 1: 
        printf("\n\tEntre com o Nome: ");
        scanf("%s",&nome);
        getchar();
        tamnome=strlen(nome);
        if (tamnome>15) {
			  printf("O tamanho do nome passa de 15 letras.\n");
			  getchar(); getchar();
		}
	else {
	  printf("\n\tEntre com o Telefone: ");
	  scanf("%d",&telefone);
	  getchar();
	  registra(nome, telefone);
	}
       break;
      case 2: 
        printf("\n\tEntre com o Nome: ");
	scanf("%s",&nome);
	getchar();
	tamnome=strlen(nome);
	if (tamnome>15) {
	  printf("O tamanho do nome passa de 15 letras.\n");
	  getchar(); getchar();
	}
	else {
	  pesquisa(nome);
	}
       break;
      case 3: 
	listar();
	getchar();
       break;
      case 4: 
        listalimp();
	getchar();
       break;
      case 5: 
        printf("\n\tAgenda criada por hunz.\n\twww.vivaolinux.com.br/~hunz\n\tEMAIL/MSN: tn_negri@hotmail.com\n");
	getchar();
       break;
      case 0: break;
      default: 
        printf("\n\tOpcao invalida..\n");
	 getchar();
	 break;
      }
    }
    
  }
 

