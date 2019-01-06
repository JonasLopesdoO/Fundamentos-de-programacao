#include <stdio.h>
#include <math.h>    

	int testaForte(int n);
	int calculaForte(int i);
	int fatorial(int i);
	
	int soma = 0;
	
int main(){

	int i;
	scanf("%d", &i);
	calculaForte(i);
	
	if(testaForte(i)){
		printf("SIM");
	}else{
		printf("NAO");
	}
	return 0;
}



int calculaForte(int i){
	int j;
	int contaDigitos =0;
	int valorI=i;
	
		if (i == 0){
			 contaDigitos = 1;
		}else{
           while (valorI != 0)
           {
               contaDigitos++;
               valorI = valorI / 10;
           }
    	}
    	int digitos[contaDigitos],mod=pow(10,contaDigitos),dividir=pow(10,contaDigitos-1);
    	
    	for(j=0;j<contaDigitos; j++, mod/=10, dividir/=10){
    		
			digitos[j]=(i%mod)/dividir;
		}
		
		for(j=0;j<contaDigitos; j++, mod/=10, dividir/=10){
			soma += fatorial(digitos[j]);
		}			
}

	
int fatorial(int i){
	int resultado;
	
		if(i==0){
			resultado=1;
		}else{
			resultado=i*fatorial(i-1);
		}
		return resultado;
}

int testaForte(int n){

	if(n == soma){
		return 1;
	}else{
		return 0;
	}
}
