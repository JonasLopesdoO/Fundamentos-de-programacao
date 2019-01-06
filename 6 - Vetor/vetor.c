#include <stdio.h>
int main(){

	int codigo[10], estoque[10];
	double precoantigo[10], novopreco[10];
	int i;
	
	for(i = 0; i<10; i++){
		scanf("%d", &codigo[i]);
	}
	
	for(i = 0; i<10; i++){
		scanf("%d",&estoque[i]);
	}
	
	for(i = 0; i<10; i++){
		scanf("%lf", &precoantigo[i]);
		
			if(codigo[i]%2==0){
				if(precoantigo[i] > 1000){
					novopreco[i] = precoantigo[i] + (precoantigo[i] * 0.2);
				}else{
					novopreco[i] = precoantigo[i] + (precoantigo[i] * 0.15);
				}
			}else{
				if(precoantigo[i] > 1000){
					novopreco[i] = precoantigo[i] + (precoantigo[i] * 0.1);
				}else{
					novopreco[i] = precoantigo[i];
				}
			}
			
	}
	
	
	
		
		
		
		
		for(i=0;i<10;i++){
			printf("%d %d %.2lf %.2lf\n", codigo[i], estoque[i],precoantigo[i],novopreco[i]);
			
		}


return 0;
}
