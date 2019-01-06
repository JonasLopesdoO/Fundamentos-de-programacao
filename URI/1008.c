#include <stdio.h>
int main(){
	
	int nfun, hfun;
	double calc, vhfun;
	
	
	
	scanf("%d %d %lf", &nfun, &hfun, &vhfun);
	
	
	
	calc = hfun * vhfun;
	
	printf("NUMBER = %d\n", nfun);
	printf("SALARY = U$ %.2lf\n", calc);
	
	
	return 0;
	
	
	
}
