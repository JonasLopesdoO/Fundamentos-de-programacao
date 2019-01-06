#include <stdio.h>
	int main(){
		
		double precoingresso,qntingressos=120,despesas=200, lucro;
		
		for(precoingresso = 5; precoingresso >= 1; precoingresso -= 0.5){
			
				lucro = precoingresso * qntingressos - despesas;
				
				
				
				
				printf("Lucro máximo esperado: %.2lf\n Preço do ingresso: %.2lf\nQuantidade de ingressos vendidos: %.2lf\n", lucro, precoingresso, qntingressos);
			
				qntingressos += 26;
			
		} 
		
		
		
		
		
	return 0;
	}
