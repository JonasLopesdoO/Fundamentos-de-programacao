#include <stdio.h>
int main(){
	double preco, novopreco,aumento, imposto =0;
	int categoria;
	char situacao;
	
	printf("Digite o preco:\nDigite a categoria: 1 - Limpeza, 2 - Alimentacao, 3 - Vestuario\nDigite a situacao: R - produtos que necessitam de refrigeracao e N - produtos que nao necessitam de refrigeracao\n");
	
	scanf("%lf %d ", &preco, &categoria);
	scanf("%c", &situacao);
	
	
		switch(categoria){
			case 1:
				if(preco <= 25){
					aumento = (preco*0.05);
					printf("O aumento e: %.2lf\n", aumento);
				}else{
					aumento =(preco*0.12);
					printf("O aumento e: %.2lf\n", aumento);					
				}
					if(situacao == 'R'){
						imposto = preco * 0.05;	
						printf("O valor do imposto e: %.2lf\n", imposto);
					}else{
						imposto = 0;
						printf("O valor do imposto e: %.2lf\n", imposto);
					}
						novopreco = preco + aumento - imposto;
						printf("O novo preco e: %.2lf\n", novopreco);
						
						if(novopreco <= 50){
							printf("Barato\n");
						}else if(novopreco >= 120){
							printf("Caro\n");
						}else{
							printf("Normal\n");
						}
			break;
			
			case 2:
				if(preco <= 25){
					aumento =(preco*0.08);
					printf("O aumento e: %.2lf\n", aumento);
				}else{
					aumento = (preco*0.15);
					printf("O aumento e: %.2lf\n", aumento);					
				}
					if(situacao == 'R'){
						imposto = preco * 0.08;
						printf("O valor do imposto e: %.2lf\n", imposto);
					}else{
						imposto = preco * 0.05;
						printf("O valor do imposto e: %.2lf\n", imposto);
					}
						novopreco = preco + aumento - imposto;
						printf("O novo preco e: %.2lf\n", novopreco);		
						
						if(novopreco <= 50){
							printf("Barato\n");
						}else if(novopreco >= 120){
							printf("Caro\n");
						}else{
							printf("Normal\n");
						}			
						
			break;
			
			case 3:
				if(preco <= 25){
					aumento = (preco*0.10);
					printf("O aumento e: %.2lf\n", aumento);					
				}else{
					aumento = (preco*0.18);
					printf("O aumento e: %.2lf\n", aumento);					
				}
					if(situacao == 'R'){
						imposto = preco * 0.05;	
						printf("O valor do imposto e: %.2lf\n", imposto);
					}else{
						imposto = 0;
						printf("O valor do imposto e: %.2lf\n", imposto);
					}
						novopreco = preco + aumento - imposto;
						printf("O novo preco e: %.2lf\n", novopreco);
						
						if(novopreco <= 50){
							printf("Barato\n");
						}else if(novopreco >= 120){
							printf("Caro\n");
						}else{
							printf("Normal\n");
						}
			break;
			default:
				printf("Opcao incorreta");
				main();
			break;
		}

	return 0;
}
