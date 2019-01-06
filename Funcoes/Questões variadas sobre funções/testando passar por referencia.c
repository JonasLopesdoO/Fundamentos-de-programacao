#include <stdio.h>
void ler(char *a);
int main(){
	char c;
	ler(&c);
	printf("%c",c);
	return 0;
}
void ler(char *a){
	scanf(" %c",a);
}
