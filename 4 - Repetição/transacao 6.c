#include <stdio.h>
int main(){
	char codigo;
	double transacao;
	int i;
	double parcela1, parcela2, parcela3;
	double acavista=0, acaprazo=0, actotal=0, acparcela1=0;
	
	for(i = 0; i < 7; i++){
		scanf("%c", &codigo);
		
		
		
		
		if(codigo == 'V'){
			scanf("%lf", &transacao);
			acavista += transacao;
		}else if(codigo == 'P'){
			printf("Digite a primeira parcela de 3 parcelas da compra:\n");
			scanf("%lf %lf %lf", &parcela1, &parcela2, &parcela3);
			
			acparcela1 += parcela1;
				acaprazo += parcela1 + parcela2 + parcela3;
		}
		
	
	
		
	}
			actotal = actotal + acavista + acaprazo;
	printf("Transacoes a vista: %.2lf\n", acavista);
	printf("Transacoes a prazo: %.2lf\n", acaprazo);
	printf("Transacoes totais: %.2lf\n", actotal);
	
	
	return 0;
}
