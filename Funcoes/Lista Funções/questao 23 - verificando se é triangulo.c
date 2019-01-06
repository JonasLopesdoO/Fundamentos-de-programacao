#include <stdio.h>
int verificaTriangulo(int l1, int l2, int l3);
int tipoTriangulo(int l1, int l2, int l3);

int main(){
	int l1,l2,l3,result;
	scanf("%d %d %d",&l1,&l2,&l3);
		
		if(verificaTriangulo(l1,l2,l3)){
			result = tipoTriangulo(l1,l2,l3);
			if(result == 1){
				printf("Equilatero\n");
			}
			if(result == 2){
				printf("Isoceles\n");
			}
			if(result == 3){
				printf("Escaleno\n");
			}
			
		}else{
			printf("Nao eh triangulo\n");
		}
	
	return 0;
	
}

int verificaTriangulo(int l1, int l2, int l3){
	if(l1==0 || l2==0 || l3==0){
		return 0;
	}
	if(l1>l2+l3 || l2> l1+l3 || l3 > l1+l2){
		return 0;
	}else{
		return 1;
	}
}

int tipoTriangulo(int l1, int l2, int l3){
	if(l1 == l2){
		if(l1 == l3){
			return 1;

		}else{
			return 2;
		
			 }
	}else if(l1 == l3){
		return 2;

	}else if(l2 == l3){
		return 2;

	}else{
		return 3;

	}
}



