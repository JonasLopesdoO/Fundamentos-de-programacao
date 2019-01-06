#include <stdio.h>
int main(){
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	while(x!=y){
		if(x<y){
			printf("Crescente\n");
		}		else{
			printf("Decrescente\n");
		}
		scanf("%d",&x);
		scanf("%d",&y);
	}

	return 0;
}	
