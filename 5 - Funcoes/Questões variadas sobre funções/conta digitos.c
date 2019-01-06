#include <stdio.h>

int main(){
	int n=145,contaDigitos=0;
	
		if (n == 0){
			 contaDigitos = 1;
		}else{
           while (n != 0)
           {
               contaDigitos = contaDigitos + 1;
               n = n / 10;
           }
    	}
    	int digitos[contaDigitos];
    	
    	int i=0; 
		while (n > 0) { 
			digitos[i] = n % 10; 
			i++;
			n /= 10; 
		}
		for(i=0;i<contaDigitos;i++){
			printf("%d ",digitos[i]);
		}
	return 0;
}
