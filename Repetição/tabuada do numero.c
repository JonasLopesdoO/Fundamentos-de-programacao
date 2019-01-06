#include <stdio.h>
int main(){
	

	int mult = 0;
	int cont = 0;
	int acc = 0;
	
	
	while(mult <= 90){
		
		cont++;
		while(acc < 10){
			
			acc++;
			mult = acc * cont;
			printf("%dx%d = %d\n",cont,acc, mult);
			
		}
		printf("\n");
		acc = 0;
	
		
	}
	
	return 0;
}
