#include <stdio.h>
#include <math.h>
int calcular(int a, int b, int c, float * r1, float * r2);

int main(){
	int a, b, c;
	float r1, r2;

	scanf("%d %d %d",&a,&b,&c);

	if(calcular(a , b, c, &r1,&r2)==0){
		printf("%.1f",r1);
	}else if(calcular(a , b, c, &r1,&r2)==1){
		printf("%.1f ",r1);
		printf("%.1f",r2);
	}else if(calcular(a , b, c, &r1,&r2)==-1){
		return 0;
	}

	return 0;

}

int calcular(int a, int b, int c, float * r1, float * r2){
	float delta, raiz1,raiz2;
	double X1;
		delta = (b*b)-(4*a*c);
	

		if(delta == 0){
			X1=sqrt(delta);
			raiz1 = (-b+X1)/(2*a);
			
			*r1 = raiz1;
			
			return 0;
		}else if(delta >0){
			X1=sqrt(delta);
			raiz1 = (-b+X1)/(2*a);
			raiz2 = (-b-X1)/(2*a);
		
			*r1 = raiz1;
			*r2 = raiz2;
			return 1;
		}else if(delta <0){
			return -1;
		}
}






