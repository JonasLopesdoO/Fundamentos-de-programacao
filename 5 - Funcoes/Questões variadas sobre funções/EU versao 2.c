#include <stdio.h>

int main(){
	int E,U;
	
	for(E=1;E<10;E++){
		for(U=1;U<10;U++){
			if((3*U)%10==E && (3*U)/10+E==U){
				printf("%d",E+U);
			}
		}
	}
	
	return 0;
}

