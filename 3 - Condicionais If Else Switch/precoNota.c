#include <stdio.h>

int main (){

	int cod;
	double qnt;
	double punit, ptnota, desconto, pfinal;

	scanf("%d %lf", &cod, &qnt);
	
	if(cod >= 1){
		if(cod <= 10){
			punit = 10;
			ptnota = punit * qnt;
		
			if(ptnota <= 250){
				desconto = ptnota * 0.05;
				pfinal = ptnota - desconto;	
				printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
			
				}else if(ptnota > 500){
					desconto = ptnota * 0.15;
					pfinal = ptnota - desconto;	
					printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);	
		
			}else{
				desconto = ptnota * 0.10;
				pfinal = ptnota - desconto;	
				printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
			}
				
		}else if(cod >= 11){
			if(cod <= 20){
			punit = 15;
			ptnota = punit * qnt;
		
			if(ptnota <= 250){
				desconto = ptnota * 0.05;
				pfinal = ptnota - desconto;	
				printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
			
				}else if(ptnota > 500){
					desconto = ptnota * 0.15;
					pfinal = ptnota - desconto;	
					printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);	
		
			}else{
				desconto = ptnota * 0.10;
				pfinal = ptnota - desconto;	
				printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
			}		
			}else if(cod >= 21){
				if(cod <= 30){
						punit = 20;
			ptnota = punit * qnt;
		
				if(ptnota <= 250){
					desconto = ptnota * 0.05;
					pfinal = ptnota - desconto;	
					printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
				
				}else if(ptnota > 500){
						desconto = ptnota * 0.15;
						pfinal = ptnota - desconto;	
						printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);	
			
				}	else{
					desconto = ptnota * 0.10;
					pfinal = ptnota - desconto;	
					printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
					}
						
				}else if(cod >= 31){
					if(cod <= 40){
					punit = 30;
					ptnota = punit * qnt;
		
						if(ptnota <= 250){
							desconto = ptnota * 0.05;
							pfinal = ptnota - desconto;	
							printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
				
						}else if(ptnota > 500){
								desconto = ptnota * 0.15;
								pfinal = ptnota - desconto;	
								printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);	
			
						}	else{
							desconto = ptnota * 0.10;
							pfinal = ptnota - desconto;	
							printf("O preco unitario e: %.2lf\nO preco total da nota e: %.2lf\nO valor do desconto e: %.2lf\nO preco final da nota e: %.2lf", punit, ptnota, desconto,pfinal);
							}
					}
				}
			}
		}
	}
	




















return 0;
}
