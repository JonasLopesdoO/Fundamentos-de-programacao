#include <stdio.h>
#include <string.h>
void maior (int temp[],char mes[][15]);
void menor (int temp[],char mes[][15]);

int main(){
	
	// Matriz de meses string
	char mes[][15] = {"Janeiro", "Fevereiro","Marco","Abril","Maio","Junio","Julio","Agosto",
					  "Setembro","Outubro","Novembro","Dezembro"};
	int temp[12];
	int i,j;	

 		  // vamos ler as temperaturas
  
		  for(i = 0; i < 12; i++){
		    scanf("%d",&temp[i]);
		  }
	
			maior(temp,mes);	
			menor(temp,mes);
		
	return 0;
}

void maior (int temp[],char mes[][15]){
	int maior=0,i,cont=-1;
		
		for(i=0;i<12;i++){
			if(temp[i] > maior){
				maior = temp[i];
				cont=i;
			}
		}
		if(cont == -1){
			cont=0;
		}
		
			printf("Maior temperatura: %d, Mes: %s\n",maior,mes[cont]);
		
}
void menor (int temp[],char mes[][15]){
	int menor=1000,i,cont=-1;
		
		for(i=0;i<12;i++){
			if(temp[i] < menor){
				menor = temp[i];
				cont=i;
			}
		}
		if(cont == -1){
			cont=0;	
		}
		
		printf("Menor temperatura: %d, Mes: %s\n",menor,mes[cont]);
		
}
