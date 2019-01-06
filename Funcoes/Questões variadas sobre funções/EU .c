#include <stdio.h>
int inverte(int x);
int main(){
	int a,b,c,i;
	int acima, abaixo,aux, result;
	int soma;
	int troca;
	for(i=1;i<10;i++){
		a=i;
		b=a;
		c=b;
		
			abaixo = a+b+c;
			aux = abaixo;
			abaixo = abaixo % 10;
				
				acima = aux/10;
				result = (acima + abaixo)*10+abaixo;
				acima = abaixo*10+c;
				
				troca =	inverte(acima);
				
					if(result==troca){
						soma=abaixo+c;
					}
	}
	
		printf("A soma eh: %d\n",soma);
	
	return 0;
}

int inverte(int n){
	int result=0,i=1;
	
	while(i<=n){
		result *=10;
		result+=(n%(i*10)-n%i)/i;
		i*=10;
	}
	return result;
}
