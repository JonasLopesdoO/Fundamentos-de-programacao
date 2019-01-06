#include <stdio.h>
int main(){
	//exemplo de programa que soma 5 valores com while
	double soma = 0;
	int idade = 0;
	double media;
	int dividendo = 0;
	
	while(idade >= 0){
		
		
		scanf("%d", &idade);
		if(idade >= 0){
		
		
		soma = soma + idade;
		  //cont = cont + 1;
		dividendo++;
		
		}
	}
	
	if (dividendo >0) 
{ 
   media = soma / dividendo; 
	printf("%.2lf", media);
} 
else{
	
 printf("Nenhum dado foi informado."); 
		
}
	
	 
	return 0;	
}

