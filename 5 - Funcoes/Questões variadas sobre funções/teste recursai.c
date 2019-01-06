#include <stdio.h>

int recursao(int n);

int main(){
	int result, n;
	scanf("%d ",&n);
	
	result = recursao(n);
	printf("%d",result);
	return 0;
}

int recursao(int n){
	if(n < 100){
				printf("%d\n",n);

		 n++;
		 recursao(n);
	}else{
		return 1;
	}
}
