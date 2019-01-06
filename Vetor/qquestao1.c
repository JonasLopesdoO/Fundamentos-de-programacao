#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <conio.h>

#

int main(int argc, char *argv[])

{

int ni, np, resto,p;

int n, i, vetor[6];

// Entrando com os valores

for (i = 0; i < 6; i++) {

printf("Digite o valor:");

scanf("%d", &vetor);


}

// Contar a qtd de numeros impares e pares

ni = 0; // numeros impares

np = 0; // numeroes pares

n = 0;

for (i = 0; i < 6; i++) {

resto=(vetor[n] % 2);

if(resto == 0) np++;


else ni++;

n++;

}


// Mostrando resultado

printf("total numero pares: %d \n", np);

printf("total numero impares: %d \n ", ni);



// apartir daqui não funciona

// Visualização dos numeros pares


if (np > 0)

{

printf("Numeros Pares");

for (p = 0; i < 6; i++)

{

if (np[p] > 0)

printf(np[p]);

}

}

else

{

printf("Não Houve Numeros Pares");

}

// Visualização dos numeros Impares

if (ni > 0)

{

printf("Relação dos Numeros Impares");

for (p = 0; i < 6; i++)

{

if (ni > 0)

printf(ni[p]);

}

}

else

{

printf("Não Houve Numeros Impares");

}

getch();


}
