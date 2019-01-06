#include <stdio.h>

int main(){
	long long int qnt;
	scanf("%lld",&qnt);
	long long int estrela[qnt];
	long long int i;
	long long int acc=0;
	long long int cont=0,ataque=0;
	for(i=0;i<qnt;i++){
		scanf("%lld",&estrela[i]);	
		acc+=estrela[i];
	}
	int posicao;
	
	i=0;
	if(estrela[0]==0){
		printf("%d %d",ataque,acc);
		return 0;
	}
	while(1){
		if(i<0||i>qnt-1){
			break;
		}else{
			
			if (ataque < i+1){
				ataque++;
			}
			
			if(estrela[i]%2==0){
					if(estrela[i]!=0){	
					estrela[i]--;
					cont++;
					i--;
					}else{
						i--;
					}
					
			}else{
			
				estrela[i]--;
				cont++;
				i++;
				//ataque++;
				
				
			}
		}
	}
	

		printf("%lld",ataque);
		printf(" %lld\n",acc-cont);

	
	

		
	return 0;
}
