#include <stdio.h>

int ehPrimo(int n){
	int j, count = 0;
	for(j= 2;j < n;j++){
			
		if(n % j==0){
	
			count++;	
			break;
		}
		
	}
	
	if(count==1){
		return 0;
	
	}else{
		return 1;
	}
		
}

int main(){
	
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n); 
	int i;
	
	for(i=n;i>=2;i--){
		if(ehPrimo(i)==1){
			printf("O maior primo menor ou igual que o numero digitado e: %d",i);
			break;
		}
	}
	
	
	return 0;
}
