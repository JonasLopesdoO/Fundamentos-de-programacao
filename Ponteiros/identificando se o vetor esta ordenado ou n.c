#include <stdio.h>
int ordenado(int vetor[]);
int ordenaCrescente(int vetor[]);
int ordenaDecrescente(int vetor[]);


int main(){
	int i, vetor[10];
	
	for(i=0;i<10;i++){
		scanf("%d",&vetor[i]);
	}
	
	if(ordenado(vetor)){
		printf("Ordenado\n");
	}else{
		printf("Desordenado\n");
	}
	
	return 0;
}

int ordenado(int vetor[]){
		int i,j,cont=0;
		int result; 
		
	if(vetor[0]>vetor[1]){
			if(ordenaCrescente(vetor)==1){
				return 1;		
			}else{
				return 0;
			}
	}else{
			if(ordenaDecrescente(vetor)==1){
				return 1;
			}else{
				return 0;
			}					
	}	
}

int ordenaCrescente(int vetor[]){
	int i,j,cont =0;
	
	for(i=0,j=i+1;i<9;i++,j++){		
		if(vetor[i] < vetor[j]){
			cont++;
		}
	}

	if(cont == i+1){
		return 1;
	}else{
		return 0;
	}
	
}

int ordenaDecrescente(int vetor[]){
	int i,j,cont =0;
	
	for(i=0,j=i+1;i<9;i++,j++){		
		if(vetor[i]  vetor[j]){
			cont++;
		}
	}
	
	if(cont == i+1){
		return 1;
	}else{
		return 0;
	}	
}


