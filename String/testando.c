#include <stdio.h>
#include <string.h>

int main(){
	
	char lista[5][60];
	int i;
	
	for(i=0;i<5;i++){
		fgets(lista[i],60,stdin);
	}
	
	
	for(i=0;i<5;i++){
		
		printf("%s\n",lista[i]);
		
	}
	
	return 0;
}
