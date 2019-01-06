
#include <stdio.h>


	int main(){
		
		int X=1;
		int Y=1;
		
		
		

	
		
		
		while(X!=0||Y!=0){
			scanf("%d %d",&X,&Y);
			
			if(X==0||Y==0){
				return 0;
			}
			if(X>0){
				if(Y>0){
					printf("primeiro\n");
				}else{
					printf("quarto\n");
				}
			}else if(Y>0){
				printf("segundo\n");
			}else{
				printf("terceiro\n");
			}
			
		}
			
	
		
		
	

	return 0;
}
