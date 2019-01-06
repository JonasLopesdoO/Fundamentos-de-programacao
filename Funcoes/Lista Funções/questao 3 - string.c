#include <stdio.h>
#include <string.h>
char nome1[100];
char nome2[100];

int testa();
int main(){
	fgets(nome1,100,stdin);
	fgets(nome2,100,stdin);
		printf("%d",testa());
	return 0;
}

int testa(){
	int i=0;
	int indice=0;
	
		while(nome1[i]!='\0'&&nome1[i]==nome2[i]){
				i++;
				
		}
		if(nome1[i]==nome2[i]){
			return 0;
		}else{
			return i;
		}
	
}
