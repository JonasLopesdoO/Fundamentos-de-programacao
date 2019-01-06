#include <stdio.h>
int soma(int x, int y);

int main(){
	int i;
	int x, y;
	scanf("%d %d",&x,&y);
	
	printf("%d\n",soma(x,y));
	
	return 0;
}

int soma(int first, int second){
	int i,acc=0,aux;
		if(second < first){
			aux = first;
			first = second;
			second = aux;
		}
	
	for(i= first;i<=second;i++){
		if(i%13!=0){
			acc+=i;
		}
	}
	
	return acc;
}

	

