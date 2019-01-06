#include <stdio.h>

int verificaValor (int n);

void main(){
	int n;
	scanf("%d",&n);
	
		verificaValor(n);
	
}

int verificaValor (int n){
	
	if(n<0){
		printf("%d Negativo\n",n);
	}else{
		printf("%d Positivo\n",n);
	}
	
}







