#include <stdio.h>

int main(){

	int n1, n2, n3;
	int maior, meio, menor;
	scanf("%d %d %d", &n1, &n2, &n3);
	
	
	if(n1 < n2 && n2 < n3){
		menor = n1;
		meio = n2;
		maior = n3;
	}else if(n2 < n1 && n1 < n3){
		menor = n2;
		meio = n1;
		maior = n3;
	}else if(n3 < n2 && n2 < n1){
		menor = n3;
		meio = n2;
		maior = n1;
	}else if(n1 < n3 && n3 < n2){
		menor = n1;
		meio = n3;
		maior = n2;
	}else if(n2 < n3 && n3 < n1){
		menor = n2;
		meio = n3;
		maior = n1;
	}else if(n3 < n1 && n1 < n2){
		menor = n3;
		meio = n1;
		maior = n2;
	}
	
	
		printf("%d\n%d\n%d\n",menor, meio , maior);
		
		printf("\n");
		
		printf("%d\n%d\n%d\n", n1 , n2, n3);
	
	
	
	
	
	

return 0;
}
