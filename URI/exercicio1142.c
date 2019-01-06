#include <stdio.h>
int main(){
	
	int linha;
	int aux = 0;
	int cont = 0;
	
	scanf("%d", &linha);

	while(cont < linha){
		
		printf("%d %d %d PUM\n",aux+1, aux+2, aux+3);
	
		aux += 4;
		cont++;
	}
	return 0;
}
