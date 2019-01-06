#include <stdio.h>

int main(){
	int i=0;
	int x,z;
		int acc=0,cont;	
	scanf("%d",&x);
		scanf("%d",&z);


	while(z<=x){
		scanf("%d",&z);
	}
	
	while(acc<=z){
		acc = acc + x;
		x++;	
		cont++;
	}
	printf("%d\n",cont);
	return 0;
}


