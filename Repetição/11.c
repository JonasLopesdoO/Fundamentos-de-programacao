#include <stdio.h>

int main(){
	int p=0;
	double preco[2],novopreco ,precofinal, parcela;
	int qnt = 0;
	int d = 1;
	double increment;
	
		scanf("%lf", &preco[0]);
		preco[1] = preco[0];
		increment = 0.03;
	while(qnt <= 60){
	

	if(d == 1){
		precofinal = preco[0] - (preco[0]* 0.20);
	}else{
		precofinal = novopreco + (novopreco * (increment - 0.03));
	}
	
	
	
	parcela = precofinal / qnt;
	if(qnt == 0){
		printf("Preco final: %.2lf\tQuantidade de parcelas: 1\tValor da parcela: %.2lf\n", precofinal, qnt, parcela);
	}else{
			printf("Preco final: %.2lf\tQuantidade de parcelas: %d\tValor da parcela: %.2lf\n", precofinal, qnt, parcela);
	}
	qnt += 6;
	d++;
	increment = increment + 0.03;
	
	novopreco = preco[1];
	}

	
	
	return 0;
}
