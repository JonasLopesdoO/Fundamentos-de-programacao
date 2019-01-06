/*
        Programa: strord.c
        Objetivo: Exemplo de leitura e ordenacao de matriz de strings
        Autor: Adriano Cruz
*/

#include<stdio.h>
#include<string.h>

#define DIML 5
#define DIMC 40

int main( void)
{
     int i, fim = DIML;
	 int trocou;
     char nomes[DIML][DIMC];
	 char temp[DIMC];


     for (i=0; i<DIML; i++)
	 {
         printf("Entre com a linha %d", i);
         gets(nomes[i]);
     }

	 puts("Nomes lidos");
     for (i=0; i<DIML; i++)
	 {
         printf("O nome %d e ", i);
         puts(nomes[i]);
     }
	 do 
	 {
       trocou = 0;
       for (i=0; i<fim-1; i++)
	   {
           if (strcmp(nomes[i], nomes[i+1]))
		   {
              strcpy(temp, nomes[i]);
              strcpy(nomes[i],nomes[i+1]);
              strcpy(nomes[i+1], temp);
              trocou = 1;
           }
       }
       fim--;
	} while (trocou);

	 puts("Nomes ordenados");
     for (i=0; i<DIML; i++)
	 {
         printf("O nome %d e ", i);
         puts(nomes[i]);
     }

	 return 0;
}
