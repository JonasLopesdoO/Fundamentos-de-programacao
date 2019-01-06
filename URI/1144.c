
#include <stdio.h>
//60 36  18 6
//6*1 6*3 6*6 6*10

	int main(){
		int parte1, parte2, parte3;
		int n;
		int i;
		int j;
		
		
		scanf("%d",&n);
		
	for(i=0;i<=n;i++){
			parte1=i;
			parte2=i*i;
			parte3 = i*i*i;
			
			if(i==0){
			}else{
			printf("%d %d %d\n",parte1,parte2, parte3);
		
			}
			j=i;
		while(j==i){
			parte1=i;
			parte2=(i*i)+1;
			parte3 = (i*i*i)+1;
			if(i==0){
			}else{
			printf("%d %d %d\n",parte1,parte2, parte3);
		
			}
			j++;
		}
		
	}
		
	

	return 0;
}
