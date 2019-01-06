#include <stdio.h>


int main(){
	int i=0;
	int x;
	scanf("%d",&x);
	
	while(x!=0){
			printf("%d",i+1);
		for(i=0;i<x-1;i++){
			printf(" %d",i+2);
		}
		printf("\n");
		scanf("%d",&x);
		i=0;
	}
	
	
	return 0;
}

	
	


	

