#include <stdio.h>

void primos();

int main(){
	
	int i,j, cont=0, primo=0;
	
	for(i=101;cont<10;i++){
		primo=0;
		for(j=2;j<i;j++){	
			if(i%j==0){
				primo++;
			}	
		}
			if(primo == 0){
				printf("%d\n",i);
				cont++;
			}
	}
	

	return 0;
}

void primos(){

}
