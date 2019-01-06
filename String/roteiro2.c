#include <stdio.h>
#include <string.h>
int main(){
	
	int i;
	char string[15];
	fgets(string,15,stdin);
	int tamanho = strlen(string);
	

	for(i=tamanho-1;i>=0;i--){
		printf("%c",string[i]);
	}
	
	return 0;
}
