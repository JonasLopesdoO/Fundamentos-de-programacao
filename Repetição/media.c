#include <stdio.h>
int main(){
	 
	 int cont = 0;
	 double acc = 0;
	 double num;
	 char op = 's';
	 
	 
	 while(op == 's'){
	 	scanf("%lf", &num);
	 	cont ++;
	 	acc += num;
	 	
	 	printf("%lf",acc/cont);
	 	scanf(" %c", &op);
	 
	 
	 }
	
	
}
