#include <stdio.h>

int main(){
	int d10, d11;
	int v1, v2;
	int d1, d2 ,d3, d4, d5, d6, d7, d8, d9;
	
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9, &v1, &v2);
	
	d10 = d1*10 + d2*9 + d3*8 + d4*7 + d5*6 + d6*5 + d7*4 + d8*3 + d9*2;
	d10 = d10 % 11;
	
		if(d10 < 2){
			d10 = 0;	
		}else{
			d10 = 11 - d10;
			
		}
		
	d11 = d1*11 + d2*10 + d3*9 + d4*8 + d5*7 + d6*6 + d7*5 + d8*4 + d9*3 + d10*2;
	d11 = d11 % 11;
	

		if(d11 < 2){
			d11 = 0;	
		}else{
			d11 = 11 - d11;
			
		}
		
	if(v1 == d10){
		if(v2 == d11){
			printf("SIM");
		}else{
			printf("NAO");
		}
	}else{
		printf("NAO");
	}
	
return 0;	
}
