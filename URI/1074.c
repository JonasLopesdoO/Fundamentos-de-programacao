#include <stdio.h>

int main(){
	
	int n;
	int i;
	scanf("%d",&n);
	int numeros;
	for(i=0;i<n;i++){
		scanf("%d",&numeros);
		
		if(numeros !=0){
		 if(numeros %2 ==0){
	 	
			 	if(numeros > 0){
					printf("EVEN POSITIVE\n");
				}else{
					printf("EVEN NEGATIVE\n");
				}
			}else if(numeros > 0){
				printf("ODD POSITIVE\n");
		 	}else{
				printf("ODD NEGATIVE\n");
		 	}
		 }else{
				printf("NULL\n");
		 }
		
		 	
			
	
		
	}
	
	
	return 0;
}
