#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <conio.h>



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



// apartir daqui n�o funciona

// Visualiza��o dos numeros pares




for (p = 0; i < 6; i++)













{

printf("N�o Houve Numeros Pares");

}

// Visualiza��o dos numeros Impares

if (ni > 0)

{

printf("Rela��o dos Numeros Impares");

for (p = 0; i < 6; i++)

{

if (ni > 0)








{

printf("N�o Houve Numeros Impares");







