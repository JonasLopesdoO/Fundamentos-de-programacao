#include <stdio.h>

int main(){
	

	int i,numero[10],par[10],impar[10];
	int j=0;
	int p=0;
	int pp=0;
	int ii=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&numero[i]);
		if(numero[i]%2==0){
			pp++;
			
		}else{
			ii++;
		}
	}
	
	for(i=0; i<10;i++){
		if(numero[i]%2==0){
			par[j]=numero[i];
			j++;	
		}else{
			impar[p]=numero[i];
			p++;
		}
		
	}
	
	for(i=0;i<pp;i++){
		printf("Pares: %d ",par[i]);
	}
	printf("\n");
	
		for(i=0;i<ii;i++){
		printf("Impares: %d ",impar[i]);
		}
		printf("\n");
	
		
	
	return 0;
}
