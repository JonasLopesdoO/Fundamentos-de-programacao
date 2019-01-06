#include <stdio.h>
#include <math.h>
float soma(int n);


int main(){
	int n;
	scanf("%d",&n);
	
	printf("%.2f",soma(n));
	
	return 0;
}

float soma(int n){
	float i,soma=0;
	
	for(i=1;i<=n;i++){
		soma+=(pow(i,2)+1)/(i+3);
	}
	return soma;
}
