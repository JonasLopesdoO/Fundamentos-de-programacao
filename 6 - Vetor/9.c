#include <stdio.h>
#include <string.h>
int main(){
	

	int i, codigo[10];
	char nome[10][20];
	double preco[10];
	double novoPreco[10];
		int cont=0;

	for(i=0;i<10;i++){
		scanf("%s",&nome[i]);
	
	}
	for(i=0;i<10;i++){
		scanf("%d",&codigo[i]);
	}
	for(i=0;i<10;i++){
		scanf("%lf",&preco[i]);
	}

	
	for(i=0;i<10;i++){
			if(codigo[i] %2 ==0){
				if(preco[i]>1000){
					novoPreco[i] = preco[i]*1.2;
					printf("Nome: %s, Codigo: %d, Preco %.2lf: Novo preco: %.2lf\n",nome[i],codigo[i],preco[i],novoPreco[i]); 
			}else{
				novoPreco[i] = preco[i]*1.15; 	
					printf("Nome: %s, Codigo: %d, Preco %.2lf: Novo preco: %.2lf\n",nome[i],codigo[i],preco[i],novoPreco[i]); 
			}
		}else if(preco[i]>1000){
			novoPreco[i] = preco[i]*1.1;
					printf("Nome: %s, Codigo: %d, Preco %.2lf: Novo preco: %.2lf\n",nome[i],codigo[i],preco[i],novoPreco[i]); 
		}
	}
	
		
	
	return 0;
}
