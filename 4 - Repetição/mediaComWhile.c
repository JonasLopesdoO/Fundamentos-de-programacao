#include <stdio.h>
int main(){
	//exemplo de programa que soma 5 valores com while
	double acc = 0;
	double val;
	int cont = 0;
	
	while(cont < 10){
		
		scanf("%lf", &val);
		acc += val;
		cont++;  //cont = cont + 1;
	}
	
	printf("%lf", acc/10);
	return 0;	
}

