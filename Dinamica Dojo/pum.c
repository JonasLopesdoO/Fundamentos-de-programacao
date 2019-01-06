#include <stdio.h>

int main(){
	
	int n;
	
	scanf("%i", &n);
	
	//int r = n* 4;
	//int vet[r];
	int i;
	for(i = 1 ; i <= (n*4);i++){
		if( i % 4==0 ){
			printf(" pum\n");
			
		}else{
			printf("%d ", i);
		}
		
	}
	
	

	
	return 0;
}
