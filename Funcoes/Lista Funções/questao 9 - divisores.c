#include <stdio.h>
int soma(int n);
int main(){
	int n;
	
	scanf("%d",&n);
	printf("%d",soma(n));

	return 0;
}

int soma(int n){
	
	int i;
	int acc;
		
	for(i=1;i<=n;i++){
		if(n%i==0){
			acc+=i;
		}
	}
	
	return acc;



}
