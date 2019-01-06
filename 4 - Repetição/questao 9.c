#include <stdio.h>
int main(){
	
	int idade;
	double media, peso, altura;
	int qntpeso90=0, percent=0;
	int i, acc=0;
	
	for(i=0;i<10;i++){
		scanf("%d %lf %lf", &idade, &peso, &altura);
		
		if(peso > 90){
			if(altura < 1.5){
				qntpeso90++;
			}
		}
		
		
		if(idade > 10){
			if(idade < 30){
				if(altura > 1.9){
					percent++;
				}
			}
		}
		acc +=idade;
	}
	
	media = acc/10;
	
	printf("Media: %.2lf\nQnt pessoas: %d\nPercent: %d", media, qntpeso90, percent);
	
	return 0;
}
