#include <stdio.h>

int main(){
	
	int n;
	int i;
	
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		printf("%d x %d = %d\n",i+1,n,(i+1)*n);
	}
	

	
	return 0;
}
