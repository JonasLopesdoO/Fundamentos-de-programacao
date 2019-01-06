#include <stdio.h>

int main(){
	
	int n1, n2, n3, n4, cont = 0;
	int menor1, menor2, menor3, menor4;
	while(cont <= 5){
		scanf("%d %d %d %d", &n1, &n2,&n3,&n4);
		printf("%d %d %d %d\n", n1, n2, n3 ,n4);
		menor1 = n1;
		
		if(n1 < n2){
			if(n1 < n3){
				if(n1 < n4){
					menor1 = n1;
				}else{
					menor1= n4;
					menor2 = n1;
				}
			}
		}
		
		
		printf("%d %d %d %d\n", menor1, menor2, menor3, menor4);	
		
		
		cont++;
	}
	return 0;
}
