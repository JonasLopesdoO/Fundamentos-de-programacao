#include <stdio.h>
int main (){
	
	int num, somap=0, somapr=0;
	int i,ii;
	int div=0;
	for( i=0; i<10; i++){
		scanf("%d", &num);
		
		if(num%2==0){
			somap += num;
		}
		
			for(ii = num; ii > 0; ii--){
				if(num%ii==0){
					div++;
				}
					
			}
			
			if(div == 2){
				somapr += num;	
			}
		
	
	}
	 
	printf("Soma: %d\n", somap);
	printf("Somapr: %d\n", somapr);
	
	
	return 0;
}
