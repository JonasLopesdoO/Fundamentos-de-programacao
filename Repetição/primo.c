#include <stdio.h>

int main(){
	
	int  numero;
	int i;
	int cont=0;
	scanf("%d",&numero);
	for(i=1;i<=numero;i++){
		if(numero%i==0){
			cont++;
		}
	}
	
	if(cont==2){
		printf("Eh primo\n");
	}else{
		printf("Nao eh primo");
	}
	
	
	


	return 0;
}
