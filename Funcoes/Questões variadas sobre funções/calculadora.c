#include <stdio.h>
	int soma(int a,int b);	
	int subtracao(int a,int b);
	int multiplicacao(int a,int b);
	int divisao(int a,int b);
	
		int soma(int a,int b){
			return a+b;
		}
		int subtracao(int a,int b){
			return a-b;
		}
		int multiplicacao(int a,int b){
			return a*b;
		}
		int divisao(int a,int b){
			if(b==0){
				printf("Impossivel\n");
				return 0;
			}
			return a/b;
		}


int main(){

	
	int a,b,c;
	scanf("%d %d",&a,&b);
	
	c=soma(a,b);
	printf("Soma %d\n",c);
	c=subtracao(a,b);
	printf("Subtracao %d\n",c);
	c=multiplicacao(a,b);
	printf("Multiplicacao %d\n",c);
	c=divisao(a,b);
	printf("Divisao %d\n",c);
	
}
