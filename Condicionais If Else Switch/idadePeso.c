#include <stdio.h>

int main()
{
	int idade, peso;
	scanf("%d", &idade);
	scanf("%d", &peso);
	
	if(idade < 0){
		printf("Naaaaaaao");
	}else
	
		if(idade < 20){
			if(peso <= 60){
				printf("9");
			}else if(peso > 60){
				if(peso <= 90){
					printf("8");
				}else if(peso > 90){
				printf("7");
				}
			}
		}else if(idade >= 20){
			if(idade <= 50){
				if(peso <= 60){
					printf("6");
				}else if(peso > 60){
					if(peso <= 90){
						printf("5");
					}else if(peso > 90){
						printf("4");
					}
				}
					
			}else if(idade > 50){
					if(peso <= 60){
						printf("3");
					}else if(peso > 60){
						if(peso <= 90){
							printf("2");
						}else if(peso > 90){
						printf("1");
						}
					}
			}
			
		}
		

	return 0;
}	
	
