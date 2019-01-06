#include <stdio.h>

int main(){
	
	int i=1;
	int parte2=7;
	
	int parte1=1;
	
	while(parte1<=9){
	for(i=0;i<3;i++){
		printf("I=%d J=%d\n",parte1,parte2);
		parte2--;	
	}
	parte1 += 2;
	parte2 +=5;
	}
	return 0;
}
