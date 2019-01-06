#include <stdio.h>
#include <string.h>
int main(){
	

	int  vetor1[10];
	int i,vetor2[5];
	int resultante1[10] =  {' '},resultante2[10] = {' '};
	int impar=0;
	int par=0;
	int soma=0;
	

	
	for(i=0;i<10;i++){
		scanf("%d",&vetor1[i]);
		if(vetor1[i]%2!=0){
			resultante2[i] = vetor1[i];
		}
	}
	
		for(i=0;i<5;i++){
			scanf("%d",&vetor2[i]);
			soma += vetor2[i];
			
		}
	
		for(i=0;i<10;i++){
	
			if(vetor1[i]%2==0){
				resultante1[i] = soma + vetor1[i];
				par++;
			}
		}
		int j;
		
	for(j=0;j<10;j++){
		for(i=0;i<10;i++){
			if(resultante2[j]%vetor2[i]==0){
				resultante2[i]=impar++;
			}	
		}
	}
		
		
	for(i=0;i<10;i++){	
		printf("Resultante1 %d\n",resultante1[i]);	
	}
	printf("\n");
	for(i=0;i<10;i++){	
		printf("Resultante2 %d\n",resultante2[i]);	
	}
	
		
		
	
	return 0;
}
