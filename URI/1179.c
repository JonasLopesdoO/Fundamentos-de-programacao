#include <stdio.h>

int main(){
	int par[5];
	int impar[5];
	int c_par = 0;
	int c_impar = 0;
	int aux;
	int j;
	int i;
	
	for (i = 0; i < 15; i++){
		scanf("%d", &aux);
		if (aux%2 == 0){
			if (c_par == 5){
				for (j = 0; j < 5; i++){
					printf("par[%d] = %d\n", j, par[j]);
				}
				c_par = 0;
			}
			par[c_par] = aux;
			c_par++;
		}else{
			if (c_impar == 5){
				for (j = 0; j < 5; i++){
					printf("impar[%d] = %d\n", j, impar[j]);
				}
				c_impar = 0;
			}
			impar[c_impar] = aux;
			c_impar++;
		}
	}
	for (i = 0; i < c_par; i++){
		printf("par[%d] = %d\n", i, par[i]);
	}
	for ( i = 0; i < c_impar; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}

	return 0;
}
