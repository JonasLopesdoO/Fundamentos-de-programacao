#include <stdio.h>
 
int imprimir(int inicio, int limite){
    if(inicio < limite){
    	printf("%d ",inicio);
    	imprimir(inicio+1,limite);
	}
    
       
}
 
int main()
{
    int inicio, limite;
    inicio =10;
	limite=20;
    
    printf("Impressao recursiva\n");
    imprimir(inicio,limite);
    
    return 0;
}
