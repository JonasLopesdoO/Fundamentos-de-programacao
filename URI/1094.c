#include <stdio.h>
int main(){
	int teste,i;
	scanf("%d",&teste);
	float percentC,percentR,percentS;
	int contC=0, contR=0, contS=0;
	int Quantia;
	char Tipo;
	float accT=0,accC=0,accR=0,accS=0;
	
	for(i=0;i<teste;i++){
		scanf("%d",&Quantia);
		scanf(" %c",&Tipo);
		
		accT+=Quantia;
		if(Tipo=='C'){
			accC+=Quantia;
		}else if(Tipo=='R'){
			accR+=Quantia;
		}else{
			accS+=Quantia;
		}
	}
	percentC=(accC*100)/accT;
	percentR=(accR*100)/accT;
	percentS=(accS*100)/accT;
	int p ='%';
	printf("Total: %.0f cobaias\n",accT);
	printf("Total de coelhos: %.0f\n",accC);
	printf("Total de ratos: %.0f\n",accR);
	printf("Total de sapos: %.0f\n",accS);
	printf("Percentual de coelhos: %.2f %c\n",percentC,p);
	printf("Percentual de ratos: %.2f %c\n",percentR,p);
	printf("Percentual de sapos: %.2f %c\n",percentS,p);
	return 0;
}	
