#include <stdio.h>


	int main(){
		int i;
		int n;
		scanf("%d",&n);
		int menor=100000;
	int x[n];
		int posicao;
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
				if(x[i] < menor){
					menor = x[i];
					posicao = i;
				}
				
		}
		printf("Menor valor: %d\n",menor); 
		printf("Posicao: %d\n",posicao); 
		

	return 0;
}
