#include <stdio.h>
	int main(){
		
		int faixa1= 0, faixa2=0, faixa3=0, faixa4=0, faixa5=0;
		double porcentagem;
		int idade;
		int i;
		
				
		for(i = 0; i < 15; i++){
			scanf("%d",&idade);
			
				if(idade <= 15){
				faixa1++;
				}else if(idade <=30){
				faixa2++;
				}else if(idade <=45){
				faixa3++;
				}else if(idade <=60){
				faixa4++;
				}else{
				faixa5++;
				}
				
		
			
		} 
			porcentagem = ((faixa1+faixa5)*100)/15;
			printf("Faixa 1: %d\n",faixa1);
			printf("Faixa 2: %d\n",faixa2);
			printf("Faixa 3: %d\n",faixa3);
			printf("Faixa 4: %d\n",faixa4);
			printf("Faixa 5: %d\n",faixa5);
			printf("Porcentagem na 1 e 5: %.2lf\n",porcentagem);
		
		
		
	return 0;
	}
