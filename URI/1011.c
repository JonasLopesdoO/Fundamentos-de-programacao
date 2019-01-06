#include <stdio.h>
#include <math.h>
int main(){
	
	double raio, calc;
	double pi = 3.14159;
	scanf("%lf", &raio);
	calc = (4.0/3)* pi * pow(raio,3);
	
	
	

	printf("VOLUME = %.3lf\n", calc	);
	
	
	return 0;
	
	
	
}
