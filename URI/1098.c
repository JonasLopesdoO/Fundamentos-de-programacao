#include <stdio.h>

int main(){
	
	int i=1;

	
	double parte1=0;
	double parte2=parte1+1;
	
	while(parte1<=2){
	for(i=0;i<3;i++){
		if(parte1==0||parte1==1||parte1==2){
		printf("I=%.0lf J=%.0lf\n",parte1,parte2);
		}else{
			printf("I=%.1lf J=%.1lf\n",parte1,parte2);	
		}
		parte2++;	
		
	}

	parte1 = parte1 + 0.2;
	parte2 = parte1+1;
	if(parte1==1||parte1==2){
		parte2=1;
	}
	}
	return 0;
}
