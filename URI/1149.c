#include <stdio.h>

int main(){
	int A;
	int N;
	int B;
	int soma,i;
	
	scanf("%d %d",&A,&N);

	while(N<=0){
		scanf("%d",&N);				
	}
	if(A>0){
		B=A+1;
		for(i=0;i<N-1;i++){
			soma=0;
			soma+= A+B;
			A=B;
			B++;
		}printf("%d\n",soma);
		
	}else{
		B=A+1;
		for(i=0;i<N-1;i++){
		soma=0;
		soma+= A+B;
		A=B;
		B++;
		}printf("%d\n",soma);
			
	}
		
return 0;	
}


