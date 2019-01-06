#include <stdio.h>
int divisao(int x, int y);

int main(){
	int i;
	int x, y;
	scanf("%d %d",&x,&y);
	
	divisao(x,y);
	
	return 0;
}

int divisao(int first, int second){
	int i,acc=0,aux;
		if(second < first){
			aux = first;
			first = second;
			second = aux;
		}
	
	for(i= first+1;i<second;i++){
		if(i%5==2 || i%5==3){
			printf("%d\n",i);
		}
	}
	
	
}

	

