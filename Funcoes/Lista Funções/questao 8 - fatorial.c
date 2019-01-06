#include <stdio.h>
void fat(int fatorial);
int main(){
	int fatorial;
	int resposta =1;

	scanf("%d",&fatorial);
	fat(fatorial);

	return 0;
}

void fat(int fatorial){
	
	int resposta=1;
	
		
	for(;fatorial>=1;fatorial--){
		resposta*=fatorial;
	}
	printf("%d", resposta);



}
