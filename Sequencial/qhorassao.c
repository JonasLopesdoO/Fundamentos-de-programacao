#include <stdio.h>

int main(){
	
	int minutos, horas, segundos;
	
	scanf("%d", &segundos);
	
	horas = segundos /3600;
	minutos = (segundos - (horas * 3600))/60;
	segundos = segundos - (horas * 3600) - (minutos * 60);
	
	
	printf("%d:%d:%d",horas,minutos,segundos);
   
	
}
