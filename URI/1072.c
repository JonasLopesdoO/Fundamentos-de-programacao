#include <stdio.h>

int main(){
	
	int n;
	int i;
	int out=0,in=0;
	
	scanf("%d",&n);
	int vetor[n];
	for(i=0;i<n;i++){
		scanf("%d",&vetor[i]);
		if(vetor[i]>= 10 && vetor[i]<=20){
			in++;
		}else{
			out++;
		}
	}
	
		printf("%d in\n",in);
		printf("%d out\n",out);		

	
	return 0;
}
