#include <stdio.h>

int main(){

	int distpercorrida;
	double combustivel, cmedio;
	
	scanf("%d %lf",&distpercorrida, &combustivel);
	
	cmedio = distpercorrida/combustivel;
	
	printf("%.3lf km/l\n",cmedio);
return 0;
}

