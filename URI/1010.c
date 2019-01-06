#include <stdio.h>
int main(){
	
	int codp1, codp2, qtdp1, qtdp2;
	double valorp1, valorp2;
	double calc;
	
	
	scanf("%d %d %lf", &codp1, &qtdp1, &valorp1);
	scanf("%d %d %lf", &codp2, &qtdp2, &valorp2);
	
	
	calc = (qtdp1 * valorp1) + (qtdp2 * valorp2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", calc);
	
	
	return 0;
	
	
	
}
