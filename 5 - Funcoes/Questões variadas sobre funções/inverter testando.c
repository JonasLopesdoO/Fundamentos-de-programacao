#include <stdio.h>
int inverte(int n);
int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d",inverte(n));
	
	return 0;
	
}

int inverte(int n){
	int result=0,i=1;
	
	while(i<=n){
		result *=10;
		result+=(n%(i*10)-n%i)/i;
		i*=10;
	}
	return result;
}
