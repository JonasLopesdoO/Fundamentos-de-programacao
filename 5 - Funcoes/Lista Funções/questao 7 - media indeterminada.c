#include <stdio.h>
int indeterminado(float n);
int main(){
	float n;
	int i=0;

	scanf("%f",&n);
	indeterminado(n);


	return 0;
}

int indeterminado(float n){
	float media=0,acc=0;
	int i=0;
		while(n>0){	
		
		acc+=n;
		i++;
		
		scanf("%f",&n);
	}
	media = acc/i;
	printf("%f",media);	
}
