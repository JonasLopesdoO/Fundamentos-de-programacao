#include <stdio.h>
int soma(int hora, int minuto, int segundo);
int main(){
	int hora,minuto,segundo;
	scanf("%d %d %d",&hora, &minuto, &segundo);
	
	printf("%d segundos\n",soma(hora,minuto,segundo));
	return 0;
}

int soma(int hora, int minuto, int segundo){
	int i;
	segundo = segundo;
	minuto *= 60;
	hora *= 3600;
	 
	 segundo += hora + minuto;
	return segundo;
}
