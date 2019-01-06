#include <stdio.h> 
#include <stdlib.h>
 
#define MAX 8 //onde ocorrer MAX no código será atribuido o valor 8
 
int main (void)
{
    int numeros[MAX] = {2, 3, 3, 4, 6, 6, 7, 5};
    int i, aux;
 
    for(i=0; i<MAX;i++)printf("%d  ", numeros[i]);
 
    for (i=0; i < MAX/2; i++) {
        aux = numeros[i];
        numeros[i] = numeros[MAX-i-1];
        numeros[MAX-i-1] = aux;
    }
    printf("\n");
    for(i=0; i<MAX;i++)printf("%d  ", numeros[i]);
    
    printf("\n");
    system("PAUSE"); 
    return 0;
}  
