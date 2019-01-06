#include <stdio.h>
void swap (int *v0, int *v1);
void rotacionaEsquerda (int *v2, int *v3, int *v4);
int main(){
   	int v0, v1, v2, v3, v4;
     	scanf("%d %d %d %d %d", &v0, &v1, &v2, &v3, &v4);
     	swap(&v0, &v1);
     	
     	rotacionaEsquerda(&v2, &v3, &v4);
     	printf("%d %d %d %d %d", v0, v1, v2, v3, v4);
   	return 0;
}

void swap (int *v0, int *v1){
	int aux;
	aux = *v0;
	*v0 = *v1;
	*v1 = aux;
}

void rotacionaEsquerda (int *v2, int *v3, int *v4){
	int auxV2=*v2;
	
	*v2 = *v3;
	*v3 = *v4;
	*v4 = auxV2;
}

