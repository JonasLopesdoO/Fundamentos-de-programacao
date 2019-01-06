#include <stdio.h>
float sequencia(int n);


int main(){
	int n;
	scanf("%d",&n);
	
	printf("%.3f",sequencia(n));
	
	return 0;
}

float sequencia(int n){
	float i,soma=0, inicio=1,divisao = 1;
	
	for(i=0;i<n;i++,divisao++){
		soma += inicio/divisao;
	}
	return soma;
}
