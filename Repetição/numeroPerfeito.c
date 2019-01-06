#include <stdio.h>
int main (){


	int  numero,teste, ac=0,i,ii;

	scanf("%d", &teste);


	for(ii = 0; ii<teste; ii++){
	scanf("%d", &numero);

	for (i =1; i < numero; i++){
		
		if(numero %i==0){
		ac += i;
		}
		
		}

		
		if(ac == numero){
			printf("%d eh perfeito\n",numero);
		}	else if(ac!=numero || numero%2 !=0){
				printf("%d nao eh perfeito\n",numero); 
			}
			ac = 0;
			
		}
	
 

return 0;
}
