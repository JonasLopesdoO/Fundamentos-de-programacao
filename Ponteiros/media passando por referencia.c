#include <stdio.h>

void calculaMedia(int a,int b,int* c);
int main(){
	int n1,n2,media;
	scanf("%d",&n1);
	scanf("%d",&n2);
	calculaMedia(n1,n2,&media);
	printf("%d\n",media);

	return 0;
}

void calculaMedia(int a,int b,int* c){
	*(c) = (a+b)/2;

}

