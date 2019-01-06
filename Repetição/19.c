#include <stdio.h>
#include <string.h>
int main(){
	
	char letra='a';
	
	
	float lucro, venda, compra;
	int cont=0,menos=0;
	float acc=0;
	
	while(letra != 'F'){
		
		scanf("%s",&letra);
			scanf("%f %f", &compra,&venda);
		lucro = venda - compra;
		acc+=lucro;
		if(lucro > 1000){
			cont++;
		}else if(lucro <200){
			menos++;
		}
	
		
	}
		
		
	
		printf("Lucro: %.2f\nQnt: %d\nMenos: %d\nTotal: %.2f\n", lucro,cont,menos,acc);
	
	
	return 0;
}
