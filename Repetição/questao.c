#include <stdio.h>
int main(){

	int n1[50], n2[50], n3[50], media[50], maior[50];
	
	int i;
	
	for(i = 0; i < 50; i ++){
	scanf("%d %d %d", &n1[i], &n2[i], &n3[i]);
	
	maior[i] = n1[i];
		if(n2 > maior){
		maior[i] = n2[i];
		}
		if(n3 > maior){
		maior[i] = n3[i];
		}
	
		media[i] = (n1[i]+ n2[i] + n3[i])/3;
		
	
	}

	for(i = 49; i >=0; i--){
		printf("%d\n", media[i]);
		printf("Maior nota: %d\n", maior[i]);
		
	
	}






return 0;
}
