#include <stdio.h>
float soma(int n1,int n2);
float subtracao(int n1,int n2);
float multiplicacao(int n1,int n2);
float divisao(int n1,int n2);

int main(){
	float n1,n2;
	int soma;
	
	scanf("%f %f",&n1,&n2);
	soma=
	printf("Soma: %.0f \n",soma(n1,n2));
	printf("Subtracao: %.0f\n",subtracao(n1,n2));
	printf("Multiplicacao: %.0f\n",multiplicacao(n1,n2));
	printf("Divisao: %.2f\n",divisao(n1,n2));
	return 0;
}

float soma(int n1,int n2){
	
	return n1+n2;
}
float subtracao(int n1,int n2){
	return n1-n2;
}
float multiplicacao(int n1,int n2){
	return n1*n2;
}
float divisao(int n1,int n2){
	if(n2==0){
		printf("Imposivel dividir por zero\n");
		return 0;
	}else{
		return n1/n2;
		
	}
}
