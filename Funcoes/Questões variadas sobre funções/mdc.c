#include <stdio.h>
int MDC(int mdc, int numero,int divisor);

int main(){

  int mdc;
  int numero;
    int result;
    int divisor = 1;

  printf("Entre com o 1o. numero da sequencia: ");
  scanf ("%d", &mdc);

      printf("Entre com o 2o do. numero da sequencia: ");
      scanf ("%d", &numero);

         result = MDC(mdc,numero,divisor);

  printf("MDC = %d\n", result);
  return 0;
}

int MDC(int mdc, int numero,int divisor){
	int novo_mdc=0,result=0;
	
	
 
 	
		 if (mdc % divisor == 0 && numero % divisor == 0){
	           novo_mdc = divisor;
	     }     	 	result = novo_mdc;
	     			divisor++;
	 	
	    	 if(divisor <= mdc && divisor <= numero){
	     		MDC(mdc,numero,divisor);
	
	     	 }else{	
	     		return result;
	     	 }
}





