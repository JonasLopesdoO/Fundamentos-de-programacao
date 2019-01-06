#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main(){
	
	double coss, H, distancia, angulo;
	
	scanf("%lf", &angulo);
	scanf("%lf", &distancia);
	
		
  
  
  coss = cos(angulo*PI/180);
	H = distancia/coss;
	
	printf("%.2lf",H);

	
	return 0;
}
