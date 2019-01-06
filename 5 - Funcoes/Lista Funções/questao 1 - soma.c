#include <stdio.h>
int soma(int numero);
int main(){
	int numero;
	scanf("%d",&numero);
	
	printf("Soma: %d\n",soma(numero));
	return 0;
}

int soma(int numero){
	int i;
	int acc;
		for(i=2;i<=numero;i++){
			acc += i;
		}
	return acc;
}
