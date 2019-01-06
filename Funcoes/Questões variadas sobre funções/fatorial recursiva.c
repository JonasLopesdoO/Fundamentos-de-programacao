#include <stdio.h>
int  fatorial(int n);
int main(){
	int numero; 
	int resultado;
	
	scanf("%d",&numero);
	
	resultado = fatorial(numero);
	printf("%d\n",resultado);
	
	
	return 0;
}

int  fatorial(int n){
	int resultado;
	
	if(n==0){
		resultado =1;
	}else{
		resultado=n*fatorial(n-1);
	}
	return resultado;
	
}
