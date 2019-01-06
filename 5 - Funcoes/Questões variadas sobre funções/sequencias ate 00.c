#include <stdio.h>

int main(){
	int numero,n2=1, soma=0;
	
	scanf("%d",&numero);	
	
	while(n2!=0){
		while(numero!=0){
			if(numero%2==0){
				soma+=numero;
			}
			scanf("%d",&numero);
		}
			printf("%d\n",soma);
			soma=0;
			scanf("%d",&n2);
			numero = n2;
	}
		
			
	return 0;
}
