#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct Agenda{
char nome[50];
char fone[17];
}T_agenda;


T_agenda Tab[50];

int total = 0;

void inclusao(void)
{
char op;
op = 's';
while ((total < 50) && (op == 's')) 
{
printf("Nome: ");
scanf("%s",&Tab[total].nome[0]);
printf("telefone: ");
scanf("%s",&Tab[total].fone[0]);
printf("deseja inserir mais dados?(s)ou(n)");
scanf("%s",&op);
total++;
}
}

void ordenar(void)
{
int i,j;
char temp[50];
for (i=0 ;i<total;i++)
{
for (j=0;j<total-1;j++)
{

if (strcmp(Tab[j].nome,Tab[j+1].nome)>0)
{
strcpy(temp,Tab[j].nome); 
strcpy (Tab[j].nome,Tab[j+1].nome);
strcpy(Tab[j+1].nome,temp);

}

}
}
} 


void pesquisar(void)
{
char pesq[20];
int i;
printf("entre com o nome que deseja pesquisar");
scanf("%s",&pesq[0]);
for (i= 0;i<total;i++)
{

if (strcmp(Tab.nome,pesq)== 0)
{

printf("Fone:%s",Tab.fone);
} 
}
}

void Listar(void)
{
int i ;
i=0;
while (i < total)
{
printf("%d)Nome:%s Fone:%s\n",i+1,Tab.nome,Tab.fone);
i++;
}
} 

void menu(void)
{
char op;
do
{ printf("\n(1)Incluir\n(2)Listar\n(3)Ordenar por nome\n(4)Pesquisar por nome");

scanf("%s",&op);
switch(op)
{
case '1':inclusao();
break;
case '2':Listar();
break;
case '3':eek:rdenar();
break;
case '4':pesquisar();
break; 

} 
} 
while (op != '5');
} 

int main ()
{
menu();
return 0;
}

