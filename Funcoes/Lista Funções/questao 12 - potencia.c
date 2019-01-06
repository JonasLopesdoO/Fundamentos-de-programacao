#include <stdio.h>

int elevado(int x,int z);


int main(){
	int x,z;
	scanf("%d %d",&x,&z);
	
	printf("%d",elevado(x,z));
	
	return 0;
}

int elevado(int x,int z){
	int i,potencia=1;
	
	for(i=0;i<z;i++){
		
		potencia=potencia*x;
		
	}
	return potencia;
}
